#include <iostream>
using namespace std;

// Refference https://cppreference.com/w/cpp/language/main_function.html
// There exist 3 type of main funciton

// int main(){ body }
// int main(int argc, char* argv[]){ body }
// int main(/* implementation-defined */) { body }	

int fn(/*formal parameter*/)
{
    return 1;
}
int main()
{
    int a = fn( /* params actual params */);
    cout << a << endl;
    return 0;

}

// fn_grammer 
//     noptr-declarator ( parameter-list ) cv ﻿(optional) ref ﻿ ﻿(optional) except ﻿(optional) attr ﻿(optional)
//     noptr-declarator ( parameter-list ) cv ﻿(optional) ref ﻿ ﻿(optional) except ﻿(optional) attr ﻿(optional)

// return_type identifier ( params (aka formal params) )
// {
//     // return / nothing accourding to the return type
// }

// params can be args1, arg2, ... (including ellips)
// can be passed by refference or copy
