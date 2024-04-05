#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char data)
{
    if (top == 99)
    {
        printf("Overflow stack!\n");
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Empty Stack!\n");
        return '\0';
    }
    char data = stack[top];
    top--;
    return data;
}

int main()
{
    char string[100];
    printf("Enter the string: ");
    fflush(stdin);
    gets(string);
    for(int i=0;i<strlen(string);i++)
        push(string[i]);
    for(int i=0;i<strlen(string);i++)
        printf("%c",pop());
    return 0;
}