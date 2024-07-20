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
    Node *head;

public:
    linkedList()
    {
        head = nullptr;
    }
    void insertAtBegin(int data)
    {
        Node *new_node = new Node(data);
        if (!head)
        {
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
        return;
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

    void insertAtKpos(int data, int k)
    {
        Node *new_node = new Node(data);
        if (!head || k <= 1)
        {
            new_node->next = head;
            head = new_node;
            return;
        }

        Node *temp = head;
        for (int i = 1; i < k - 1 && temp->next; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
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

    ll.insertAtKpos(10, 6);

    ll.display();

    return 0;
}