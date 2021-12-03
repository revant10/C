// In Single Ended Queue using array; even if the front side is empty,
// we cannot add element to the queue. To add an element after que is
// full, we have to empty the whole queue.


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
    if (rear == ARR_SIZE-1)
        printf("\n!!! Queue is Full !!!\n\n");
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
        printf("\n--> %d added to queue\n\n", e);
    }
}

// Dequeu Function
void dequeue(int arr[])
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

// Display Function
void display(int arr[])
{
    if (front == -1)
        printf("\n!!! Queue is Empty !!!\n\n");
    else
    {
        printf("\n");
        int i;
        // printf("Front -->\t");
        for (i = front; i <= rear; i++)
        {
                printf("%d ", arr[i]);
        }
        // printf("\t<-- Rear");
        printf("\n\n");
    }
}