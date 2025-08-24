#include<stdio.h>
int main() {
    int number_1 = 5, number_2 = 10, total, subtraction, multiplication;
    float division;
    total = number_1 + number_2;
    subtraction = number_1 - number_2;
    multiplication = number_1 * number_2;
    division = (float)number_1 / (float)number_2;
    printf("%d\n",total);
    printf("%d\n",subtraction);
    printf("%d\n",multiplication);
    printf("%.2f\n",division);
    return 0;
}