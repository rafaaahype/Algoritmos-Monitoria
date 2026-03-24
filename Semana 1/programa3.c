#include <stdio.h>

int main(){
    float celsius;
    scanf("%f",&celsius);
    float fahrenheit = (celsius * 1.8) + 32;
    float kelvin = celsius + 273.15;
    printf("fahrenheit: %.2f\nkelvin: %.2f",fahrenheit,kelvin);
    return 0;
}