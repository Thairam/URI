#include <bits/stdc++.h>
#define MAXN 1010
#define ii pair<int, int>
#define iii pair<double, ii>
#define pq priority_queue<iii, vector<iii>, greater<iii> >

using namespace std;
int subset[MAXN];
bool visited[MAXN];
double g[MAXN][MAXN];

typedef double T;

typedef struct pt{
  T x, y;

  pt(){}

  pt(T x, T y) : x(x), y(y) {}

  pt operator -(pt p) {return pt(x-p.x, y-p.y);}
  pt operator +(pt p) {return pt(x+p.x, y+p.y);}
  pt operator * (T a) {return pt(x*a, y*a);}
  pt operator / (T a) {return pt(x / a, y / a);}

  bool operator != (pt p) {return p.x != x || p.y != y;}
} pt, vet;

ostream & operator<<(ostream &os, pt p){return os << "(" << p.x << ", " << p.y << ")";}

T sq(vet v) {return v.x*v.x + v.y*v.y;}
T abs(vet v) {return sqrt(sq(v));}
T dot(vet v, vet w) {return v.x*w.x + v.y*w.y;}
T cross(vet v, vet w) {return v.x*w.y - v.y*w.x;}
T orient(pt p1, pt p2, pt p3) {return cross(p2-p1, p3-p1);}

bool properInter(pt a, pt b, pt c, pt d, pt &out){
  double oa = orient(c,d,a), ob = orient(c,d,b), oc = orient(a,b,c), od = orient(a,b,d);

  if(oa*ob < 0 && oc*od < 0){
    out = (a*ob - b*oa) / (ob-oa);
    return true;
  }
  return false;
}

typedef struct line {
  vet V;
  T c;

  line(pt p, pt q) : V(q-p), c(cross(V, q)) {}
  bool cmpProj(pt p, pt q) {return dot(V,p) < dot(V,q);}
 
  T side(pt p) {return cross(V, p) - c;}
  double dist(pt p) {return abs(side(p)) / abs(V);}

} line;

bool inDisk(pt a, pt b, pt p){
  return dot(a-p, b-p) <= 0;
}

bool onSegment(pt a, pt b, pt p){return orient(a,b,p) == 0 && inDisk(a,b,p);}

double segPoint(pt a, pt b, pt p){
  if(a != b){
    line l(a, b);
    if(l.cmpProj(a, p) && (l.cmpProj(p, b)))
      return l.dist(p);
  }
  return min(abs(p-a), abs(p-b));
}

double segSeg(pt a, pt b, pt c, pt d){

  pt dummy;
  if(properInter(a,b,c,d,dummy)) return 0;

  if(onSegment(a, b, c)) return 0;
  if(onSegment(a, b, d)) return 0;
  if(onSegment(c, d, a)) return 0;
  if(onSegment(c, d, b)) return 0;

  return min(min(segPoint(a,b,c), segPoint(a,b,d)), min(segPoint(c,d,a), segPoint(c,d,b)));
}

void union_set(int x, int y) {subset[x] = y;}

int find_set(int x) {return subset[x] == x ? x : subset[x] = find_set(subset[x]);}

void kruskal(pq & fila, int n){
  for(int i = 0; i < n; i++){
    subset[i] = i;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      g[i][j] = -1;
    }
  }

  while (!fila.empty()){
    iii top = fila.top();
    fila.pop();
    int u = find_set(top.second.first);
    int v = find_set(top.second.second);

    if(u != v){
      union_set(u, v);
      g[top.second.first][top.second.second] = top.first;
      g[top.second.second][top.second.first] = top.first;
    }
  }
}

bool dfs(int node, int dest, double & menor_aresta, int n){

  if (visited[node]) return false;
  if(node == dest) return true;
  visited[node] = true;

  for(int i = 0; i < n; i++){
    if(g[node][i] != -1){
      if (dfs(i, dest, menor_aresta, n)){
        menor_aresta = max(menor_aresta, g[node][i]);
        return true;
      }
    }
  }
  return false;
}

int main() {

  int n;
  while(scanf("%d", &n) && n){
    int x, y, l;
    pt pts[n][2];
    for(int i = 0; i < n; i++){
      scanf("%d %d %d", &x, &y, &l);
      pts[i][0] = pt(x,y);
      if(l >= 0)
        pts[i][1] = pt(x+l, y);
      else
        pts[i][1] = pt(x, y+(l*-1));  
    }

    pq fila;

    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
          iii e;
          e.second.first = i;
          e.second.second = j;
          e.first = segSeg(pts[i][0], pts[i][1], pts[j][0], pts[j][1]);

          fila.push(e);
      }
    }

    kruskal(fila, n);
    memset(visited, 0, n*sizeof(bool));
    double menor_aresta = 0;
    dfs(0, 1, menor_aresta, n);

    printf("%.2lf\n", menor_aresta);
  }
}