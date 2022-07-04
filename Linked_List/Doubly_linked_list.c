#include<stdio.h>
#include<stdlib.h>

struct  Node
{
    int data;
    struct Node* prve;
    struct Node* next;
};
struct Node* head;

struct Node* GetNewNode(int data);
void insert_head(int data,int i);

void Print();
void reversePrint();

int main()
{

    head = NULL;

    insert_head(0,0);
    Print();
    reversePrint();

    insert_head(1,1);
    Print();
    reversePrint();

    insert_head(2,2);
    Print();
    reversePrint();

    insert_head(3,3);
    Print();
    reversePrint();

    insert_head(4,4);
    Print();
    reversePrint();
}


struct Node* GetNewNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->prve = NULL;
    newNode->next = NULL;
    return newNode;
}

void insert_head(int data,int i)
{
    struct Node* newNode = GetNewNode(data);
    struct Node* temp = head;
    if(head == NULL)
    {
        head = newNode;  
        return;
    }
    int size = 0;
    while(size < i-1)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prve = temp;
    if(newNode->next != NULL)
        (newNode->next)->prve = newNode;
}

void Print()
{
    struct Node* temp = head;
    printf("List is:  ");
    while (temp != NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reversePrint()
{
    struct Node* temp = head;
    while (temp->next!=NULL)
        temp = temp->next;
    printf("reverseList is:  ");
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp = temp->prve;
    }
    printf("\n");
}