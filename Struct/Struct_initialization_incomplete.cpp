#include <iostream>
#include <string>

using namespace std;


// 1. Designated Initialization (C++20 and later)
struct User {
    string name;
    int age;
    bool isActive;
};

// Explicitly naming the fields
User u1 = {.name = "Alice", .age = 28, .isActive = true}; 

// You can skip fields; omitted fields are zero-initialized
User u2 = {.name = "Bob", .isActive = false}; // age defaults to 0



// 2. Aggregate / Brace Initialization (C++11 and later)
struct Point {
    int x;
    int y;
};

Point p1 = {10, 20}; // Traditional C-style aggregate initialization
Point p2{15, 30};    // C++11 uniform syntax (no '=' needed)


// 3. Default Member Initialization (C++11 and later)
struct Configuration {
    int maxConnections = 100; // Default values
    bool useSSL = true;
};

Configuration config1;          // config1.maxConnections is 100, useSSL is true
Configuration config2{50, false}; // Overrides defaults: 50, false


// 4. Constructor-Based Initialization
struct Rectangle {
    int width;
    int height;

    // Custom constructor using an initializer list
    Rectangle(int w, int h) : width(w), height(h) {}
};

Rectangle rect(10, 5); // Must use constructor now; aggregate init is disabled


// 5. Member-by-Member Assignment (Dot Notation)
struct Person {
    std::string name;
    int age;
};

Person p; 
p.name = "Charlie";
p.age = 32;




int main()
{
    return 0;
}