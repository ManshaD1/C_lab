//WAP to perform relational operators on two numbers from user

#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;


    printf("enter first no");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    c=a>b;
    d=a<b;
    e=a>=b;
    f=a<=b;
    g=a==b;
    h=a!=b;


    printf("output of > is %d\n",c);
    printf("output of < is %d\n",d);
    printf("output of <= is %d\n",e);
    printf("ouput of >=is %d\n",f);
    printf("output of == is %d\n", g);
    printf("output of != is %d\n", h);
    return 0;

}