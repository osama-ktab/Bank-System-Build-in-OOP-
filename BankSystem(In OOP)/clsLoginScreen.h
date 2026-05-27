#pragma once
#include <iostream>
#include "clsScreen.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Globale.h"

class clsLoginScreen :protected clsScreen
{

private:

	static  bool _Login()
	{
		bool LoginFaild = false;

		string Username, Password;

		short FailedLoginCount = 0;

			do
			{


				if (LoginFaild)
				{

					FailedLoginCount++;
					cout << "\nInvlaid Username/Password!\n\n";
					cout << "You have " << 3 - FailedLoginCount << " attempts left before the system is locked!\n\n";
				}

				if (FailedLoginCount == 3)
				{
					cout << "System Locked! Contact your Admin.\n\n";
					return false;
				}


				cout << "Enter Username? ";
				cin >> Username;

				cout << "Enter Password? ";
				cin >> Password;

				CurrentUser = clsUser::Find(Username, Password);

				LoginFaild = CurrentUser.IsEmpty();


			} while (LoginFaild ) ;

			CurrentUser.RegisterLogIn();
			clsMainScreen::ShowMainMenue();

		

	}

public:

	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t  Login Screen");
		return _Login();

	}

};


