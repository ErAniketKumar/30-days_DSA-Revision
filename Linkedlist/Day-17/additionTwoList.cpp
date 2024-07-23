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

void reverseList(Node *&head)
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
    head = prev;
}

Node *additionTwo(Node *&head1, Node *&head2)
{
    reverseList(head1);
    reverseList(head2);
    Node *new_head = new Node(-1);
    Node *ptr = new_head;
    Node *p = head1;
    Node *q = head2;
    int carry = 0;
    while (p || q)
    {
        int a = p ? p->data : 0;
        int b = q ? q->data : 0;
        if (p)
        {
            p = p->next;
        }
        if (q)
        {
            q = q->next;
        }
        ptr->next = new Node((a + b + carry) % 10);
        ptr = ptr->next;
        carry = (a + b + carry) / 10;
    }
    if (carry > 0)
    {
        ptr->next = new Node(carry);

        ptr = ptr->next;
    }

    reverseList(new_head->next);
    return new_head->next;
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

    cout << "second list" << endl;
    linkedList ll2;
    int size2;
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        ll2.insertAtEnd(x);
    }

    Node *new_head = additionTwo(ll.head, ll2.head);

    ll.head = new_head;
    ll.display();
    return 0;
}