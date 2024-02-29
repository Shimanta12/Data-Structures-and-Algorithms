template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T val)
    {
        data = val;
        next = nullptr;
    }
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }

    void push(T data)
    {
        Node<T> *temp = new Node<T>(data);
        if (empty())
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void pop()
    {
        if (!empty())
        {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }
    }

    T front()
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
};