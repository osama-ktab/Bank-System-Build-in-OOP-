#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"


class clsDeleteClientScreen : protected clsScreen
{

    static void _PrintClient(clsBankClient Client)
    {
        cout << "\nClient Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << Client.FirstName;
        cout << "\nLastName    : " << Client.LastName;
        cout << "\nFull Name   : " << Client.FullName();
        cout << "\nEmail       : " << Client.Email;
        cout << "\nPhone       : " << Client.Phone;
        cout << "\nAcc. Number : " << Client.AccountNumber();
        cout << "\nPassword    : " << Client.PinCode;
        cout << "\nBalance     : " << Client.AccountBalance;
		cout << "\n___________________\n";
    }
public:
    static void ShowDeleteClientScreen()
    {
		if (!CheckAccessRights(clsUser::enPermissions::pDeleteClient))
		{
			return;
		}

		_DrawScreenHeader("\tDelete Client Screen");

        string AccountNumber = "";
        cout << "Pleace Enter Account Number : ";
        AccountNumber = clsInputValidate::ReadString();
        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << "\nAccountNumber is not Found, Choose another one: ";
            AccountNumber = clsInputValidate::ReadString();
        }
        clsBankClient Client1 = clsBankClient::Find(AccountNumber);
        Client1.Print();

        cout << "\nAre you sure you want to delete this client y/n?";

        char Ansewr = 'n';
        cin >> Ansewr;

        if (Ansewr == 'y' || Ansewr == 'Y')
        {
            if (Client1.Delete())
            {
                cout << "\nClient Deleted Successfully :-) \n";

                Client1.Print();
            }
            else
            {
                cout << "\nError Client Was Not Deleted\n";
            }
        }

    }

};

