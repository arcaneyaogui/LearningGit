#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
};
// 全局变量 头指针
struct Node* head = NULL;;

void PrinT();
struct Node* Reverse(struct Node* head);
void Insert (struct Node *list ,int i, int data );


int main()
{
    Insert(head,0,111);
    Insert(head,1,222);
    Insert(head,2,333);
    Insert(head,3,444);
    Insert(head,4,555);
    PrinT();
    head = Reverse(head);
    PrinT();
}

void Insert (struct Node *list ,int i, int data )
{
    struct Node* temp_next = head;
    struct Node* temp_insert = (struct Node*)malloc(sizeof(struct Node));
    temp_insert->data = data;
    temp_insert->next = NULL;
    // 再head后插入时
    if(i == 0 )
    {
        temp_insert->next = head;
        head = temp_insert;
        return;
    }

    for(int h = 0;h < i-1;h++)
        temp_next = temp_next->next;
    temp_insert->next = temp_next->next;
    temp_next->next = temp_insert;
    return;
}

void PrinT()
{
    struct Node* temp_next = head;
    while (temp_next != NULL)
    {
        printf("%d  ",temp_next->data);
        temp_next = temp_next->next;
    }
    
}

// 反转单链表
struct Node* Reverse(struct Node* head)
{
    struct Node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        // next = (*current).next;
        next = current->next;
        current->next = prev;
        prev = current;
        current = next; 
    }
    head = prev;
    return head;
}