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

Node *buildtree(int data)
{
    if (data == -1)
    {
        return NULL;
    }

    // one case.
    Node *root = new Node(data);
    int leftdata;
    cout << "enter data of left data : " << endl;
    cin >> leftdata;
    root->left = buildtree(leftdata);

    // Node *root = new Node(data);
    int rightdata;
    cout << "enter data of right data : " << endl;
    cin >> rightdata;
    root->right = buildtree(rightdata);

    return root;
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

int main()
{
    Node *root;
    int data;
    cout << "enter data for root node : " << endl;
    cin >> data;
    root = buildtree(data);

    cout << "ans : " << endl;
    levelorder(root);
    return 0;
}