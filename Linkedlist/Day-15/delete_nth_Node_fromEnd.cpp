#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class linkedList
{

public:
    Node *head;
    linkedList()
    {
        head = nullptr;
    }

    void insertAtEnd(int data)
    {
        Node *new_node = new Node(data);
        if (!head)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void deleteNthNodeEnd(Node *&head, int nth)
{
    if (!head)
        return;
    Node *slow = head;
    Node *fast = head;
    for (int i = 1; i <= nth; i++)
    {
        fast = fast->next;
    }

    if (!fast)
    {
        head = head->next;
        return;
    }
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;
}
int main()
{

    linkedList ll;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        ll.insertAtEnd(x);
    }

    int nth;
    cin >> nth;

    ll.display();
    deleteNthNodeEnd(ll.head, nth);
    ll.display();

    return 0;
}