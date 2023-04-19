//
// Created by thabo on 19.04.2023.
//

#ifndef CODEWARS_GENERATE_PASSWORD_H
#define CODEWARS_GENERATE_PASSWORD_H

#include "string"
#include <iostream>

using namespace std;

class generate_password {

public:
    generate_password();
    static int generate_random_number();
    static char convert_number_to_asci(int num);
    static string print_password();


};


#endif //CODEWARS_GENERATE_PASSWORD_H
