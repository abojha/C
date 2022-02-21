#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    char *array;
};

int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *s, char a)
{
    if (isFull(s))
    {
        printf("Stack Overflow");
    }
    else
    {
        s->array[++s->top] = a;
    }
}
char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Can't pop Because Stack Underflow\n");
    }
    else
    {
        char element;
        element = s->array[s->top--];
        return element;
    }
}
char stackTop(struct stack *s)
{
    return s->array[s->top];
}
int prec(char ch)
{
    if(ch == '*' || ch == '/')
        return 3;
    else if(ch == '+' || ch == '-')
        return 2;
    return 0;
}
int isoperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' ||ch == '/')
    return 1;

    return 0;
}
char * infix_to_postfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 100;
    sp->array = (char *)malloc(sp->size * sizeof(char));
    char * pos = (char *)malloc(strlen(infix+1)*sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix traversal

    while(infix[i]!='\0')
    {
         if(!isoperator(infix[i]))
         {
             pos[j] = infix[i];
             i++;
             j++;
         }
         else
         {
             if(prec(infix[i])>prec(stackTop(sp)))
             {
                 push(sp,infix[i]);
                 i++;
             }
             else
             {
                 pos[j] = pop(sp);
                 j++;
             }
         }
    }
     while(!isEmpty(sp))
         {
             pos[j] = pop(sp);
             j++;
         }
         pos[j] = '\0';
    return pos;
}
int main()
{
    char * infix = "x-y/z-k*d";
    printf("postfix is %s", infix_to_postfix(infix));
    return 0;
}