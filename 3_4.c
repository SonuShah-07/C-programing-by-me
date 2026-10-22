#include <stdio.h>
int main(){
    float p,c,m,t;
    printf("Enter marks in physics = \n");
    scanf("%f",&p);
    printf("Enter marks in chemistry = \n");
    scanf("%f",&c);
    printf("Enter marks in maths = \n");
    scanf("%f",&m);
    if(p<33){
        printf("student fails in physics\n");
        printf("So student fails in class\n");
    }
    if(c<33){
        printf("student fails in chemistry\n");
    }
    if(m<33){
        printf("student fails in maths\n");
        printf("So student fails in class\n");
    }
    t=((p+c+m)/300)*100 ;
    if(t<40){
        printf("student fails in class\n");
    }
    else{
        printf("student pass the class");
    }
return 0;
}