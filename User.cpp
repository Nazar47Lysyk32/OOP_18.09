#include "User.h"
#include <string>
#include <iostream>
using namespace std;

User::User(string& username, string& password)
    : username(username), password(password) {}

bool User::checkAccount_data(string& takeUsername, string& takePassword) {
    return  username == takeUsername && password == takePassword;
}



