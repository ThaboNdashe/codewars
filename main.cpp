#include <iostream>
#include <vector>

#include "counting_sheep.h"

#include "challenge/generate_password.h"
using namespace std;

int main() {


    string password = generate_password::print_password();

    cout<<password<<endl;

    vector<bool> arr{true, true, true, false,
                     true, true, true, true,
                     true, false, true, false,
                     true, false, false, true,
                     true, true, true, true,
                     false, false, true, true};


    counting_sheep::count_sheep(arr);
    return 0;
}
