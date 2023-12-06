//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Linkedin: https://www.linkedin.com/in/plabon-rahman-me
//Last Modified: 06/12/2023; 13:47;
//Code Purpose: Body Mass Index Calculator
#include<stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter Your Weight(Kg):");
    scanf("%f", &weight);
    printf("Entter Your Height(Meter):");
    scanf("%f", &height);
    bmi=weight/(height*height);
    printf("Your BMI is: %0.2f\n", bmi);
    if(bmi<18.5)
    {
        printf("Unerweight");
    }
    else if(bmi>=18.5  && bmi<=24.9)
    {
        printf("Normal Weight");
    }
    else if(bmi>=25.0  && bmi<=29.9)
    {
        printf("Overweight");
    }
    else if(bmi>=30.0  && bmi<=34.9)
    {
        printf("Obesity Class I");
    }
    else if(bmi>=35.0  && bmi<=39.9)
    {
        printf("Obesity Class II");
    }
    else if(bmi>=40)
    {
        printf("Obesity Class III");
    }
    return ;
}
