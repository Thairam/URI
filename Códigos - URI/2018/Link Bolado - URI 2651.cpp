#include<bits/stdc++.h>
using namespace std;
int main(){
	
    string str;
    cin>>str;
    
    for(int i=0;i<str.length();i++){
        if(str[i]>=65&&str[i]<=90)str[i]=str[i]+32;
    }
    
    // verifica se foi encontrada alguma ocorrência da palavra zelda, caso contrário retorna string::npos
    size_t found = str.find("zelda");
    
    // se foi encontrada alguma correspondencia da palavra zelda imprime Link Bolado
    if(found!=std::string::npos)  cout<<"Link Bolado\n";
    else cout<<"Link Tranquilo\n";
    
    return 0;
}
