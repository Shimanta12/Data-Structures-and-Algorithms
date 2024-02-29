#include <iostream>
using namespace std;

template <typename T>
class Stack;

template <typename T>
class Node
{
    T data;
    Node<T> *next;

public:
    Node(T data)
    {
        this->data = data;
        this->next = nullptr;
    }
    friend class Stack<T>;
};

template <typename T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = nullptr;
    }
    void push(T data)
    {
        Node<T> *temp = new Node<T>(data);
        temp->next = head;
        head = temp;
    }
    T pop()
    {
        if (!empty())
        {
            T val = head->data;
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            return val;
        }
    }
    T top()
    {
        if (!empty())
        {
            return head->data;
        }
    }
    bool empty()
    {
        return head == nullptr;
    }

    void print_stack()
    {
        Node<T> *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};