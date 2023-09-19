#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertBST(Node *root, int data)
{
    if (root == NULL)
    {
        // create new node;
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertBST(root->left, data);
    }
    else
    {
        root->right = insertBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cout << "enter root data : ";
    cin >> data;
    while (data != -1)
    {
        root = insertBST(root, data);
        cin >> data;
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);

    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    takeInput(root);
    inorder(root);
}