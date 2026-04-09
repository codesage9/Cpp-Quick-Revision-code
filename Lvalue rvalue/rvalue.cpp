/*
    References 
    Microsoft Learn cpp
*/

/*
    Declarator	Binds To	Typical Use
    &	        lvalues	    Aliasing existing objects
    &&	        rvalues	    Capturing temporaries

*/



#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3};

    // Copy constructor: duplicates v1
    std::vector<int> v2 = v1;

    // Move constructor: steals v1's buffer
    std::vector<int> v3 = std::move(v1);

    std::cout << "v1 size after move: " << v1.size() << "\n"; // 0
}

/*
    std::move converts v1 into an rvalue reference (std::vector<int>&&).
    The move constructor of std::vector takes over the memory buffer instead of copying.

    # Result: fast transfer, no duplication.

    Time complexity O(1)
    instead of copying the values it just transfered the value to a different reference 
*/