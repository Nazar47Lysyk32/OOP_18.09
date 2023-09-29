#pragma once

#include <string>
using namespace std;


class User
{

public: User(string& username, string& password);
	  bool checkAccount_data(string& takeUsername, string& takePassword);


private:

	string username;
	string password;

};
