/*                          NUMBER IS DIVISIBLE BY 97 OR NOT                       */


#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter your number = ");
    scanf("%d",&a);
    b=97;
    c=a%b;
    printf("remainder when it is divided by 97 is %d",c);
    return 0;
}