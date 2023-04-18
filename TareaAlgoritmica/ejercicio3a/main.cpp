#include<stdio.h>
#include<math.h>
int main()
{
     long long int cases,warriors,row;
     while(scanf("%ld",&cases)== 1) 
     {
        for(int i=1;i<=cases;i++)
        {
            scanf("%ld",&warriors);
            row=(sqrt(1+8*warriors)-1)/2;
            printf("%ld\n",row);
         }
         return 0;
    }
    return 0;
}
