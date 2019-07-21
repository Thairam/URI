#include <bits/stdc++.h>

using namespace std;

int main(){
	
	  int n;
	  int matriz[12][12];
	  
	  scanf("%d", &n);
	  
	  while(n--){
		  
		  memset(matriz, 0, sizeof(matriz));
		  
		  for(int i = 0; i < 9; i+= 2){
			  for(int j = 0; j <= (i + 1); j+= 2){
				  cin >> matriz[i][j];
			  }
		  }
		  
		  for(int i = 0; i < 8; i+= 2){
			  for (int j = 0; j <= (i + 1); j+= 2){
			  	
			  	  matriz[i + 2][j + 1] = ( matriz[i][j] - matriz[i + 2][j] - matriz[i + 2][j + 2] ) / 2;
			  	  
			  	  matriz[i + 1][j] = matriz[i + 2][j] + matriz[i + 2][j + 1];
			  	
				  matriz[i + 1][j + 1] = matriz[i + 2][j + 1] + matriz[i + 2][j + 2];				  
  
			  }
		  }
		  
		  for(int i = 0; i < 9; i++){
			  for(int j = 0; j < (i + 1); j++){
				  cout << matriz[i][j];
				  
				  if(i != j){
					  cout << " ";
				  }
			  }
			  cout << endl;
		  }
		  
	  }
	  
	  
	return 0;
}