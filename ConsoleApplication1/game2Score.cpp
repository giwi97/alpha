#include "game2Score.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>


using namespace std;



game2Score::game2Score() {


}

void game2Score::displayGame2Score() {

	ifstream file("data.txt");
	string line;
	int first_time = 1;

	int min = 0;
	int time;
	int no;
	int marks;
	int tot = 0;
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

				no = stoi(column_value);

				// Get the Player_Name.
				getline(iss, column_value, '\t');

				// Get the Batch_No.
				getline(iss, column_value, '\t');

				// Get the Game1_Score.
				getline(iss, column_value, '\t');

				getline(iss, column_value, '\t');

				time = stoi(column_value);

				if (no < 1016) {
					min = time;
					if (min == 30) {
						marks = 80;
					}
					else if (min < 30) {

						marks = 80 + ((30 - min) * 3);
					}
					else if (min > 30) {

						marks = 80 - ((min - 30) * 2);
					}


					minLine = line;

					cout << minLine << "\t" << marks << endl;
				}
			}
		}
	file.close();

	

	system("pause");

}

game2Score::~game2Score(){


}