#include <stdio.h>
#include <stdlib.h>

// Declaring the functions
void insert_b();
void insert_e();
void insert_l();
void delete_b();
void delete_e();
void display();


// Defining the structure for Linked List
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Main Function
void main()
{
    int e=0;
    int ch;

    while( e == 0 )
    {
        printf("\n\n||||* OPTIONS *||||\n\n"); 
        printf("1 : Insert from Begning\n2 : Insert from End\n3 : Insert after Element\n");
        printf("4 : Delete from Begning\n5 : Delete from End\n6 : Display\n7 : Exit\n");
        
        printf("Enter your Option : ");
        scanf("%d", &ch);
        printf("\n");

        switch(ch)
        {
            case 1: insert_b(); break;
            case 2: insert_e(); break;
            case 3: insert_l(); break;
            case 4: delete_b(); break;
            case 5: delete_e(); break;
            case 6: display(); break;
            case 7:e = 1; break;
            default : printf("\n\n INVALID OPTION \n\n");
        }
    }
}

// Insert from Beginning
void insert_b()
{
    struct node *var;
    int x;
    
    printf("\nEnter Element to Insert: ");
    scanf("%d", &x);
    printf("\n");
    
    var = (struct node*)malloc(sizeof(struct node*));
    
    if (head == NULL)
    {
        head = var;
        head->data = x;
        head->next = NULL;
    }
    else
    {
        var->data = x;
        var->next = head;
        head = var;
    }
}

// Insert from end
void insert_e()
{
    struct node *var, *temp;
    int x;

    printf("\nEnter Element to Insert: ");
    scanf("%d", &x);
    printf("\n");
    
    var = (struct node*)malloc(sizeof(struct node*));
    
    if (head == NULL)
    {
        head = var;
        head->data = x;
        head->next = NULL;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = var;
        var->data = x;
        var->next = NULL;
    }
}

// Insert after specific element
void insert_l()
{ 
    int loc, x; 
    struct node *var, *temp; 
    
    var=(struct node*)malloc(sizeof(struct node*)); 
    
    printf("\nEnter Element to Insert: "); 
    scanf("%d",&x); printf("\n"); 

    var->data = x; 

    printf("\nInsert element after: "); 
    scanf("%d", &loc); printf("\n"); 
    
    if(head == NULL) 
    { 
        head = var; 
        head->next = NULL; 
    }
    else
    {
        temp=head; 
        while(temp->data != loc) 
        { 
            temp = temp->next; 
        } 
        var->next = temp->next; 
        temp->next = var; 
    } 
}

// Delete from Beginning
void delete_b()
{
    struct node *temp;
    if (head == NULL)
        printf("Linked List Empty.\n");
    else
    {
        printf("%d deleted from beginning successfully.\n",head->data);
        temp = head->next;
        free(head);
        head = temp;
    }
}

// Delete from end
void delete_e()
{
    struct node *temp, *p;
    if (head == NULL)
        printf("Linked List Empty.\n");
    else
    {
        if (head->next == NULL)
        {
            printf("%d deleted from end successfully.\n",head->data);
            free(head);
            head = NULL;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                p = temp;
                temp = temp->next;
            }
            printf("%d deleted from end successfully.\n", temp->data);
            p->next = NULL;
            free(temp);
        }
    }
}

// Display Function
void display()
{
    struct node *temp;
    temp = head;

    if (temp == NULL)
        printf("Linked List Empty.\n");
    else
    {
        printf("\n");
        while (temp->next != NULL)
        {
            printf("-> %d ", temp->data);
            temp = temp->next;
        }
        printf("-> %d ", temp->data);
    }
}