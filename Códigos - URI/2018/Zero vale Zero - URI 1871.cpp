#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int n,m;
    while(1){
    	
        stack <int> s;
        int soma = 0;
        cin>> n >> m;
        if(n + m == 0) break;
    
        soma = n + m;n
        
        while(soma){
        	
            if(soma%10){
                s.push(soma % 10);
            }
            soma /= 10;
        }
        
        while(!s.empty()){
        	
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}
