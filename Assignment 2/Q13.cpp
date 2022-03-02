/* Q.xiii.	Write a program which should traverse
given 20 values using Binary Tree.
518 42 533 444 790 394 236 93 513 4 125 480 183 991 584 989 853 204 67 224

*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class BinaryTree
{
private:
    struct Node *root;

public:
    BinaryTree()
    {
        root = NULL;
    }
    Node *createNode(int);
    Node *insertNode(Node *, int);
    void inOrder(Node *);

    Node *getRoot()
    {
        return root;
    }

    void setRoot(Node *ptr)
    {
        root = ptr;
    }
};

Node *BinaryTree ::createNode(int n)
{
    Node *newNode = new struct Node();
    newNode->data = n;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *BinaryTree ::insertNode(Node *rootPtr, int n)
{
    if (rootPtr == NULL)
    {
        return createNode(n);
    }
    if (n < rootPtr->data)
    {
        rootPtr->left = insertNode(rootPtr->left, n);
    }
    if (n > rootPtr->data)
    {
        rootPtr->right = insertNode(rootPtr->right, n);
    }
    return rootPtr;
}

void BinaryTree ::inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << "\t";
    inOrder(root->right);
}

int main()
{
    BinaryTree l1;
    Node *ptr;

    int size = 20;
    int arr[size];

    cout << "Enter any 20 numbers" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        ptr = l1.insertNode(l1.getRoot(), arr[i]);
        l1.setRoot(ptr);
    }

    cout << "\n\t \t \t \t ******** Number After In-Order Traversal ******** " << endl
         << endl;
    l1.inOrder(l1.getRoot());
    cout << endl;
    return 0;
}
