template <typename T>
class Queue
{
    T *arr;
    T size;
    T cs;
    T ms;
    T f;
    T r;

public:
    Queue(T n)
    {
        size = n;
        ms = n;
        arr = new T[size];
        cs = 0;
        f = 0;
        r = ms - 1;
    }
    bool empty()
    {
        return cs == 0;
    }

    bool full()
    {
        return cs == ms;
    }

    void push(T data)
    {
        if (!full())
        {
            r = (r + 1) % ms;
            arr[r] = data;
            cs++;
        }
    }

    void pop()
    {
        if (!empty())
        {
            f = (f + 1) % ms;
            cs--;
        }
    }

    T front()
    {
        return arr[f];
    }
    ~Queue()
    {
        delete this->arr;
    }
};