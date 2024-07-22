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

Node *sort012List(Node *head)
{
    Node *temp = head;
    Node *zero = new Node(-1);
    Node *one = new Node(-1);
    Node *two = new Node(-1);
    Node *ptr0 = zero;
    Node *ptr1 = one;
    Node *ptr2 = two;
    while (temp)
    {
        if (temp->data == 0)
        {
            ptr0->next = temp;
            temp = temp->next;
            ptr0 = ptr0->next;
        }
        else if (temp->data == 1)
        {
            ptr1->next = temp;
            ptr1 = ptr1->next;
            temp = temp->next;
        }
        else if (temp->data == 2)
        {
            ptr2->next = temp;
            ptr2 = ptr2->next;
            temp = temp->next;
        }
    }
    ptr1->next = two->next;
    ptr2->next=nullptr;
    two= nullptr;
    ptr0->next = one->next;
    one=nullptr;
    return zero->next;
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

    ll.display();
    cout << endl;

    ll.head = sort012List(ll.head);

    ll.display();

    return 0;
}