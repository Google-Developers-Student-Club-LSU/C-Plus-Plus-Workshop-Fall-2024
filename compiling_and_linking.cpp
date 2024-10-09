// Including the necessary libraries
#include <iostream>

// Defining a constant
#define PI 3.14159

// Defining a macro
#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

#define ADVANCED_FEATURE

int main() {
    // Prompt user for radius
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius; //cin is simular to Scanner(System.in) in java

    std::cout << "The area of the circle is: " << CIRCLE_AREA(radius) << std::endl;

#ifdef ADVANCED_FEATURE
    // This part will only compile if ADVANCED_FEATURE is defined. If you remove line 10, this part will skip.
    std::cout << "Advanced feature is enabled!" << std::endl;
#endif

    return 0;
}
