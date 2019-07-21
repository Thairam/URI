#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double a = 0, g = 0, ra = 0, rg = 0;
    scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);
 	printf("%s\n", (ra/a > rg/g)? "A" : "G");   
 
    return 0;
}