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

Node *findMidNode(Node *head)
{
    if (!head || !head->next)
    {
        return nullptr;
    }
    if (!head->next->next)
    {
        head->next = nullptr;
        return head;
    }
    Node *slow, *fast;
    slow = fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *deleteMidNode(Node *head)
{
    if (!head || !head->next)
    {
        return nullptr;
    }
    if (!head->next->next)
    {
        head->next = nullptr;
        return head;
    }
    Node *slow, *fast;
    slow = fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->data = slow->next->data;
    slow->next = slow->next->next;
    return head;
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

    // for frint the mid element of linkedlist
    Node *mid_node = findMidNode(ll.head);
    if (mid_node)
    {
        cout << mid_node->data << " ";
    }
    else
    {
        cout << "nullptr" << endl;
    }
    cout << endl;

    // delete mid element of linkedlist

    ll.head = deleteMidNode(ll.head);
    ll.display();

    return 0;
}