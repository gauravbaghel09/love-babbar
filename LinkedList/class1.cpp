#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {

        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtmiddle(int postion, Node *&head, Node *&tail, int data)
{
    if (head = NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // inset a head begging
    if (postion == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // step1 : find the postion : prev & curr
    int i = 1;
    Node *prev = head;
    while (i < postion)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL && head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // head->next = second;
    // // second->next = third;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 100);
    insertAtmiddle(3, head, tail, 101);
    print(head);
}