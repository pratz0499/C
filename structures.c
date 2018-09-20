#include <stdio.h>
struct fraction
{
    int num,den;
};
void input()
{
    struct fraction f;
    printf("Enter the numerator:");
    scanf("%d",&f.num);
    printf("Enter the denominator:");
    scanf("%d",&f.den);
}
void display()
{
    struct fraction f;
    printf("num=%d dem=%d",f.num,f.den);
}
void main()
{
    input();
    display();
}
