#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::cout, std::cin, std::endl, std::getline, std::string;

int main() {
    cout << "Please enter your full name: " << endl;
    string name;
    getline(cin, name);

    string msg = GreetingUtils::create_message(name);
    char* c_string = GreetingUtils::format_as_c_string(msg);

    cout << c_string << endl;
    delete[] c_string;
    return 0;
}
