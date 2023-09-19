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
        left = NULL;
        right = NULL;
    }
};

void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
    }
}

Node *buildtree(Node *root)
{
    cout << "enter data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    // left tree
    // int leftdata;
    cout << "enter left node data : " << endl;
    ;
    // cin >> leftdata;
    root->left = buildtree(root->left);

    // int rightdata;
    cout << "enter the right node data : " << endl;
    // cin >> rightdata;
    root->right = buildtree(root->right);
    return root;
}
int main()
{
    Node *root = NULL;
    root = buildtree(root);
    levelorder(root);
    return 0;
}