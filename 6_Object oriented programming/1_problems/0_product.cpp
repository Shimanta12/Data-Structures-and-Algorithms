#include <iostream>
#include <cstring>
using namespace std;

class Product
{
    int id;
    char *name;
    int mrp;
    int selling_price;

public:
    // Constructor
    Product()
    {
        cout << "Hello" << endl;
    }
    // Parameterized constructor (based on the parameter one of the constructor will be called)
    Product(int id, char name[], int mrp, int selling_price)
    {
        this->id = id;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }

    // Copy construtor
    Product(Product &x)
    {
        // Deep copy inside copy constructor.
        this->id = x.id;
        this->name = new char[strlen(x.name) + 1];
        strcpy(this->name, x.name);
        this->mrp = x.mrp;
        this->selling_price = x.selling_price;
    }

    // Copy assignment operator
    void operator=(Product &x)
    {
        // Deep copy inside copy assignment.
        this->id = x.id;
        this->name = new char[strlen(x.name) + 1];
        strcpy(this->name, x.name);
        this->mrp = x.mrp;
        this->selling_price = x.selling_price;
    }

    // setter
    void set_mrp(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
    }
    void set_selling_price(int price)
    {
        // additional check
        if (price <= 0)
            if (price > mrp)
            {
                selling_price = mrp;
            }
            else
            {
                selling_price = price;
            }
    }
    void set_name(char *name)
    {
        strcpy(this->name, name);
    }

    // getter
    int get_mrp()
    {
        return mrp;
    }
    int get_selling_price()
    {
        return selling_price;
    }
    char *get_name()
    {
        return this->name;
    }

    void show_details()
    {
        cout << "ID: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "MRP: " << this->mrp << endl;
        cout << "Selling price: " << this->selling_price << endl;
        cout << "_______________________________" << endl;
    }

    // Destructor
    ~Product()
    {
        if (this->name != NULL)
        {
            delete[] this->name;
            name = NULL;
        }
    }
};

int main()
{
    Product camera(1, "Sony", 100, 90);

    Product new_camera(camera); // Copying using copy constructor
    new_camera.set_name("Nikon");

    Product another_camera = camera; // Copying using copy assignment operator
    another_camera.set_name("Hazzleband");

    camera.show_details();
    new_camera.show_details();
    another_camera.show_details();
    return 0;
}