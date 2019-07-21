#include<bits/stdc++.h>

using namespace std;

struct data{
    string name;
    int num;
};

data info[1001];

bool cmp(const data a,const data b){
    return a.num < b.num;
}

int main(){

    int n;
    while(cin >> n){
    	
      for(int i = 0; i < n ; i++){ 
	  	  cin >> info[i].name >> info[i].num;
	  }
	  
	  stable_sort(info,info+n,cmp);
	  
      for(int i = 0; i < n ; i++){
            if(i!=0) cout << " ";
            cout << info[i].name ;
            info[i].name.clear(),info[i].num = 0;
      }
      
      cout << endl;
      
    }
    
    return 0;
}