#include<stdio.h>
struct stack
{
    int top;
    int size;
    void *data[100];
};

void push(struct stack *p, void *item)
{
    if(p->top==p->size-1)
    {
       printf("the stack is full");
    }
    else
    {
        p->top++;
        p->data[p->top]=item;
    }

}
void pop(struct stack *p)
{
    if(p->top=-1)
    {
        printf("the stack is empty");
    }
    else
    {
        p->top=p->top-1;
        return void *p->data[top];
    }

void display(struct stack p)
{
    int i;
    for(i=p.top;i>=0;i--)
    {
        printf("%d",*(int*)p.data[i]);
    }
}




int main()
{

    int item;
    struct stack p={-1,100};
    printf("Enter the item: ");
    scanf("%d", &item);
    push(&p, &item);
    display(p);
    return 0;
}
