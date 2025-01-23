#include<stdio.h>

int main() {
    int x;
    printf("Please enter int value for x: ");
    scanf("%i", &x);

    float y;
    printf("Please enter float value for y: ");
    scanf("%f", &y);

    double z;
    printf("Please enter double value for z: ");
    scanf("%lf", &z); 

    printf("Value of x is %i, y is %.2f, and z is %.2f\n", x, y, z);  

  
    float a = 5.0;
    float b = 10.0;
    float additionResult = a + b;
    float subtractionResult = a - b;
    float multiplicationResult = a * b;
    float divisionResult = a / b;  

    char letter = 'A';

    puts("------------------------- Part 1 ----------------------------");
    printf("Sum of %.2f and %.2f is %.2f\n", a, b, additionResult);
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, subtractionResult);
    printf("Multiplication result of %.2f and %.2f is %.2f\n", a, b, multiplicationResult);
    printf("Division result of %.2f and %.2f is %.2f\n", a, b, divisionResult);
    
    puts("------------------------- Part 2 ----------------------------");
    printf("Result of modulus 6 and 5 is %d\n", 6 % 5);

    puts("------------------------- Part 3 ----------------------------");
    printf("Letter is '%c' and the equivalent ASCII for it is %d\n", letter, letter);

    puts("------------------------- Part 4 ----------------------------");
  
    printf("You entered %i for int and %.2f for float number\n", x, y);

    puts("------------------------- Part 5 ----------------------------");
    int value = 5;
    printf("The initial value is %d\n", value); 
    printf("The pre-increment value is %d\n", ++value);
    printf("The post-increment value is %d\n", value++); 
    printf("The final value is %d\n", value); // 7

    puts("------------------------- End of the Code ----------------------------");

    return 0;
}