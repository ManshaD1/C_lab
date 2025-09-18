//WAP to perform arithmetic operators on two numbers from user

#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    float e;
    int f;
    printf("enter first no");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a/b;
    f=a*b;

    printf("addition is %d\n",c);
    printf("subtraction is %d\n",d);
    printf("division is %f\n",e);
    printf("multiplication is %d\n",f);
    return 0;

}