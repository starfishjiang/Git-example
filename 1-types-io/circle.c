#include<stdio.h>
int main(void){
    int radius=10;
    double pi=3.1415926;
    double circumference =2 * pi * radius;
    double area=pi*radius*radius;
    printf("radiu = %d\ncircumference = %.2f\narea = %.2f\n" , radius,circumference,area);
    return 0;
}