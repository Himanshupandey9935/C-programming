// converting celsius to fahrenheit

#include<stdio.h>

int main() {
 
    float celsius , fahrenheit;

    printf("enter the temperature into celsius ");
    scanf("%f", &celsius);

    fahrenheit = (celsius *9/5) + 32;

    printf("temperature in fahrenheit = %f", fahrenheit);

    return 0;
    
}