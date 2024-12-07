// Stack Using C

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
    int value, choice;
    system("cls"); // clrscr();
    while (1)
    {
        printf("\n\n##### MENU #####");
        printf("\n1, PUSH \n2, POP \n3, DISPLAY \n4, EXIT");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\n wrong Selection!!! Try Again!!!");
            break;
        }
    }
}

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK is FULL!!!");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("\n Insertion Successfull!!");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack is Empty!!!");
    }
    else
    {
        printf("\nDelected: %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1) {
        printf("\nStack is Empty!!");
    }
    else {
        int i;
        printf("\nStack Elements are: \n");
        for (i = top; i >= 0; i--) {
            printf("%d , ", stack[i]);
        }
    }
}