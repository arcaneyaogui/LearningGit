#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

struct Node{
    ElemType data;
    struct Node* Next;
};
struct Node* head;
// 判断下表是否正确
int Judge_number(ElemType n);
// 插入节点
void Insert(ElemType data,ElemType n);
//删除节点
void delete(ElemType n);
// 修改节点
void change(ElemType n,ElemType data);
// 查找链表元素
void seek(ElemType data);
// 打印链表
void Print();

int main(){
    // 链表为空
    head = NULL;
    ElemType i = 1,n = 0,x = 0;

    // 使用插入函数初始化链表
    printf("How many numbers ?\n");
    scanf("%d",&n);
    for (; i <= n; i++)
    {
        printf("请输入第 %d 个数字:\n",i);
        scanf("%d",&x);
        Insert(x,i);
        Print();
    }

    // 删除链表元素
    printf("请输入你要删除上面链表中的第几个数字?\n");
    scanf("%d",&i);
    delete(i);
    Print();

    // 修改链表元素
    printf("请输入你要修改上面链表中的第几个数字?\n");
    scanf("%d",&i);
    printf("将它修改成什么?\n");
    scanf("%d",&x);
    change(i,x);

    // 查找链表元素
    printf("输入你要匹配的数字?\n");
    scanf("%d",&x);
    seek(x);
    return 0;
}

void Insert(ElemType data,ElemType n){
    if(Judge_number(n)){
        printf("插入失败,下标输入错误!\n");
        return;
    }
    struct Node* temp_one = (struct Node*)malloc(sizeof(struct Node)); 
    temp_one->data = data;
    temp_one->Next = NULL;
    // 如果从开头插入节点
    if(n == 1){
        temp_one->Next = head;
        head = temp_one;
        return; // 结束函数
    }
    ElemType size = 1; // 计数
    struct Node* temp_two = head;
    while (size < n-1){
        temp_two =  temp_two->Next;
        size++;
    }
    temp_one->Next = temp_two->Next;
    temp_two->Next = temp_one;
} 

void delete(ElemType n){
    if(Judge_number(n)){
        printf("插入失败,下标输入错误!\n");
        return;
    }
    struct Node* temp_one = head;
    if(n == 1){
        head = temp_one->Next;
        free(temp_one);
        return; // 结束函数
    }
    ElemType size = 1; // 计数
    while (size < n-1){
        temp_one = temp_one->Next;
        size++;
    }
    struct Node* temp_two = temp_one->Next;
    temp_one->Next = temp_two->Next;
    free(temp_two);
}

void change(ElemType n,ElemType data){
    if(Judge_number(n)){
        printf("插入失败,下标输入错误!\n");
        return;
    }
    if (!head)
        printf("此链表为空链表,修改失败.\n");
    struct Node* temp = head;
    ElemType size = 1; // 计数
    while (size < n){
        temp = temp->Next;
        size++;
    }
    temp->data = data;
    printf("修改成功!\n");
    Print();
}

void seek(ElemType data){
    struct Node* temp = head;
    ElemType size = 1,quantity = 0;
    while(temp!=NULL){
        if(temp->data == data)
        {
            ++quantity;
            printf("第%d次匹配成功,是链表中第%d个\n",quantity,size);
        }
        temp = temp->Next;
        size++;
    }
    if(quantity == 0)
        printf("无任何匹配结果!");
}

int Judge_number(ElemType n){
    ElemType lenght = 0;
    struct Node* temp = head;
    while (temp!=NULL){
        temp = temp->Next;
        lenght++;
    }
        
    if(n<0 || n>lenght+1)
        return 1;
    return 0;
}

void Print(){
    struct Node* temp = head;
    printf("List are: ");
    while(temp!=NULL){
        printf("  %d",temp->data);
        // 继续指向后方节点
        temp = temp->Next;
    }
    printf("\n");
}