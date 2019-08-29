#include "game2.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;



game2::game2() {


}

void game2::displayGame2Winner() {


	ifstream file("data.txt");
	string line;
	int first_time = 1;

	int min = 100;
	int time;
	string column_value;
	string minLine;

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

				getline(iss, column_value, '\t');

				time = stoi(column_value);

				if (min > time) {
					min = time;
					minLine = line;

					
				}
			}
		}
	file.close();

	cout << minLine << endl;

	system("pause");



}

game2::~game2() {


}
