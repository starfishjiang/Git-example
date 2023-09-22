#include<stdio.h>
int main(void){
    int gram_per_mol=32;
    double mol=6.02E23;
    int mass=6;
    double quantity=mass*1.0/gram_per_mol*mol;
    printf("quantity = %.3e\n", quantity);
    return 0;
}
