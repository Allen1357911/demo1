#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    a = 1;
    int b = 10;
    int c=b;
    while(a<n){
        
        b*=c;
        a++;

    }
int d;

    while(c>0){
       d=c%10;
        c/=10;

    }
    int sum=0;
    sum+=d;
    return 0;
}