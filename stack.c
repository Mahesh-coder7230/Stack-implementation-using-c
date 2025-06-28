#include <stdio.h>
#define Max 5
int stack[Max];
int top = -1;
void push(int value)
{
    if (top == Max - 1)
    {
        printf("Stack overflow");
    }

    else
    {
        top++;
        stack[top] = value;
        printf("%d Pushed into stack\n", value);
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        int value = stack[top];
        top--;
        printf("%d Poped from the stack\n", value);
        return value;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack element: \n");
        for (int i = top; i > 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}