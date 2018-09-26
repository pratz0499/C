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


int compute(struct fractions fs)
{
    int sum_num, mul_den;

    for(int i=0;i<fs.n;i++)
    {
        sum_num= (fs.fractions[i].num*fs.fractions[i+1].den)+(fs.fractions[i+1].num*fs.fractions[i].den);
        mul_den=(fs.fractions[i].den)*(fs.fractions[i+1].den);




    }
     printf("%d\n %d",sum_num,mul_den);


}


int main()
{
    struct fractions fs;
    fs=input();
    fs=compute(fs);
    display(fs);
}
