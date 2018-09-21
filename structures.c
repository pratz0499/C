#include <stdio.h>
struct fraction
{
    int num,den;
};
struct fractions
{
    int n;
    struct fraction fractions[10];
};
struct answer
{
    int num,den;
};
struct answers
{
    struct answer answers[10];
};
struct fractions input()
{
    struct fractions fs;
    printf("Enter the number of fractions:");
    scanf("%d",&fs.n);
    for(int i=0;i<fs.n;i++)
    {
        printf("Enter the numerator:");
        scanf("%d",&fs.fractions[i].num);
        printf("Enter the denominator:");
        scanf("%d",&fs.fractions[i].den);
    }
    return fs;

}
/*void add()
{
    struct fractions fs;


}*/
void display(struct fractions fs)
{
    for(int i=0;i<fs.n;i++)
    {
        printf("num[%d]=%d den[%d]=%d ",i+1,fs.fractions[i].num,i+1,fs.fractions[i].den);
    }
}


void main()
{
    struct fractions fs;
    fs=input();
    display(fs);
}
