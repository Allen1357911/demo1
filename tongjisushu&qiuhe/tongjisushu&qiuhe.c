#include <stdio.h>
int main()
{
    int m,n;
    int count=0;
    int i;
    int k;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++){
        int isprime=1;
     
        for(k=1;k<=i;k++){
            if(i%k==0){
                isprime=0;
                break;
            }
        }
        if(isprime=1){
            sum+=i;
            count++;
        }
    }
    printf("%d %d",count,sum);
    return 0;
}