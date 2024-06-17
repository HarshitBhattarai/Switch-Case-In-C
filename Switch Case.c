#include <stdio.h>
float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}
float fahrenheitToCelsius(float fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}
float kilometersToMiles(float kilometers) 
{
    return kilometers * 0.621371;
}

float milesToKilometers(float miles) 
{
    return miles / 0.621371;
}

float kilogramsToPounds(float kilograms) 
{
    return kilograms * 2.20462;
}

float poundsToKilograms(float pounds) 
{
    return pounds / 2.20462;
}

int main() 
{
    int choice;
    float value, result;
    printf("Conversions Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Miles to Kilometers\n");
    printf("5. Kilograms to Pounds\n");
    printf("6. Pounds to Kilograms\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    switch(choice) 
	{
    case 1:
    printf("Enter temperature in Celsius: ");
    scanf("%f", &value);
    result = celsiusToFahrenheit(value);
    printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
    break;
    case 2:
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &value);
    result = fahrenheitToCelsius(value);
    printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
    break;
    case 3:
    printf("Enter distance in Kilometers: ");
    scanf("%f", &value);
    result = kilometersToMiles(value);
    printf("%.2f Kilometers = %.2f Miles\n", value, result);
    break;
    case 4:
    printf("Enter distance in Miles: ");
    scanf("%f", &value);
    result = milesToKilometers(value);
    printf("%.2f Miles = %.2f Kilometers\n", value, result);
    break;
    case 5:
    printf("Enter weight in Kilograms: ");
    scanf("%f", &value);
    result = kilogramsToPounds(value);
    printf("%.2f Kilograms = %.2f Pounds\n", value, result);
    break;
    case 6:
    printf("Enter weight in Pounds: ");
    scanf("%f", &value);
    result = poundsToKilograms(value);
    printf("%.2f Pounds = %.2f Kilograms\n", value, result);
    break;
    default:
    printf("Invalid choice!\n");
    break;
    }
    return 0;
}
