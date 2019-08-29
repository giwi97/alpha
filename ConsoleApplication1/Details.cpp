#include "Details.h"
#include<iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

Details::Details() {

}



void Details::gameDetails()
{

	ifstream in("GameZoneResults.txt");
	stringstream buffer;
	buffer << in.rdbuf();
	string test = buffer.str();
	cout << test << endl << std::endl;


	system("pause");

}
Details::~Details() {


}
