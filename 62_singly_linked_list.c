#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_at_beg(struct node *);
struct node *insert_at_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *insert_at_pos(struct node *);
struct node *delete_from_beg(struct node *);
struct node *delete_from_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_by_pos(struct node *);

int main()
{
    int option;
    do{
        printf("\n*********Main Menu**********");
        printf("\n1. Create singly linked list ");
        printf("\n2. Display ");
        printf("\n3. Insert at beginning ");
        printf("\n4. Insert at ending ");
        printf("\n5. Add a node before a given node ");
        printf("\n6. Add a node after a given node ");
        printf("\n7. Add a node at a given position ");
        printf("\n8. Delete a node from the beginning ");
        printf("\n9. Delete a node from the end ");
        printf("\n10. Delete a given node  ");
        printf("\n11. Delete a given node by the position");
        printf("\n0. Exit ");
        printf("\n choose one option : \n");
        scanf("%d", &option);
        
        switch (option)
        {
        case 1:
            head = create_ll(head);
            printf("\n linked list created ");
            break;
        case 2:
            head = display(head);
            break;
        case 3:
            head = insert_at_beg(head);
            break;
        case 4:
            head = insert_at_end(head);
            break;
        case 5:
            head = insert_before(head);
            break;
        case 6:
            head = insert_after(head);
            break;
        case 7:
            head = insert_at_pos(head);
            break;
        case 8:
            head = delete_from_beg(head);
            break;
        case 9:
            head = delete_from_end(head);
            break;
        case 10:
            head = delete_node(head);
            break;
        case 11:
            head = delete_by_pos(head);
            break;
        default:
            break;
        }
    }while(option !=0);
    return 0;

}

struct node *create_ll(struct node *head)
{
    struct node *newnode, *tail;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == 0){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        printf("\nDo you want to continue (0, 1) : ");
        scanf("%d", &choice);
    }
    return head;
}

struct node *display(struct node *head)
{
    struct node *tail;
    int count = 0;
    tail = head;
    while(tail != 0)
    {
        printf("%d->", tail->data);
        tail = tail->next;
        count++;
    }
    printf("NULL");
    printf("\n count = %d", count);
    return head;

}

struct node *insert_at_beg(struct node *head)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

struct node *insert_at_end(struct node *head)
{
    struct node *newnode, *tail;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    tail = head;
    while (tail->next != 0)
    {
        tail = tail->next;
    }
    tail->next = newnode;
    return head;
}

struct node *insert_before(struct node *head)
{
    struct node *newnode, *tail, *pretail;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    printf("\n Enter the value before which the data has to be inserted : ");
    scanf("%d", &val);
    
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    tail = head;

    while (tail->data != val)
    {
        pretail = tail;
        tail = tail->next;
    }
    pretail->next = newnode;
    newnode->next = tail;
    return head;
}

struct node *insert_after(struct node *head)
{
    struct node *newnode, *tail, *posttail;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    printf("\n Enter the value after which the data has to be inserted : ");
    scanf("%d", &val);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    tail = head;
    while (posttail->data != val)
    {
        posttail = tail;
        tail = tail->next;
    }
    posttail->next = newnode;
    newnode->next = tail;
    return head;
}

struct node *insert_at_pos(struct node *head)
{
    struct node *newnode, *tail, *pretail;
    int i, pos;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data u want to enter at position : ");
    scanf("%d", &newnode->data);
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    tail = head;
    newnode->next = 0;
    for(i=1;i<pos;i++)
    {
        pretail = tail;
        tail = tail->next;
    }
    pretail->next = newnode;
    newnode->next = tail;
    return head;
}

struct node *delete_from_beg(struct node *head)
{
    struct node *temp;
    temp = head;
    if(head == 0){
        printf("\nNo data available");
    }
    else{
        head = head->next;
        printf("%d has been deleted", temp->data);
        free(temp);
    }
    return head;
}

struct node *delete_from_end(struct node *head)
{
    struct node *temp, *prevnode;
    temp = head;
    if(head == 0){
        printf("No data available");
    }
    else{
        while (temp->next != 0)
        {
            prevnode = temp;
            temp = temp->next;
        }
        
        if(temp == head){
            head = 0;
            printf("\nNow, No data available and ");
        }
        else{
            prevnode->next = 0;
        }
        printf("%d has been deleted", temp->data);
        free(temp);
    }
    return head;
}

struct node *delete_node(struct node *head)
{
    struct node *temp, *pretemp;
    int val;
    printf("\nEnter the value of the node which has to be deleted : ");
    scanf("%d", &val);
    temp = head;
    while(temp->data != val)
    {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = temp->next;
    printf("%d has been deleted", temp->data);
    free(temp);
    return head;
}

struct node *delete_by_pos(struct node *head)
{
    struct node *temp, *nextnode;
    int i=1, pos;
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    temp = head;
    while(i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    return head;
}

