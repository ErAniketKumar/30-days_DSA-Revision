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

// this is good but we create a extra new linkedlist
// void removeDublicate(Node *&head)
// {
//     if (!head || !head->next)
//         return;
//     Node *new_list = new Node(-1);
//     Node *ptr = new_list;
//     Node *temp = head;
//     while (temp->next)
//     {
//         if (temp->data != temp->next->data)
//         {
//             ptr->next = temp;
//             ptr = ptr->next;
//             temp = temp->next;
//         }
//         else
//         {
//             temp = temp->next;
//         }
//     }
//     if (temp->data != ptr->data)
//     {
//         ptr->next = temp;
//         temp = temp->next;
//     }
//     head = new_list->next;
// }

// whithout using any extra linkedlist
void removeDublicate(Node *&head)
{
    if (!head || !head->next)
        return;
    Node *temp = head;
    while (temp && temp->next)
    {
        if (temp->data == temp->next->data)
        {
            Node *del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        else
        {
            temp = temp->next;
        }
    }
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
    removeDublicate(ll.head);

    ll.display();

    return 0;
}