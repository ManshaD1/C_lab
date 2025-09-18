//WAP to perform conditional operators on two numbers from user

#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    float f;


    printf("enter first no");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    c=a+=b;
    d=a-=b;
    e=a*=b;
    f=a/=b;


    printf("output of += is %d\n",c);
    printf("output of -= is %d\n",d);
    printf("output of *= is %d\n",e);
    printf("output of /= is %f\n",f);
    return 0;

}