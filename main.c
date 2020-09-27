#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,n,Dig,C;
    printf("Enter a number to check\n");
    scanf("%d",&num);
    n = num;
    C = 0;
    while(n!=0){
        Dig = n%10;
        n = n/10;
        C = C + pow(Dig,3);
    }
    if(C==num){
        printf("The num %d is an armstrong number\n",num);
    }else{
    printf("The given num %d is not an armstrong number\n",num);}
    return 0;
}
