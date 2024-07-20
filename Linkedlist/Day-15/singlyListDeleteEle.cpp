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

    void deleteAtBegin()
    {
        if (!head)
            return;

        Node *del = head;
        head = head->next;
        delete del;
    }

    void deleteAtEnd()
    {
        if (!head)
            return;
        if (!head->next)
        {
            head = nullptr;
            return;
        }
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        Node *del = temp->next;
        temp->next = nullptr;
        delete del;
    }

    void deleteKpos(int k)
    {
        if (!head)
            return;
        if (k <= 1)
        {
            Node *del = head;
            head = head->next;
            delete del;
            return;
        }
        Node *temp = head;
        for (int i = 1; i < k - 1 && temp->next->next; i++)
        {
            temp = temp->next;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        delete del;
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
    ll.deleteAtBegin();
    // ll.deleteAtEnd();
    // ll.deleteKpos(10);
    // cout << endl;
    ll.display();

    return 0;
}