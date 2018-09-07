#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n1, resto;
    
    printf("\nEntre com um numero:");
    scanf("%d", &n1);
    
    resto = n1 % 2;
    
    if (resto==0)
    {
    printf("O número é par");
}
    else
    {
    printf("O número é ímpar");
}   
    system("pause");
    return 0;
}
