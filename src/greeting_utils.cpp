#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::string;

string GreetingUtils::create_message(const string& name) {
    return "Hello, " + name + "!";
}

char* GreetingUtils::format_as_c_string(const string& msg) {
    char* char_array = new char[msg.length() + 1];
    for (size_t i = 0; i < msg.length(); ++i) {
        char_array[i] = msg[i];
    }
    char_array[msg.length()] = '\0';
    return char_array;
}
