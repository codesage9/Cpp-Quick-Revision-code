// #include <bits/stdc++.h> // Includes iostream and string automatically
#include <iostream>
#include <string>
using namespace std;

// ==========================================
// STRUCTURE DEFINITIONS (Global Scope)
// ==========================================

// 1. Designated Initialization
struct User {
    string name;
    int age;
    bool isActive;
};

// 2. Aggregate / Brace Initialization
struct Point {
    int x;
    int y;
};

// 3. Default Member Initialization
struct Configuration {
    int maxConnections = 100; 
    bool useSSL = true;
};

// 4. Constructor-Based Initialization
struct Rectangle {
    int width;
    int height;

    // Custom constructor using a member initializer list
    Rectangle(int w, int h) : width(w), height(h) {}
};

// 5. Member-by-Member Assignment
struct Person {
    string name;
    int age;
};

// ==========================================
// MAIN FUNCTION (Execution Scope)
// ==========================================
int main() {
    // ---- 1. Designated Initialization (C++20) ----
    User u1 = {.name = "Alice", .age = 28, .isActive = true}; 
    User u2 = {.name = "Bob", .isActive = false}; // age defaults to 0
    
    cout << "User 1: " << u1.name << ", Age: " << u1.age << "\n";
    cout << "User 2: " << u2.name << ", Age: " << u2.age << "\n\n";


    // ---- 2. Aggregate / Brace Initialization (C++11) ----
    Point p1 = {10, 20}; 
    Point p2{15, 30};    // Uniform syntax
    
    cout << "Point 1: (" << p1.x << ", " << p1.y << ")\n\n";


    // ---- 3. Default Member Initialization (C++11) ----
    Configuration config1;            // Inherits defaults: 100, true
    Configuration config2{50, false}; // Overrides defaults
    
    cout << "Config 1 SSL: " << (config1.useSSL ? "ON" : "OFF") << "\n";
    cout << "Config 2 Max: " << config2.maxConnections << "\n\n";


    // ---- 4. Constructor-Based Initialization ----
    Rectangle rect(10, 5); // Braced syntax `Rectangle rect{10, 5};` also works
    
    cout << "Rectangle Area: " << (rect.width * rect.height) << "\n\n";


    // ---- 5. Member-by-Member Assignment ----
    Person p; 
    p.name = "Charlie";
    p.age = 32;
    
    cout << "Person: " << p.name << ", " << p.age << " years old.\n";

    return 0;
}
