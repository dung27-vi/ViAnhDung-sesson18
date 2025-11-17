#include <stdio.h>

int main() {
    int number = 36;
    int *p_number;
    p_number = &number;
    
    printf("--- In gia tri va dia chi cua bien ---\n");
    
    printf("1. Su dung toan tu &: \n");
    printf("   Gia tri cua number: %d\n", number);
    printf("   Dia chi cua number: %p\n", &number); 
    
    printf("2. Su dung con tro: \n");
    printf("   Gia tri cua number qua con tro: %d\n", *p_number); 
    printf("   Dia chi cua number qua con tro: %p\n", p_number);
    
    return 0;
}
