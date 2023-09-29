#pragma once

#include <string>
using namespace std;

class AuthentificationExeption
{
public:
	AuthentificationExeption(string& message);

	string& a1();

private:


	const string message;
};

