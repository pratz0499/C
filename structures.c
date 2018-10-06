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

void display(struct fractions fs)
{
    for(int i=0;i<fs.n;i++)
    {
        printf("num[%d]=%d den[%d]=%d ",i+1,fs.fractions[i].num,i+1,fs.fractions[i].den);
    }
}


struct fractions compute(struct fractions fs)
{
    int sum_num=0, mul_den=0,i=0;
    int ans_num=0, ans_den=0;
    for(int i=0;i<fs.n-1;i++)
    {
        sum_num= (fs.fractions[i].num*fs.fractions[i+1].den)+(fs.fractions[i+1].num*fs.fractions[i].den);
        mul_den=(fs.fractions[i].den)*(fs.fractions[i+1].den);s
        ans_num+=sum_num;
        ans_den+=mul_den;

    }
     printf("%d/%d",ans_num,ans_den);


}


int main()
{
    struct fractions fs;
    fs=input();
    fs=compute(fs);
    display(fs);
}
