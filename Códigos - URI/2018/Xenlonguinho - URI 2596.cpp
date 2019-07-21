#include<bits/stdc++.h>

using namespace std;

int a[1001];

//calcula todos os divisores de i, variando de 2 até 1000
void divisores(){
    a[0] = 3;
    a[1] = 1;
    
    for(int i = 2; i <= 1000; i++){
        int count = 2;
        
        for(int j = 2;j <= (i/2); j++)
            if(i % j == 0) count++;
            
        a[i] = count;
    }
}

int main(){
	
    divisores();
    int test_case;
    scanf("%d",&test_case);
    int number;
    
    while(test_case--){
        scanf("%d",&number);
        int count = 1;
        
        for(int i = 3;i <= number;i++){
            if(a[i] % 2 == 0)
                count++;
        }
        
        printf("%d\n",count);
    }
    
    return 0;
}