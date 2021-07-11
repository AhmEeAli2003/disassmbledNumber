#include<stdio.h>
void main(void)
{
    int number,temp[10],i=0,power=1;
    printf("please input number: "); scanf("%d",&number);
    int tmp=number;
    while(number !=0)
    {
        temp[i]=number%10;
        number/=10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        printf("%d + ",temp[j]*power);
        power*=10;
    }
    printf("\b\b=%d\n",tmp);
}
