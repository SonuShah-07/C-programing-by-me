#include <stdio.h>
int main(){
    int P,R,T;
    float SI;
    /* P= principle amount , R= rate of interest , T= time , SI= simple interest */
    printf("enter principle amount  \n enter rate of interest  \n enter time in years  \n",P,R,T);
    scanf("%d\n%d\n%d",&P,&R,&T);
    SI=P*R*T/100;
    printf("Simple interest is %f",SI);
    return 0;

}