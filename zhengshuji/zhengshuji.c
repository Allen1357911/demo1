#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d",&a);
    for(int i=a;i<=a+3;i++){
        for(int j=a;j<=a+3;j++){
            for(int k=a;k<=a+3;k++){
                if(i!=j && j!=k && i!=k){
                    printf("%d%d%d ",i,j,k);
                    b++;
                    if(b==6){
                        printf("\n");
                        b=0;
                    }
                }
            }
        }
    }
    return 0;
}