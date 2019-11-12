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
    vector<int> inOElements;
    stack<struct Bst*> nodes;
        
    if (root == NULL){
        return;
    }

    while(root != NULL || !nodes.empty()){
        //push left children if available
        while(root != NULL){
            nodes.push(root);
            root = root->left;
        }
        
        //retrieve top node and store its right child if exists
        root = nodes.top();
        nodes.pop();
        
        inOElements.push_back(root->data);
        root = root->right;
    }

    for (auto it = inOElements.begin(); it != inOElements.end(); ++it){
        printf("%d ", *it);
    }

}

int
main(int argc, char** argcv){
    struct Bst *root  = newNode(4); 
    root->left        = newNode(2); 
    root->right       = newNode(5); 
    root->left->left  = newNode(1); 
    root->left->right = newNode(3);
    inOrder(root);
    return 0;
}