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
 void display(struct stack s,void *item)
 {
    int i;
   for(i=s.top;i>=0;i--)
   {
        printf("%d",*(char*)s->data[i]);

   }

 }
int main()
{
    int item ,error=0;
    struct stack s={-1,100};

    printf("Enter the element: ");
    scanf("%d",&item);
    push(&s,&item);
    pop(&s,&error);
    if(error)
    {
        printf("Stack Empty");
    }
    else{
        display(s);
    }


}





