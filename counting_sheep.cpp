//
// Created by thabo on 31.03.2023.
//
#include <iostream>
#include <vector>
#include "counting_sheep.h"


using namespace std;


int counting_sheep::count_sheep(vector<bool> arr) {
    int count{0};
    for(auto sheep: arr){
        if(sheep == true)
            count++;
    }

    return count;
}
