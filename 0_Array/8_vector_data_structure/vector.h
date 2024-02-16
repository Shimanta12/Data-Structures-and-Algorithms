// Generic class (templating)

template <typename T> // The type of data will be provided in where this data structure is declared.
class Vector
{
    // Data members
private:
    T *arr;
    int cs;
    int ms;

public:
    // constructor
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }
    void push_back(int data)
    {
        // two cases
        if (cs == ms)
        {
            // create a new array, delete the old one & double the capacity.
            ms *= 2;
            T *temp = new T[ms];
            for (int i = 0; i < cs; i++)
            {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[cs] = data;
        cs++;
    }
    // Removing the last element
    void pop_back()
    {
        if (cs > 0)
            cs--;
    }

    // insert an element at given index
    void insert(int i, int value)
    {
        if (i >= 0 and i <= cs)
        {
            if (cs == ms)
            {
                // create a new array, delete the old one & double the capacity.
                ms *= 2;
                T *temp = new T[ms];
                for (int i = 0; i < cs; i++)
                {
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
            }
            for (int idx = cs - 1; idx >= i; idx--)
            {
                arr[idx + 1] = arr[idx];
            }
            arr[i] = value;
            cs++;
        }
    }
    //    |
    // 1 2 3 4 5
    // removes element from a given position
    int erase(int i)
    {
        if (i >= 0 and cs > 0 and i < cs)
        {
            for (int idx = i; idx < cs - 1; idx++)
            {
                arr[idx] = arr[idx + 1];
            }
            cs--;
        }
    }

    // return the first element
    T front() const
    {
        if (cs > 0)
            return arr[0];
    }

    // returns the last element
    T back() const
    {
        return arr[cs - 1];
    }

    // returns element at given index
    T at(int i) const
    {
        return arr[i];
    }

    // returns the current size
    int size() const
    {
        return cs;
    }

    // returns the capacity
    int capacity() const
    {
        return ms;
    }

    // returns if the vector is empty or not
    bool is_empty() const
    {
        return cs == 0;
    }

    // function is declared constant within a class when it doesn't modify any of the data members of the class. (A good practice!)
    // operator overloading
    int operator[](const int i) const
    {
        return arr[i];
    }
};