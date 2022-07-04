#include<stdio.h>
#include<stdlib.h>
typedef int Data;

Data MaxNumber = 10;
struct stacks{
    Data *arr;
    Data top;
}son;

void Initialize(struct stacks *s,Data t);
void push(struct stacks *s , Data data);
void pop(struct stacks *s);
void IsEmpty(struct stacks *s);

int main(){
    
    // 初始化
    Initialize(&son,son.top);
    IsEmpty(&son);
    pop(&son);

    for(Data i = 100; i < 1000; i = i+100 )
        push(&son,i);

    IsEmpty(&son);

    for(Data i = 0; i <= son.top; i++)
        printf("i是 %d 时,元素是%d \n",i,son.arr[i]);

    pop(&son);
    printf("****************************************** \n");
    IsEmpty(&son);
    for(Data i = 0; i <= son.top; i++)
        printf("i是 %d 时,元素是%d \n",i,son.arr[i]);

}

void Initialize(struct stacks *s,Data t){
    s->arr = (Data*)malloc(MaxNumber * sizeof(Data));
    s->top = -1;
    return;
} 
void push(struct stacks *s , Data data){
    if(son.top == MaxNumber-1 ){
        MaxNumber = MaxNumber * 2;
        s->arr = (Data*)malloc(MaxNumber * sizeof(Data));
    }
    s->arr[++(s->top)] = data;
    return;
}

void pop(struct stacks *s){
   if (s->top == -1)
    {
        printf("该栈本来就为空,无法删除\n");
        return;
    }
    (s->top)--;
}

void IsEmpty(struct stacks *s){
    if (s->top == -1)
    {
        printf("这个栈为空\n");
        return;
    }
    printf("这个栈长度为:%d \n",s->top+1);
}