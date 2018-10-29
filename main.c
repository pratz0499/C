#include <stdio.h>
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
        s->data[s->top]=temp;
        s->top--;
        return temp;
    }
}
 void display_int(struct stack s)
 {
   int i;
   for(i=s.top;i>=0;i--)
   {
        printf("%p",*(char*)s.data[i]);

   }

 }
 void display_float(struct stack f)
 {
     float j;
     for(j=f.top;j>0;j--)
     {
          printf("%p",*(char*)f.data[j]);
     }
 }
 void display_str(struct stack c)
 {
     char k;
     for(k=c.top;k>0;k--)
     {
         printf("%p",*(char*)c.data[k]);
     }
 }

int main()
{
    int item ,error=0;
    struct stack s={-1,100};
    struct stack f={-1,100};
    struct stack c={-1,100};

    printf("Enter the element: ");
    scanf("%d",&item);
    push(&s,&item);
    pop(&s,&error);
    if(error)
    {
        printf("Stack Empty");
    }
    else
        {
        display_int(s);
        display_float(f);
        display_str(c);
        }


}





