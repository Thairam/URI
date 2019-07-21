#include <bits/stdc++.h>


int main(){
     char words[5003], compare;
     bool changed;

     while(fgets(words, 5003, stdin)!= NULL){
         
         compare = tolower(words[0]);
         changed = false;   
		 int i, j;
		 	
         for(i = 1, j = 0; i < strlen(words); i++){
         	 words[i] = tolower(words[i]);
        
             if(words[i - 1] == ' '){

                 if(words[i] != compare){
                     compare = words[i];
                      changed = false;
         	 	 }else if(!changed){       
         	 	     j++;
         	 	     changed = true;
         	 	 }
         	 }        	
         }
         
         printf("%d\n", j);
         
     }
         
	 return 0;
}
