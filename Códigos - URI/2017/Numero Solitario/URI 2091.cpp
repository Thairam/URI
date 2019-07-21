#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n and n != 0){
           map < string , int > m_p;
            string s;
    for(int i = 0; i < n ;i++) {
            cin >> s;
            m_p[s]++;
    }
    for(map < string , int > :: iterator it =  m_p.begin() ;  it  !=  m_p.end() ; it++ )
    {
        if((it->second) & 1 ) {
            cout <<  it->first  << endl;
            break;
        }
       }
    }
    return 0;
}
