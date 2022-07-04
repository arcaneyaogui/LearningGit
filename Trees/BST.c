#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* BST 也就是 Binary Search Tree
       二叉搜索树*/
struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
// 创建二叉搜索树的节点
struct BstNode* GetnewNode(int data);
// 插入一个二叉搜索树的节点
void Insert(struct BstNode** root,int data);
// 搜索一个二叉搜索树的节点
bool research(struct BstNode* root,int data);

int main(void){
    // 空树
    struct BstNode* root = NULL;
    Insert(&root,50);
    Insert(&root,20);
    Insert(&root,10);
    Insert(&root,60);
    Insert(&root,70);

    if(research(root,100) == true){
        printf("找到了!\n");
    }else{
        printf("没有找到!\n");
    }
}
// 创建一个树的节点
struct BstNode* GetnewNode(int data){
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

bool research(struct BstNode* root,int data){
    if(root == NULL){return false;}
    else if(root->data == data){return true;}
    else if(data <= root->data){return research(root->left,data);}
    else {return research(root->right,data);}
}


// 插入一个二叉搜索树的元素
void Insert(struct BstNode** rootptr,int data){
   if((*rootptr)==NULL){
       (*rootptr) = GetnewNode(data);
   }else if(data <= (*rootptr)->data){
       Insert( &((*rootptr)->left) , data );
   }else{
       Insert( &((*rootptr)->right) , data );
   }
}