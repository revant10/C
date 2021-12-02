#include <stdio.h>

#define ARR_SIZE 5

// Function declarations
void push(int arr[]);
void pop(int arr[]);
void display(int arr[]);

// Global Variables
int top = -1;

// Main Function
void main()
{
    int i, n, c,
        arr[ARR_SIZE],
        exit = 0;

    while (exit == 0)
    {
        printf("Stack size: %d\n\n", ARR_SIZE);
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
            case 1: push(arr);    break;
            case 2: pop(arr);     break;
            case 3: display(arr); break;
            case 4: exit = 1; break;        
            default: printf("Invalid choice!!\n"); break;
        }
    }
    
}

// Push Function
void push(int arr[])
{
    if (top == ARR_SIZE-1)
        printf("\n!!! Stack is Full !!!\n\n");
    else
    {
        int e;
        printf("Enter an number to push: ");
        scanf("%d", &e);
        top++;
        arr[top] = e;
        printf("\n--> %d pushed into stack.\n\n", e);
    }
}

void pop(int arr[])
{
    if (top == -1)
        printf("\n!!! Stack is Empty!! \n\n");
    else
    {
        printf("\n--> Poped: %d\n\n", arr[top]);
        top--;
    }
}

void display(int arr[])
{
    if (top == -1)
        printf("\n!!! Stack is Empty !!!\n\n");
    else
    {
        printf("\n");
        int i;
        for (i = top; i > -1; i--)
        {
            if (i == top)
                printf("top ->\t%d\n", arr[i]);
            else
                printf("\t%d\n", arr[i]);
        }
        printf("\n");
    }
}