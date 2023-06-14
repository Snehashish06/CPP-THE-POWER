#include <iostream>
#include <cstdio>



void signed_numbers(){
    signed num1 = 1;
    signed short num2 = 2;
    signed long num3 (1);
    unsigned short num4 {6033}; // Can't store negative numbers
    long long num5 {739184798237798}; // very long
    printf("Num 1 is %i\nSize of num1 is %i\n\nNum2 is %i\nSize of num2 is %i\n\nSize of long num3 is %i\n\nSize of unsigned short num4 is %i\n", num1, sizeof(num1), num2, sizeof(num2), sizeof(num3), sizeof(num4));
    printf("Size of num5 is: %i", sizeof(num5));
}

int main(){
    signed_numbers();
    return 0;
}