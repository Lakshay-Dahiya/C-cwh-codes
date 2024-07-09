#include <iostream>

class B; // Forward declaration

class A {
private:
    int numA;

public:
    A() {
        std::cout << "Enter a value for numA: ";
        std::cin >> numA;
    }

    // Friend function declaration
    friend int findGreatest(const A& objA, const B& objB);
};

class B {
private:
    int numB;

public:
    B() {
        std::cout << "Enter a value for numB: ";
        std::cin >> numB;
    }

    // Friend function declaration
    friend int findGreatest(const A& objA, const B& objB);
};

// Friend function definition
int findGreatest(const A& objA, const B& objB) {
    return (objA.numA > objB.numB) ? objA.numA : objB.numB;
}

int main() {
    // Create objects of class A and B
    A objectA;
    B objectB;
    
    // Use friend function to find the greatest number
    int greatest = findGreatest(objectA, objectB);

    // Display the result
    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}
