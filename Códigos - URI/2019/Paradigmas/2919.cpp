#include<bits/stdc++.h>
#define PB push_back

using namespace std;

vector<int> lis;

int main(){

    int n;
    while(scanf("%d", &n) != EOF){

        for(int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            
            vector<int>::iterator it = lower_bound(lis.begin(), lis.end(), x);

            if(it == lis.end()) lis.PB(x);
            else *it = x;
        }
		
        printf("%d\n", lis.size());
        lis.clear();
    }

    return 0;
}