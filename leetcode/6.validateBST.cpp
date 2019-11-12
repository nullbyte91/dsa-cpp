#include <bits/stdc++.h>
using namespace std;

struct Bst{
    int data;
    struct Bst *left, *right;
};

struct Bst*
newNode(int data){
    struct Bst * newNode = (struct Bst*)malloc(sizeof(struct Bst));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void
inOrder(struct Bst *root){
    if (root == NULL){
        return;
    }
    inOrder(root->left);
    printf("%d", root->data);
    inOrder(root->right);
}

bool isBST(struct Bst * root)
{
    stack<struct Bst*> Stack;
    struct Bst * prev = NULL;    
    
    if (root == NULL){
        return true;
    }

    while (root != NULL || !Stack.empty()){
        
        while(root != NULL){
            Stack.push(root);
            root = root->left;
        }

        root = Stack.top();
        Stack.pop();
        
        if (prev != NULL && prev->data >= root->data){
            return false;
        }
        prev = root;
        root = root->right;
    }
    return true;
}

int
main(int argc, char** argcv){
    struct Bst *root  = newNode(3); 
    root->left        = newNode(2); 
    root->right       = newNode(5); 
    root->left->left  = newNode(1); 
    root->left->right = newNode(4);
    //inOrder(root);
    printf("%d", isBST(root));
    return 0;
}