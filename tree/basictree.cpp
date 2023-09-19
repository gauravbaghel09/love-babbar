#include <iostream>
using namespace std;
#include <queue>
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

void LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
    }
}

Node *buildTree(Node *root)
{
    // root node created.
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    // roots left.
    cout << "enter data for inserting left node: " << endl;
    root->left = buildTree(root->left);

    // roots right.
    cout << "enter data for inserting in right of: " << endl;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    LevelOrder(root);
    return 0;
}