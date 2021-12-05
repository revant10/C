#include <stdio.h>

#define ARR_SIZE 5

// Initializing Global Variables
int front = -1,
    rear = -1;

// Function Declarations
void queue(int arr[]);
void dequeue(int arr[]);
void display(int arr[]);

// Main Function
void main()
{
    int i, n, c,
        arr[ARR_SIZE],
        exit = 0;

    while (exit == 0)
    {
        printf("Queue size: %d\n\n", ARR_SIZE);
        printf("1. Add to Queue\n");
        printf("2. Remove from Queue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
            case 1: queue(arr);    break;
            case 2: dequeue(arr);     break;
            case 3: display(arr); break;
            case 4: exit = 1; break;        
            default: printf("Invalid choice!!\n"); break;
        }
    }
}

// Queue Function
void queue(int arr[])
{
    if ((front == 0 && rear == ARR_SIZE-1) || (front == rear + 1))
        printf("\n!!! Queue is Full !!!\n\n");
    else
    {
        int e;
        printf("Enter an number to add: ");
        scanf("%d", &e);

        if (rear == ARR_SIZE-1 && front != 0)
            rear = -1;
        
        arr[++rear] = e;

        if (front == -1)
            front = 0;

        printf("\n--> %d added to queue\n\n", e);
    }
}

// Dequeu Function
void dequeue(int arr[])
{
    if (front == -1 && rear == -1)
        printf("\n!!! Queue is Empty !!!\n\n");
    else
    {
        printf("\n--> Removed %d from queue.\n\n", arr[front]);
        
        front++; 
        
        if (front == ARR_SIZE)
            front = 0;
        
        if (front-1 == rear)
        {
            front = -1;
            rear = -1;
        }
    }
        
}

// Display Function
void display(int arr[])
{
    if (front == -1)
        printf("\n!!! Queue is Empty !!!\n\n");
    else
    {
        printf("\n");
        int i = front;
        if (front <= rear)
        {
            while (i <= rear)
            {
                printf("%d ", arr[i++]);
            }
        }
        else
        {
            while (i <= ARR_SIZE-1)
                printf("%d ", arr[i++]);

            i = 0;
            
            while (i <= rear)
                printf("%d ", arr[i++]);
        }
        printf("\n\n");
    }
}