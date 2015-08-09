#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <deque>

#include "Vip.h"
#include "VipMgr.h"

using namespace std;

deque<Vip*> vip;
Vip* pVip;

int main()
{
	int choise = 0;
	do
	{
		cout << endl;
		cout << "*************************************************" <<endl;
		cout << "*               NJUPT vip info                  *" <<endl;
		cout << "-------------------------------------------------" <<endl;
		cout << "*             1.Display vip info                *" <<endl;
		cout << "*             2.Add vip info                    *" <<endl;
		cout << "*             3.Delete vip info                 *" <<endl;
		cout << "*             4.Search vip info                 *" <<endl;
		cout << "*             5.Load vip info                   *" <<endl;
		cout << "*             6.Store vip info                  *" <<endl;
		cout << "*             7.Exit                            *" <<endl;
		cout << "*************************************************" <<endl;
		cout << endl;

		cout << "Please input choise : ";
		cin >> choise;
		switch (choise)
		{
		case 1:
			DisplayInfoMenu();
			break;
		case 2:
			AddInfoMenu();
			break;
		case 3:
			DeleteInfoMenu();
			break;
		case 4:
			SearchInfoMenu();
			break;
		case 5:
			LoadInfo();
			break;
		case 6:
			StoreInfo();
			break;
		case 7:
			vip.clear();
			break;
		default:
			cout << "Invalid option!" <<endl;
			break;
		}
	} while (choise != 7);

	return 0;
}
