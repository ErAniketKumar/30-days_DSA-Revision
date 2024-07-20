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

int lengthOfLoop(Node *slow, Node *fast)
{
    fast = fast->next;
    int count = 1;
    while (fast != slow)
    {
        fast = fast->next;
        count++;
    }
    return count;
}

int startPosLoop(Node *slow, Node *fast, Node *head)
{
    fast = head;
    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}

void removedLoop(Node *slow, Node *fast, Node *&head)
{
    fast = head;
    Node *temp = slow;
    while (fast != temp)
    {
        temp = temp->next;
        fast = fast->next;
    }
    while (slow->next != fast)
    {
        slow = slow->next;
    }
    slow->next = nullptr;
}

void detectCycle_and_remove(Node *&head)
{
    if (!head)
        return;
    if (head->next == head)
    {
        head->next = nullptr;
        return;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "loop found" << endl;
            cout << "length of loop is: " << lengthOfLoop(slow, fast) << endl;
            cout << "starting position of loop: " << startPosLoop(slow, fast, head) << endl;
            cout << "removed loop" << endl;
            removedLoop(slow, fast, head);
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

    // make loop
    //  ll.display();
    Node *temp = ll.head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = ll.head->next;
    detectCycle_and_remove(ll.head);
    cout << endl;
    ll.display();

    return 0;
}