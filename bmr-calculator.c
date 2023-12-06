//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Linkedin: https://www.linkedin.com/in/plabon-rahman-me
//Last Modified: 06/12/2023; 14:29;
//Code Purpose: Basal Metabolic Rate Calculator
#include<stdio.h>
int main()
{
    char ch;
    float age, weight, height, weight1, height1, age1, bmr, bmr1;
    printf("Enter Your Gender(M or F):");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'M':
        printf("Harris-Benedict Equation for Men\n");
        printf("Enter Your Weight(kg):");
        scanf("%f", &weight);
        printf("Enter Your Height(cm):");
        scanf("%f", &height);
        printf("Enter Your Age(years):");
        scanf("%f", &age);
        bmr= 88.362+(13.397*weight)+(4.799*height)-(5.677*age);
        printf("Your BMR is: %0.3f Calories/day", bmr);
        break;
        
        case 'F':
        printf("Harris-Benedict Equation for Women\n");
        printf("Enter Your Weight(kg):");
        scanf("%f", &weight1);
        printf("Enter Your Height(cm):");
        scanf("%f", &height1);
        printf("Enter Your Age(years):");
        scanf("%f", &age1);
        bmr= 447.593+(9.247*weight)+(3.098*height)-(4.330*age);
        printf("Your BMR is: %0.3f Calories/day", bmr1);
        break;
    }
    return 0;
}
