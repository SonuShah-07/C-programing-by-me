
//=============== Calculate income tax paid by an employee to the government ========================

#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter your income = \n");
    scanf("%f",&a);
    b=(5*a)/100;
    c=(20*a)/100;
    d=(30*a)/100;
    if(a<250000){
        printf("Your tax amount is zero");
    }
    else if(a>=250000 && a<500000){
        printf("Your tax amount is =%f",b);
    }
    else if(a>=500000 && a<1000000){
        printf("Your tax amount is =%f",c);
    }
    else if(a>=1000000){
        printf("Your tax amount is =%f",d);
    }
return 0;    
}