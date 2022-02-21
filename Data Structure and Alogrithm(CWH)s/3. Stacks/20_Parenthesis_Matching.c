#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
    char *array;
    int size;
    int top;
};
int isEmpty(struct stack *st)
{
    if(st->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *st)
{
    if(st->top == st->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *st, char d)
{
    if(!isFull(st))
    st->array[++st->top] = d;
}
void pop(struct stack *st)
{
    if(!isEmpty(st))
    {
    char d;
    d = st->array[st->top--];
    }
}
int parenthesisMatching(char *exp)
{
    int len;
    len = strlen(exp);
    struct stack *s;
    s->top = -1;
    s->size = len;
    s->array = (char *)malloc(s->size * sizeof(char));

    for(int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i] == '(')
        {
            push(s,'(');
        }
        else if(exp[i] == ')')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    char exp[] = "";
    printf("Enter the Expression\n");
    scanf("%s",exp);

    if(parenthesisMatching(exp))
    {
        printf("Your Parenthesis is Matching\n");
    }
    else
    {
        printf("Your Parenthesis is Not Matching\n");
    }
    return 0;
}