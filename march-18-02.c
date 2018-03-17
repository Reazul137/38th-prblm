#include<stdio.h>
int main()
{
    int x, y;
    float div_result;

    printf("Input the first number : ");
    scanf("%d",&x);

    printf("Input the second number : ");
    scanf("%d",&y);

    if( y != 0)
    {
        div_result = (float)x / (float)y;
        printf("%.1f",div_result);
    }
    else
    {
        printf("Division not possible");
    }

    return 0;
}
