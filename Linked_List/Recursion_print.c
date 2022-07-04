#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;

struct Node{
    ElemType data;
    struct Node* next;
};
struct Node* head;

void Insert (ElemType i,ElemType data);

void Print ();
// 使用递归答应链表
void recursion_print(struct Node* ptr);
// 使用递归反转链表
void recursion_reverse(struct Node* ptr);

int main()
{
    head = NULL;
    Insert(0,111);
    Print();
    Insert(1,222);
    Print();
    Insert(2,333);
    Print();
    Insert(3,444);
    Print();
    Insert(4,555);
    Print();

    recursion_print(head);
    recursion_reverse(head);
    recursion_print(head);
}

void Insert (ElemType i,ElemType data)
{
    struct Node* temp_into = (struct Node*)malloc(sizeof(struct Node*));
    temp_into->data = data;
    temp_into->next = NULL;
    if(i==0)
    {
        temp_into->next = head;
        head = temp_into;
        return;
    }
    struct Node* temp_next = head;
    for(ElemType n=0;n<i-1;n++)
        temp_next = temp_next->next;
    temp_into->next = temp_next->next;
    temp_next->next = temp_into;
}

// 使用遍历输出链表
void Print()
{
    struct Node* temp_next = head;
    printf("List is:");
    while (temp_next != NULL)
    {
        printf("%d  ",temp_next->data);
        temp_next = temp_next->next;
    }
    printf("\n");
}

// 使用递归输出链表
void recursion_print(struct Node* ptr)
{
    if(ptr == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d  ",ptr->data);
    recursion_print(ptr->next);
}

// 使用递归反转链表
void recursion_reverse(struct Node* ptr)
{
    if(ptr == NULL)
    {
        head = ptr;
        return;
    }
    recursion_reverse(ptr->next);
    struct Node* qtr = ptr->next;
    qtr->next = ptr;
    // 让最后节点一个不是双向指向
    ptr->next = NULL;
}
