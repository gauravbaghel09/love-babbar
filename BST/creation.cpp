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
Node *insertInBST(Node *root, int data)
{
    if (root == NULL)
    {
        // this is the first node we have to created.
        root = new Node(data);
        return root;
    }
    // no the first node.
    if (root->data > data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
}

void levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void preOrder(Node *root)
{
    // MLR
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void PostOrder(Node *root)
{
    // LRM
    if (root == NULL)
    {
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
void InOrder(Node *root)
{
    // LMR
    if (root == NULL)
    {
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
int main()
{
    Node *root = NULL;
    cout << "enter the root Node : " << endl;
    takeInput(root);
    cout << "printing the tree." << endl;
    levelorder(root);
    cout << endl;
    cout << "printing INORDER: " << endl;
    InOrder(root);
    cout << endl;
    cout << "printing POSTORDER: " << endl;
    PostOrder(root);
    cout << endl;
    cout << "printing PREORDER: " << endl;
    preOrder(root);
    return 0;
}