   #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int a,b,c,n;
         scanf("%d",&n);
    
        while(n--){
                scanf("%d %d",&a,&b);
                printf("%d\n", __gcd(a,b));
    
        }
        return 0;
    }
