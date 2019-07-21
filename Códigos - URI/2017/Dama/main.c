#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    int dx,dy;
    int m = 0;

    while(1){
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        if((x1+y1+x2+y2) ==0) break;
        if(x1==x2 && y1==y2){
            printf("0\n");
        }else if(x1==y1 || x2==y2){
            dx = abs(x1-x2);
            dy = abs(y1-y2);
        }else{
            printf("2\n");
        }


    }
    return 0;
}
