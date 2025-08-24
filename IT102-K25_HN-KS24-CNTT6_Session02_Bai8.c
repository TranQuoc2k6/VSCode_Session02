#include<stdio.h>
int main() {
    int number = 12345;
    int result = 0;
    while (number > 0) {
        result = (number % 10) + result * 10;
        number /= 10;
    }

    printf("Ket qua: %d", result);
    return 0;
}