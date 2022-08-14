#include <stdio.h>
int main(void)
{
    printf("Enter the temperature in Farenheit: ");
    float temperatureF;
    scanf("%f", &temperatureF);
    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;
    printf("The corresponding temperature in Celsuis is %.2f C. \n", temperatureC);
    printf("Press any key to close the program");
    float close;
    scanf("%f", &close);
    return 0;
}