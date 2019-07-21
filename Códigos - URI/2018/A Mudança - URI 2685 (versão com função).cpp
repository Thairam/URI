#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r;
    while(cin >> r)
    {
        
        if(r<90 || r == 360)
            cout<<"Bom Dia!!\n";
        else if(r>=90 && r<180)
            cout<<"Boa Tarde!!\n";
        else if(r>=180 && r<270)
            cout<<"Boa Noite!!\n";
        else if(r>= 270 && r < 360)
            cout<<"De Madrugada!!\n";
    }
    return 0;
}