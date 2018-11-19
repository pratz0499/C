#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    void *data[100];
};
int push(struct stack *s, void *item)
{
    if(s->top==s->size-1)
    {
        return 0;
    }
    else
    {
        s->top++;
        s->data[s->top]=item;
        printf("pushed\n");
        return 1;
    }
}
void *pop(struct stack *s, int *error)
{
    void *temp;
    if(s->top==-1)
    {
        *error = 1;
    }
    else
    {
        temp=s->data[s->top];
        s->top--;
        return temp;
    }
}
 void display_int(struct stack s)
 {
   int i;
   for(i=s.top;i>=0;i--)
   {
        printf("%d\n",*(int *)s.data[i]);

   }

 }
 void display_float(struct stack f)
 {
     int  j;
     for(j=f.top;j>=0;j--)
     {
          printf("%f\n",*(float*)f.data[j]);
     }
 }
 void display_char(struct stack c)
 {
     int k;
     for(k=c.top;k>=0;k--)
     {
         printf("%c\n",*(char *)c.data[k]);
     }
 }
void main()
{
    int error=0,item[100]={1,2,3},n,h,x,choice;
    float fitem[100]={4,5,6};
    char citem[100]={'a','b','c'};

    struct stack s={-1,100};
    struct stack f={-1,100};
    struct stack c={-1,100};
    push(&s,&item[0]);
    push(&f,&fitem[0]);
    push(&c,&citem[0]);

    display_int(s);
    display_float(f);
    display_char(c);
}
