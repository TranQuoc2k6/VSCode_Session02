#include <stdio.h>

int main() {
    // short: so nguyen ngan, thuong chiem 2 byte (từ -32,768 den 32,767)
    short s = -12345;

    // int: so nguyen thuong, thuong chiem 4 byte (từ -2,147,483,648 den 2,147,483,647)
    int i = 123456;

    // long: so nguyen dai, thường bằng int (4 byte) hoac 8 byte tuy he thong
    long l = 123456789;

    // long long: so nguyen rat dau, it nhat 8 byte (từ -9e18 den 9e18)
    long long ll = 123456789012345;

    // unsigned short: so nguyen khong am, thuong chiem 2 byte (từ 0 den 65,535)
    unsigned short us = 54321;

    // unsigned int: so nguyen khong am, 4 byte (từ 0 den 4,294,967,295)
    unsigned int ui = 4000000000U;

    // unsigned long: so nguyen khong am, it nhat 4 byte (tuy he thong co the la 8 byte)
    unsigned long ul = 3000000000UL;

    // unsigned long long: so nguyen khong am, it nhat 8 byte
    unsigned long long ull = 123456789012345ULL;

    // char: kieu ky tu , 1 byte, luu duoc ca so nguyen nho (-128 den 127 hoac 0 den 255 neu unsigned)
    char c = 'A';


    printf("short = %d\n", s);
    printf("int = %d\n", i);
    printf("long = %ld\n", l);
    printf("long long = %lld\n", ll);
    printf("unsigned short = %hu\n", us);
    printf("unsigned int = %u\n", ui);
    printf("unsigned long = %lu\n", ul);
    printf("unsigned long long = %llu\n", ull);
    printf("char = %c\n", c);

    return 0;
}
