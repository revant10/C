#include<stdio.h>
#include<stdlib.h>

// Function declaratiions
void insert_b();
void insert_e();
void insert_loc();
void delete_b();
void delete_e();
void display();

struct node
{
    int data;
    struct node *pre;
    struct node *next; 
};

struct node *head;

// Main Function
void main()
{
    int e=0;
    int ch;

    while(e == 0)
    {
        printf("\n\n||||* OPTIONS *||||\n\n");
        printf("\n\n1 : Insert from Begning\n2 : Insert from End\n3 : Insert element after:\n");
        printf("4 : Delete from Begning\n5 : Delete from End\n6 : Display\n7 : Exit\n\n");
        printf("Enter your Option : ");
        scanf("%d", &ch);
        printf("\n\n");
        switch(ch)
        {
            case 1: insert_b(); break;
            case 2: insert_e(); break;
            case 3: insert_loc(); break;
            case 4: delete_b(); break;
            case 5: delete_e(); break;
            case 6: display(); break;
            case 7: e=1; break;
            default : printf("\n\n INVALID OPTION \n\n");
        }
    }
}


void insert_b()
{
    int x;
    struct node *var;

    var=(struct node*)malloc(sizeof(struct node*));

    printf("Enter element to Insert: ");
    scanf("%d", &x);
    
    var->data = x;
    var->pre = NULL;
    
    if(head == NULL)
    {
        head = var;
        head->next = NULL;
    }
    else
    {
        var->next = head;
        head->pre = var;
        head = var;
    }	
}

void insert_e()
{
    int x;
    struct node *var, *temp;
    
    var=(struct node*)malloc(sizeof(struct node*));
    
    printf("Enter element to Insert: ");
    scanf("%d", &x);
    
    var->data = x;
    
    if(head == NULL)
    {
        head=var;
        head->next = NULL;
        head->pre = NULL;
    }
    else
    {
        temp=head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = var;
        var->pre = temp;
    }	
}

void insert_loc()
{
    int x,loc;
    struct node *var,*temp,*p;
    
    var=(struct node*)malloc(sizeof(struct node*));
    
    printf("Enter element to Insert: ");
    scanf("%d", &x);
    printf("Insert element after: ");
    scanf("%d", &loc); 
    
    var->data=x;
    
    if(head == NULL)
    {
        head = var;
        head->next = NULL;
        head->pre = NULL;
    }
    else
    {
        temp=head;
        while(temp->data != loc)
        {
            temp = temp->next;
        }
        var->next = temp->next;
        var->pre = temp;
        temp->next = var;
        p=var-> next;
        p->pre = var;
    }	
}

void delete_b()
{
    if(head == NULL)
    {
        printf("!!!! List is Empty !!!!");
    }
    else
    {
        if(head->next == NULL)
        {
            printf("\nDeleted : %d\n",head->data);
            free(head);
        }
        else
        {
            struct node *temp;
            temp = head;
            printf("\nDeleted : %d",temp->data);
            head = temp->next;
            head->pre = NULL;
            free(temp);
        }	
    }	
}

void delete_e()
{
    if(head==NULL)
    {
        printf("!!!! List is Empty !!!!");
    }
    else
    {
        if(head->next == NULL)
        {
            printf("\nDeleted : %d\n",head->data);
            free(head);
        }
        else
        {
            struct node *temp,*p;
            while(temp->next != NULL)
            {
                p = temp;
                temp = temp->next;
             }
            printf("\nDeleted : %d",temp->data);
            p->next = NULL;
            temp->pre = NULL;
            free(temp);
        }	
    }	
}



void display() 
{
    struct node *temp;
    temp = head;
    
    if (temp == NULL)
    {
        printf("Linked List Empty.\n");
    }
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