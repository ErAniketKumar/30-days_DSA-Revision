#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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
    }
};

Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prev = nullptr;
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *recursive_revList(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *new_head = recursive_revList(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = nullptr;
    return new_head;
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

    // ll.display();

    // iterative version
    ll.head = reverseList(ll.head);
    // recursive version
    ll.head = recursive_revList(ll.head);
    ll.display();

    return 0;
}