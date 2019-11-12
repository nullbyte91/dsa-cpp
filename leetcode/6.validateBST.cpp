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

bool isBST(struct Bst* root)  
{  
    static Bst *prev = NULL;
    // traverse the tree in inorder fashion  
    // and keep track of prev node  
    if (root)  
    {  
        if (!isBST(root->left))  
        return false;  

        // Allows only distinct valued nodes  
        if (prev != NULL &&  
            root->data <= prev->data)  
        return false;  
  
        prev = root;  
  
        return isBST(root->right);  
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
    inOrder(root);
    printf("%d", isBST(root));
    return 0;
}