#include <stdio.h>

#define ARR_SIZE 5

// Initializing Global Variables
int front = -1,
    rear = -1;

// Function Declarations
void queueFront(int arr[]);
void queueRear(int arr[]);
void dequeueFront(int arr[]);
void dequeueRear(int arr[]);
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
        printf("1. Add to Queue from Front End\n");
        printf("2. Add to Queue from Rear End\n");
        printf("3. Remove from Queue from Front End\n");
        printf("4. Remove from Queue from Rear End\n");
        printf("5. Display Queue\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
            case 1: queueFront(arr);    break;
            case 2: queueRear(arr);     break;
            case 3: dequeueFront(arr);    break;
            case 4: dequeueRear(arr);     break;
            case 5: display(arr); break;
            case 6: exit = 1; break;        
            default: printf("Invalid choice!!\n"); break;
        }
    }
}

// Queue Functions
void queueFront(int arr[])
{
    if (front == 0)
        printf("\n!!! Not Possible !!!\n\n");
    else
    {
        int e;
        printf("Enter an number to add: ");
        scanf("%d", &e);

        if (front == -1)
        {
            front++;
            rear++;
        }
        else
        {
            front--;
        }

        arr[front] = e;
        printf("\n--> %d added to queue from front end.\n\n", e);
    }
}

void queueRear(int arr[])
{
    if (rear == ARR_SIZE-1)
        printf("\n!!! Not Possible !!!\n\n");
    else
    {
        int e;
        printf("Enter an number to add: ");
        scanf("%d", &e);

        if (front == -1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }

        arr[rear] = e;
        printf("\n--> %d added to queue from rear end.\n\n", e);
    }
}

// Dequeu Function
void dequeueFront(int arr[])
{
    if (front == -1)
        printf("\n!!! Queue is Empty !!!\n\n");
    else
    {
        printf("\n--> Removed %d from queue.\n\n", arr[front]);
        
        front++; 
        
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void dequeueRear(int arr[])
{
    if (rear == -1)
        printf("\n!!! Queue is Empty !!!\n\n");
    else
    {
        printf("\n--> Removed %d from queue.\n\n", arr[rear]);
        
        rear--; 
        
        if (front > rear)
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
        int i;
        for (i = front; i <= rear; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n\n");
    }
}