#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	float value, total = 0.0, qtd_fruit;
	float m_day = 0, m_kg = 0;
	char fruit[10000];
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		
		scanf("%f", &value);
		total+= value;
		int count = 0;
		getchar();
		gets(fruit);
		   
		   for(int j = 0; fruit[j] != '\0'; j++){
			   if(fruit[j] == 32){
				  count ++; 
			   }
		   }
		   count++;
		   qtd_fruit+= count;
		   printf("day %d: %d kg\n", i, count);	
		
	}
	m_kg = (float) (qtd_fruit/n);
	m_day = (float) (total/n);
	printf("%.2f kg by day\n", m_kg);
	printf("R$ %.2f by day\n", m_day);
	
	
	return 0;
}