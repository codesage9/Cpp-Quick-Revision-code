#include <iostream>
using namespace std;


struct Demo
{
    int i1;
    int i2;
};

// struct name_of_struct
// {
//     datatypes etc
// }struct_variable_dec;


int main(int argc, char* argv[])
{
    Demo d1;
    d1.i1 = 10;
    d1.i2 = 20;

    cout << d1.i1 << " " << d1.i2 ;
    return 0;
}

