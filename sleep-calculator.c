//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Linkedin: https://www.linkedin.com/in/plabon-rahman-me
//Last Modified: 06/12/2023; 14:54;
//Code Purpose: Sleep Calculator
#include<stdio.h>
int main()
{
    float age;
    printf("Enter Your Age(years):");
    scanf("%f", &age);
    
    if(age<=0.3)
    {
        printf("Newborn\n");
        printf("Estimated Sleeping Time: 14-17 hours per day\n");
    }
    else if(age<=0.5)
    {
        printf("Infants\n");
        printf("Estimated Speeping Time: 12-15 hours per day\n");
    }
    else if(age>=1 && age<=2)
    {
        printf("Toddlers\n");
        printf("Estimated Speeping Time: 11-14 hours per day\n");
    }
    else if(age>=3  && age<=5)
    {
       printf("Preschoolers\n");
       printf("Estimated Speeping Time: 10-13 hours per day\n"); 
    }
    else if(age>=6  && age<=13)
    {
       printf("School Age Childern\n");
       printf("Estimated Speeping Time: 9-11 hours per day\n"); 
    }
    else if(age>=14  && age<=17)
    {
        printf("Teenagers\n");
       printf("Estimated Speeping Time: 8-10 hours per day\n"); 
    }
    else if(age>=18  && age<=25)
    {
        printf("Young adults\n");
       printf("Estimated Speeping Time: 7-9 hours per day\n"); 
    }
    else if(age>=26  && age<=64)
    {
        printf("Adults\n");
       printf("Estimated Speeping Time: 7-9 hours per day\n"); 
    }
    else if(age>=65)
    {
        printf("Older adults\n");
       printf("Estimated Speeping Time: 7-8 hours per day\n"); 
    }
    printf("\n");
    printf("\"Remember that quality of sleep is just as important as quantity. If you have persistent sleep concerns or difficulties, it's advisable to consult with a healthcare professional or a sleep specialist for personalized advice.\"");
    return 0;
}
