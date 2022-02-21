#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
char stack_top(struct stack *s)
{
    return s->array[s->top];
}
int match(char a, char b)
{
    if (a == '(' && b == ')')
        return 1;
    else if (a == '{' && b == '}')
        return 1;
    else if (a == '[' && b == ']')
        return 1;

    return 0;
}
int Multiple_Parenthesis_Matching(char *a)
{
    struct stack *s;
    s->top = -1;
    s->size = strlen(a);
    s->array = (char *)malloc(s->size * sizeof(char));
    char element;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[')
        {
            push(s, a[i]);
        }
        else if (a[i] == ')' || a[i] == '}' || a[i] == ']')
        {

            if (isEmpty(s))
            {
                return 0;
            }
            element = pop(s);
            if (!match(element, a[i]))
            {
                return 0;
            }

            // if(isEmpty(s))
            // {
            //     return 0;
            // }
            // if(!match(stack_top(s), a[i]))
            // {
            //     return 0;
            // }

            // pop(s);
        }
    }
    if (isEmpty(s))
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
    char element[] = "()";
    if (Multiple_Parenthesis_Matching(element))
    {
        printf("Balanced");
    }
    else
    {
        printf("Unbalanced");
    }
    return 0;
}