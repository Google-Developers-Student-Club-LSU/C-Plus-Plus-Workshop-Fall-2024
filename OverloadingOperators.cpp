#include <iostream>
using namespace std;

class Vector2D
{
    // access modifyers dont operator in c++ in the same fasion as they do in java. Here you need to list all private variables and methods under private
private:
    int x, y;

public:
    // Constructor
    Vector2D(int x, int y) : x(x), y(y) {}

    // add x components and y components together
    Vector2D Add(const Vector2D &other) const
    {
        return Vector2D(x + other.x, y + other.y);
    }

    // Overloading the + operator to become our custom add method instead
    Vector2D operator+(const Vector2D &other) const
    {
        return Add(other);
    }

    // Overloading the << operator to print in a custom format whenever << operator is used
    // acts simularly to overidding toString method in java
    friend ostream &operator<<(ostream &stream, const Vector2D &vec)
    {
        stream << "Vector(" << vec.x << ", " << vec.y << ")";
        return stream;
    }

    // Overloading the == operator to compare two Vector2Ds by there components
    bool operator==(const Vector2D &other) const
    {
        return (x == other.x && y == other.y);
    }
};

int main()
{
    Vector2D vec1(1, 2);
    Vector2D vec2(3, 4);

    Vector2D vecSum = vec1 + vec2;
    cout << "Sum of vec1 and vec2: " << vecSum << endl; // Output: Vector(4, 6)

    // Using the overloaded == operator
    if (vec1 == vec2)
    {
        cout << "vec1 and vec2 are equal." << endl;
    }
    else
    {
        cout << "vec1 and vec2 are not equal." << endl; // This will be printed
    }

    return 0;
}
