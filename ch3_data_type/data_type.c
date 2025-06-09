#include <stdio.h>

int main() {
    int age = 22;
    float temperature_celsius = 32.3f;  // 'f' suffix for float literals
    double precise_measurement = 5.7876538937;
    char grade = 'A';
    
    // Method 1: Default formatting
    printf("Default formatting:\n");
    printf("Age: %d\n", age);
    printf("Temperature: %f\n", temperature_celsius);
    printf("Measurement: %lf\n", precise_measurement);
    printf("Grade: %c\n\n", grade);
    
    // Method 2: Controlled precision formatting
    printf("Controlled precision:\n");
    printf("Age: %d\n", age);
    printf("Temperature: %.1f°C\n", temperature_celsius);  // 1 decimal place
    printf("Measurement: %.10lf\n", precise_measurement);   // 10 decimal places
    printf("Grade: %c\n\n", grade);
    
    
    return 0;
}