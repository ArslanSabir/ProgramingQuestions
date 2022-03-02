/* Program to implement Binary Search Tree in c++ using classes  */
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
    private:
        struct Node* root;
    public:
        BinaryTree() {
            root = NULL;
        }
        Node* createNode(int);
        Node* insertNode(Node*, int);
        void inOrder(Node*);

        Node* getRoot() {
            return root;
        }

        void setRoot(Node* ptr) {
            root = ptr; 
        }
};

Node* BinaryTree :: createNode(int n) {
    Node* newNode = new struct Node();
    newNode->data = n;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode; 
}




Node* BinaryTree :: insertNode(Node* rootPtr, int n) {
    if(rootPtr == NULL) {
        return createNode(n);
    }
    if(n < rootPtr->data) {
        rootPtr->left = insertNode(rootPtr->left, n);
    }
    if(n > rootPtr->data) {
        rootPtr->right = insertNode(rootPtr->right, n);
    }
    return rootPtr;
}




void BinaryTree :: inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}


int main() {
    BinaryTree l1;
    int ch, ele;
    Node* ptr;
    do {
            cout<<"1 - Insert Node\n";
            cout<<"2 - IN-ORDER Traversal\n";
            cout<<"Enter choice\n";
            cin>>ch;
            switch(ch) {
                case 1: 
                    cout<<"Entre element to insert to the List\n";
                    cin>>ele;

                    ptr = l1.insertNode(l1.getRoot(), ele);
  
                    l1.setRoot(ptr);
                    break;
                case 2:
                    cout<<"---IN-ORDER TRAVERSAL---"<<endl;
                    l1.inOrder(l1.getRoot());
                    cout<<endl;
                    break;
                default: cout<<"Invalid choice"<<endl;
            }
    } while(ch >=1 && ch <= 5);
    return 0;
}
