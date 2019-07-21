#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
	
    long long int a, b, c, d, divisores;

    cin >> a >> b >> c >> d;
    
    set<int> group;

    for(int i = 1; i <= sqrt(c); i++){
        if( c%i == 0 ) {
            divisores = c/i;

            if(i%a == 0 && i%b != 0 && d%i != 0) {
                group.insert(i);
                //divisor
            }

            if(divisores%a == 0 && divisores%b != 0 && d%divisores != 0) {
                group.insert(divisores);
                //divisor
            }
        }
    }

    if(group.size() == 0)
        cout << -1 << endl;
    else
        cout << *group.begin() << endl;

    return 0;
}