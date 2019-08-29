#include "game1.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

game1::game1() {


}

void game1::displayGame1Winners() {


	ifstream file("data.txt");
	string line;
	int first_time = 1;

	int max = 0;
	int score;
	string column_value;
	string maxLine;

	if (file.is_open())
		while (getline(file, line))
		{
			if (first_time)
				first_time = 0;
			else {
				// Trim the line so that each column is seperated by only one tabular space.
				for (int i = 0; i < line.size(); i++) {
					char x = line.at(i);
					if (x == '\t')
						while (line.at(i + 1) == '\t')
							line.erase(i, 1);
				}

				istringstream iss(line);

				// Get the Player_No.
				getline(iss, column_value, '\t');

				// Get the Player_Name.
				getline(iss, column_value, '\t');

				// Get the Batch_No.
				getline(iss, column_value, '\t');

				// Get the Game1_Score.
				getline(iss, column_value, '\t');

				score = stoi(column_value);

				if (max < score) {
					max = score;
					maxLine = line;
				}
			}
		}
	file.close();

	cout << maxLine << endl;

	system("pause");



}

game1::~game1() {

}