// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"stdlib.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include"Login.h"
#include"Menu.h"
#include"Details.h"
#include"game1.h"
#include"game2.h"
#include"game2Score.h"
#include<stdlib.h>


using namespace std;





int main()
{
	int num;
	Login l;
	Menu *m;
	Details det;
	game1 g1;
	game2 g2;
	game2Score sc;
	

	l.loginUser();
	
	m = new Menu;

	cout << "Please select number \n \n \n";

	m->displayMainMenu();
	cout << endl;

	cin >> num;

	do {

		if (num == 1) {

			det.gameDetails();

			break;
		}
		else if (num == 2) {

			g1.displayGame1Winners();


			break;

		}
		else if (num == 3) {

			g2.displayGame2Winner();

			break;

		}
		else if (num == 4) {

			sc.displayGame2Score();

			break;

		}







	} while (num != 8);

	


    

	system("pause");
}




