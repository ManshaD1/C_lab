/* WAP to compute the BMI of the person and print BMI values as per the following ranges. You can use the following formula to compute BMI weight(kgs)/height*height(mtrs) 
BMI: starvation<15 ; anorexia 15.1 to 17.5 ; underweight 17.6 to 18.5 ; ideal 18.6 to 24.9;  overweight 25 to 25.9; obese 30 to 39.9; morbidity obese 40.0 above */

#include<stdio.h>
int main(){
    float w,h;
    printf("enter weight and height of the person");
    scanf("%f %f", &w, &h);
    float BMI= w/(h*h);
    printf("BMI is %f\n", BMI);
    if (BMI<15){
        printf("person is suffering from starvation\n");
    }
    
    else if(BMI>=15 && BMI <17.5){
        printf("person is suffering from anorexia\n");
    }
    
    else if(BMI>=17.5 && BMI <=18.5){
        printf("person is underweight\n");
    }

    else if(BMI>18.5 && BMI <=24.9){
        printf("person is ideal\n");
    }

    else if(BMI>=25 && BMI <=29.9){
        printf("person is overweight\n");
    }

    else if(BMI>=30 && BMI <=40){
        printf("person is obese\n");
    }

    else if(BMI>40){
        printf("person is morbidly obese\n");
    }
    return 0;

}