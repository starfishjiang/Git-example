#include<stdio.h>
int main(void){
    int radius=100;
    double pi=3.1415926;
    double surface_area=4* pi * radius* radius;
    double volume=4.0/3*pi*radius*radius*radius;
    printf("%-15.4f : surface_area\n%-15.4f : volume\n" ,surface_area,volume);
    return 0;
}