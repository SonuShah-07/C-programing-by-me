#include <stdio.h>
int main(){
    float p,c,m,a;
    printf("Enter marks in physics = ");    
    scanf("%f",&p);
    printf("Enter marks in chemistry = ");
    scanf("%f",&c);
    printf("Enter marks in maths = ");
    scanf("%f",&m);
    a=((p+c+m)/300)*100 ;
    if(p<33){
        printf("Student is failed in Physics\n\n");
    }
    if(c<33){
        printf("Student is failed in chemistry\n");
    }
    if(m<33){
        printf("Student is failed in maths\n");
    }
    if(a<40){
        printf("Student does not get total 40 percent\nSo he got failed\n");
    }
    if(p<33 || c<33 || m<33){
        printf("As student fails in subject so he got fail\n");
    }
    else{
        printf("Student got pass");
    }
    return 0;    
}