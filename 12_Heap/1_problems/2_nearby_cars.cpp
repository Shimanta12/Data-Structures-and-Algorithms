#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

/*
Finding Cabs
Given N cartesian points in a 2D plane each represents the location of the cab. You are standing at origin, you want to know the names of nearest K cars.

Sample input:
N=5, K=3
c1 1 1
c2 2 1
c3 3 2
c4 0 1
c5 2 3

Output:
c4
c1
c2

 */

class Car
{
public:
    string id;
    int x;
    int y;
    Car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist() const
    {
        return this->x + this->y;
    }
};

class Compare
{
public:
    bool operator()(Car a, Car b)
    {
        return a.dist() < b.dist();
    }
};

void print_nearest_cars(vector<Car> cars, int k)
{
    priority_queue<Car, vector<Car>, Compare> max_heap(cars.begin(), cars.begin() + k);

    for (int i = k; i < cars.size(); i++)
    {
        if (cars[i].dist() < max_heap.top().dist())
        {
            max_heap.pop();
            max_heap.push(cars[i]);
        }
    }

    vector<Car> output;
    while (!max_heap.empty())
    {
        output.push_back(max_heap.top());
        max_heap.pop();
    }
    reverse(output.begin(), output.end());

    for (auto car : output)
    {
        cout << car.id << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<Car> cars;

    string id;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> x >> y;
        Car car = Car(id, x, y);
        cars.push_back(car);
    }

    print_nearest_cars(cars, k);
    return 0;
}

/*
5 3
c1 1 1
c2 2 1
c3 3 2
c4 0 1
c5 2 3

 */