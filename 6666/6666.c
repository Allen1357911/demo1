
#include <stdio.h>
int main()
{
    //int N=3;
    //scanf("%d",&N);
    int i=1,j=1,k=1;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            for(k=1;k<=9;k++){
                int a=i*100+j*10+k;
                int b=i*i*i;
                int c=j*j*j;
                int d=k*k*k;
                int e=a;
                if(e==b+c+d){
                    printf("%d",e);
                }
            }
        }
    }
    return 0;
}