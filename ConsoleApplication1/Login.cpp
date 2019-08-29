#include "Login.h"
#include<iostream>

using namespace std;

Login::Login(){

}

void Login::loginUser() {

	string password; string username;

	do {
		cout << "Enter Username:";
		cin >> username;

		cout << "\n";

		cout << "Enter password:";
		cin >> password;

		cout << "\n";
	} while (username != "aaa" && password != "1111");
}

Login::~Login() {

}