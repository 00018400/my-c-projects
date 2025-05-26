#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char measurementType;
    float temperature;
    
    printf("\nHi! \nEnter the measurement system you want: \nF - Fahrenheit,\t C - Celsius: \t");
    scanf("%c", &measurementType);

    measurementType = toupper(measurementType);
    
    if (measurementType == 'C') {
        printf("\nYou have chosen to measure in degrees Celsius.\nPlease enter how many temperatures: \t");
        scanf("%f", &temperature);
        temperature = (temperature * 9/5) + 32;
        printf("\nThe temperature in Fahrenheit is: \t%.1f\n", temperature);
    } else if (measurementType == 'F'){
        printf("\nYou have chosen to measure in degrees Fahrenheit.\nPlease enter how many temperatures: \t");
        scanf("%f", &temperature);
        temperature = ((temperature - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is: \t%.1f\n", temperature);
    } else {
        printf("\nPlease enter the valid option!");
    }
    
    return 0;
}