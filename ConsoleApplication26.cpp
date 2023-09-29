#include <iostream>
#include <string>
#include "User.h"
#include "AuthentificationExeption.h"

using namespace std;





int main() {
    User user("exampleUser", "examplePassword");

    string takeUsername, takePassword;
    cout << "Enter your username: ";
    cin >> takeUsername;
    cout << "Enter your password: ";
    cin >> takePassword;

    if (user.checkAccount_data(takeUsername, takePassword)) {
        cout << "Authentication successful. Welcome " << takeUsername << "!" << endl;
    }
    else {
        AuthentificationExeption authException;
        cout << ("Authentication failed: Invalid username or password.");
        cout << authException.a1() << endl;
    }

    return 0;
}