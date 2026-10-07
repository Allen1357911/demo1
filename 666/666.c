#include <stdio.h>

int main()
{
    int n;
    int a[10000];
    int b[10000];
    int c[10000];
    int i;
    int sum=0;
    
    scanf("%d",&n);
    for( i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for( i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    for( i=0; i<n; i++){
        scanf("%d",&c[i]);
    }

    for( int d=0; d<n; d++){
        for( int e=0; e<n; e++){
            for( int f=0; f<n; f++){
                
                int h=a[d] +b[e] +c[f];
                
                 if(h>sum){
                 sum=h;
                 }
            }
        }
    }
    printf("%d",sum);
    return 0;
}