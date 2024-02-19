#include <iostream>
using namespace std;

class List; // Forward declaration
class Node
{
    int data;
    Node *next;

public:
    // Node constructor
    Node(int d) : data(d), next(NULL) {} // Initialization list

    friend class List;
};

class List
{
    Node *head;
    Node *tail;

    int helper(Node *start, int key)
    {
        if (start == NULL)
            return -1;
        if (start->data == key)
            return 0;
        int sub_idx = helper(start->next, key);
        if (sub_idx == -1)
        {
            return sub_idx;
        }
        return sub_idx + 1;
    }

public:
    // List construtor
    List()
    {
        this->head = NULL;
        this->tail = NULL;
    }

    // Returns the pointer to first element
    Node *begin()
    {
        return this->head;
    }

    // Returns the pointer to last element
    Node *end()
    {
        return this->tail;
    }

    // Inserts an element at front
    void push_front(int data)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
    }

    // Inserts an element at back
    void push_back(int data)
    {
        Node *n = new Node(data);
        if (tail == NULL)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }

    // Inserts an element at given position
    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
        }
        else
        {
            Node *n = new Node(data);
            Node *temp = head;
            for (int jump = 1; jump <= pos - 1; jump++)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    // Deletes front element of the list
    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // Deletes last element of the list
    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }

    // Removes element from given position
    void remove(int pos)
    {
        Node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }
        Node *n = temp->next;
        temp->next = n->next;
        delete n;
    }

    // Linear search on the list
    int search(int key)
    {
        int idx = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    // Recursively search an element in the list
    int rec_search(int key)
    {
        return helper(head, key);
    }

    // Returns the front element
    int at_front()
    {
        if (head != NULL)
        {
            return head->data;
        }
    }

    // Returns the last element
    int at_back()
    {
        if (tail != NULL)
        {
            return tail->data;
        }
    }

    // Reverse a list
    void reverse()
    {
        Node *curr = head;
        tail = head;
        Node *prev = NULL;
        Node *temp;
        while (curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
    }

    // Prints the list
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~List()
    {
        Node *next;
        while (head != NULL)
        {
            next = head->next;
            delete head;
            head = next;
        }
        head = NULL;
    }
};
