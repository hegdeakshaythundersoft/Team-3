/**
100= 110100 in decimal and 64 in hex
Swap the nibbles and obtain taking a byte memory variable
70=  100110 in decimal and 46 in hex


**/
#include <stdio.h>

int main()
{
    char var=100;
    printf("variable before swapping of the nibbles\n");
    printf("Decimal=%d\tHex=%x\n",var,var);
    var=(var>>4)|(var<<4);
    printf("variable after swapping of the nibbles\n");
    printf("Decimal=%d\tHex=%x\n",var,var);

    return 0;
}
