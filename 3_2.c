#include <stdio.h>
int main(){
    float a,b;
    printf("Enter your marks = ");
    scanf("%f",&a);
    if(a>=90 && a<=100){
        printf("Grade A");
    }
    else if(a>=80){
        printf("Grade B");
    }
    else if(a>=70){
        printf("Grade C");
    }
    else if(a>=60){
        printf("Grade D");
    }
    else if(a>=50){
        printf("Grade E");
    }
    else {
        printf("Grade F");
    }
}