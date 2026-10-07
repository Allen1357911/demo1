#include <stdio.h>

int main()

{
    int price=0;
    int amount=0;

    printf("请输入金额（元）");
    scanf("%d",&price);

    printf("请输入票面（元）");
    scanf("%d",&amount);

    printf("找您%d元\n",amount-price);

    return 0;
    
}