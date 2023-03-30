#include <iostream>
#include <vector>

#include "counting_sheep.h"

using namespace std;

int main() {

    vector<bool> arr{true, true, true, false,
                     true, true, true, true,
                     true, false, true, false,
                     true, false, false, true,
                     true, true, true, true,
                     false, false, true, true};

    counting_sheep::count_sheep(arr);
    return 0;
}
