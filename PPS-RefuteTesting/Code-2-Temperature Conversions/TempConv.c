#include <stdio.h>
int main()
{
    //Declare variables
    float temp;
    char unit;
    float tempF, tempK, tempC;
    //Prompt the user to enter a temperature and a unit of temperature
    printf("Enter temperature: ");
    scanf("%f", &temp);
    printf("Enter temperature scale (C/F/K): ");
    scanf(" %c", &unit);
    
    if (unit == 'C')
    {
        tempC = temp;
        tempF = temp * 9 / 5 + 32;
        tempK = temp + 273.15;
        printf("%.13f\n  %.13f\n", tempF, tempK);
        
    }
    else if (unit == 'F')
    {
        tempC = (temp - 32) * 5 / 9;
        tempF = temp;
        tempK = temp + 273.15;
        printf("%.13f\n  %.13f\n", tempC ,tempK);
        
    }
    else if (unit == 'K')
    {
        tempC = temp - 273.15;
        tempF = (tempC * 9 / 5) + 32;
        tempK = temp;
        printf("%.13f\n %.13f\n", tempC ,tempF);
        \
    } else {
        printf("Invalid\n");
        return 1;
    }

    return 0;
}