#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle()
    {}

    Circle(int radius)
    {
        this->radius = radius;
    }

    void display()
    {
        cout << "Value of Radius is :: " << radius << endl;
    }

    Circle operator-(const Circle &rho)
    {
        Circle result;
        result.radius = abs(this->radius - rho.radius);
        return result;
    }
};

int main()
{
    Circle c1(15), c2(12), c3;

    c3 = c1 - c2;

    cout << "--------------------" << endl;

    c3.display();

    return 0;
}