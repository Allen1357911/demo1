#include <stdio.h>

int main()

{
    int number1,number2;
    printf("请输入数字：");
    scanf("%d %d",&number1,&number2);
    
    int a=number1+number2;
    int b=number1-number2;
    int c=number1*number2;
    int d=number1/number2;

    printf("%d+%d=%d\n",number1,number2,a);
    printf("%d-%d=%d\n",number1,number2,b);
    printf("%d*%d=%d\n",number1,number2,c);
    printf("%d/%d=%d\n",number1,number2,d);

    return 0;
}