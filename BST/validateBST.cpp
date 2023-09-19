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
void takeinput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertBST(root, data);
        cout << "enter data :";
        cin >> data;
    }
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

bool validate(Node *root, long long int lb, long long int ub)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data > lb && root->data < ub)
    {
        bool leftans = validate(root->left, lb, root->data);
        bool rightans = validate(root->right, root->data, ub);
        return leftans && rightans;
    }
    else
    {
        return false;
    }
}

bool isValidate(Node *root)
{
    long long int lb = -429496729;
    long long int ub = 4234967296;
    bool ans = validate(root, lb, ub);
    return ans;
}
int main()
{

    Node *root = NULL;
    takeinput(root);
    cout << "printing preorder : " << endl;
    ;
    preorder(root);
    bool ans1 = isValidate(root);
    cout << "ans is : " << ans1 << endl;
}