//
// Created by thabo on 19.04.2023.
//

#include "generate_password.h"
#include "time.h"

using namespace std;

generate_password::generate_password() {

}

int generate_password::generate_random_number() {
    srand(time(nullptr));
    int number  = rand() % (126-33+1) + 33; //(max -min +1)+min
    return number;
}

char generate_password::convert_number_to_asci(int num) {
    char asci_value  = static_cast<char>(num);
    return asci_value;
}

string generate_password::print_password() {
    const int counter = 8;
    string password ="";

    for (int i = 0; i < counter; ++i) {
        password = password + convert_number_to_asci(generate_random_number());
    }

    return password;
}
