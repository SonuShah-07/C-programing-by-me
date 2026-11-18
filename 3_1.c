// ======================== CHECK AGE FOR ELIGIBILITY FOR VOTING  ========================== //

#include <stdio.h>
int main(){
    int a;
    printf("Enter your age = ");
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible to vote");
    }
    else if(a<18 && a>0){
        printf("Not eligible to vote");
    }
    else {
        printf("Paida to ho ja pehle");
    }
return 0;                                
}