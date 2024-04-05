#include<stdio.h>
#include<string.h>

char stack[100];
int top=-1;

void push(char data)
{
    if (top == 99)
    {
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    char data = stack[top];
    top--;
    return data;
}

char peek()
{
    if (top == -1)
    {
        return '\0';
    }
    return stack[top];
}

int main()
{
    char string[100];
    printf("Input: ");
    fflush(stdin);
    gets(string);
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]==peek())
            while(string[i]==peek())
                pop();
        else
            push(string[i]);       
    }
    printf("Output: ");
    for(int i=0;i<strlen(stack);i++)
        printf("%c",stack[i]);
    return 0;
}