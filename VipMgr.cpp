#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <deque>
#include <fstream>

#include "VipMgr.h"
#include "Except.h"

using namespace std;

extern deque<Vip*> vip;
extern Vip* pVip;



/**************************************************
*
*                DISPLAY MENU INFO
*
***************************************************/
void DisplayInfoMenu()
{
	int choise = 0;
	do
	{
        cout << endl;
        cout << "********************************************************" <<endl;
        cout << "*                     Display menu                     *" <<endl;
        cout << "*------------------------------------------------------*" <<endl;
        cout << "*               1.Display   all      vip               *" <<endl;
        cout << "*               2.Display   C++      vip               *" <<endl;
        cout << "*               3.Display   JAVA     vip               *" <<endl;
        cout << "*               4.Display   WEB      vip               *" <<endl;
        cout << "*               5.Display   ARM      vip               *" <<endl;
        cout << "*               6.Exit                                 *" <<endl;
        cout << "********************************************************" <<endl;
		cout << endl;

		cout << "Please input choise(1 ~ 6): ";
		cin >> choise;
		switch (choise)
		{
		case 1:
			DisplayAll();
			break;
		case 2:
			DisplayCpp();
			break;
		case 3:
			DisplayJava();
			break;
		case 4:
			DisplayWeb();
			break;
		case 5:
			DisplayArm();
			break;
		case 6:
			cout<<endl;
			cout << "*******************************************"<<endl;
			cout << "*             Back to menu...             *"<<endl;
			cout << "*******************************************"<<endl;
			cout<<endl;
			break;
		default:
			cout<<"Invalid option!"<<endl;
			break;
		}
	} while (choise != 6);
}

void DisplayAll()
{
	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*               Display   all    vip               *" << endl;
	cout << "****************************************************" << endl;
	cout << endl;

    if(vip.empty())
    {
    	cout << endl;
		cout << " There is no vip info." <<endl;
       	cout << endl;
    }

	for(int i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];

		cout << endl;
        cout << "****************************************************" << endl;
		cout << "*                  Press enter key                 *" <<endl;
		cout << "****************************************************" <<endl;
		cin.get();
		pVip->DisplayInfo();
		pVip->DisplayOtherInfo();
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
	cout << endl;
}

void DisplayCpp()
{
	size_t i;
	cin.get();
	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*               Display   C++    vip               *" << endl;
	cout << "****************************************************" << endl;
	cout << endl;

    if(vip.empty())
    {
    	cout << endl;
		cout << " There is no C++ vip info." <<endl;
       	cout << endl;
    }


	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];

		if(typeid(*pVip) == typeid(CPP))
		{
            cout << endl;
            cout << "****************************************************" << endl;
            cout << "*                  Press enter key                 *" << endl;
            cout << "****************************************************" << endl;
            cin.get();
			cout<<endl;

			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();
		}
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
	cout<<endl;
}

void DisplayJava()
{
	size_t i;
	cin.get();
	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*               Display   JAVA    vip               *" << endl;
	cout << "****************************************************" << endl;
    cout << endl;

    if(vip.empty())
    {
    	cout << endl;
		cout << " There is no JAVA vip info." <<endl;
       	cout << endl;
    }

	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];

		if(typeid(*pVip) == typeid(Java))
		{
            cout << endl;
            cout << "****************************************************" << endl;
            cout << "*                  Press enter key                 *" << endl;
            cout << "****************************************************" << endl;
            cin.get();
			cout<<endl;

			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();
		}
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
	cout<<endl;
}

void DisplayWeb()
{
	size_t i;
	cin.get();
	cout <<endl;
	cout << "****************************************************" << endl;
	cout << "*               Display   WEB    vip               *" << endl;
	cout << "****************************************************" << endl;
    cout << endl;

    if(vip.empty())
    {
    	cout << endl;
		cout << " There is no WEB vip info." <<endl;
       	cout << endl;
    }

	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];

		if(typeid(*pVip) == typeid(Web))
		{
            cout << endl;
            cout << "****************************************************" << endl;
            cout << "*                  Press enter key                 *" << endl;
            cout << "****************************************************" << endl;
            cin.get();
			cout<<endl;

			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();
		}
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
	cout<<endl;
}

void DisplayArm()
{
	size_t i;
	cin.get();
	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*               Display   ARM    vip               *" << endl;
	cout << "****************************************************" << endl;
    cout << endl;

    if(vip.empty())
    {
    	cout << endl;
		cout << " There is no ARM vip info." <<endl;
       	cout << endl;
    }

	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];

		if(typeid(*pVip) == typeid(Arm))
		{
            cout << endl;
            cout << "****************************************************" << endl;
            cout << "*                  Press enter key                 *" << endl;
            cout << "****************************************************" << endl;
            cin.get();
			cout<<endl;

			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();
		}
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
	cout<<endl;
}



/**************************************************
*
*                ADD MENU INFO
*
***************************************************/
void AddInfoMenu()
{
	int choise=0;
	do
	{
        cout << endl;
        cout << "********************************************************" <<endl;
        cout << "*                       Add menu                       *" <<endl;
        cout << "*------------------------------------------------------*" <<endl;
        cout << "*                   1.Add    C++     vip               *" <<endl;
        cout << "*                   2.Add    JAVA    vip               *" <<endl;
        cout << "*                   3.Add    WEB     vip               *" <<endl;
        cout << "*                   4.Add    ARM     vip               *" <<endl;
        cout << "*                   5.Exit                             *" <<endl;
        cout << "********************************************************" <<endl;
		cout << endl;

		cout << "Please input choise(1 ~ 5): ";
		cin >> choise;
		switch (choise)
		{
		case 1:
			AddCpp();
			break;
		case 2:
			AddJava();
			break;
		case 3:
			AddWeb();
			break;
		case 4:
			AddArm();
			break;
		case 5:
			cout << endl;
            cout << "********************************************************" <<endl;
			cout << "*                   Back to menu...                    *" << endl;
            cout << "********************************************************" <<endl;
			cout<<endl;
			break;
		default:
			cout<<"Invalid option!"<<endl;
			break;
		}
	} while (choise != 5);
}

void AddCpp()
{
	cin.get();
	cout << endl;
    cout << "********************************************************" << endl;
	cout << "*                  Add      C++      vip               *" << endl;
    cout << "********************************************************" << endl;
	cout << endl;

	try
	{
		CPP* newCpp = new CPP();

		if(!newCpp)
			throw new Except("Add C++ vip failed!");

		newCpp->Init();
		cin.get();
		vip.push_back(newCpp);

	}
	catch (Except* pEx)
	{
		cout<<endl;
        cout << "********************************************************" << endl;
		cout << "*              It appear error as below :              *" << endl;
		cout << "*              pEx->what()                             *" << endl;
        cout << "********************************************************" << endl;
		cout<<endl;
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();

}

void AddJava()
{
	cin.get();
	cout <<endl;
    cout << "********************************************************" << endl;
	cout << "*                  Add      JAVA      vip              *" << endl;
    cout << "********************************************************" << endl;
	cout << endl;

	try
	{
		Java* newJava = new Java();

		if(!newJava)
			throw new Except("Add JAVA vip failed!");

		newJava->Init();
		cin.get();
		vip.push_back(newJava);

	}
	catch (Except* pEx)
	{
		cout<<endl;
        cout << "********************************************************" << endl;
		cout << "*              It appear error as below :              *" << endl;
		cout << "*              pEx->what()                             *" << endl;
        cout << "********************************************************" << endl;
		cout<<endl;
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();
}

void AddWeb()
{
	cin.get();
	cout << endl;
    cout << "********************************************************" << endl;
	cout << "*                  Add      WEB      vip               *" << endl;
    cout << "********************************************************" << endl;
	cout << endl;

	try
	{
		Web* newWeb = new Web();

		if(!newWeb)
			throw new Except("Add WEB vip failed!");

		newWeb->Init();
		cin.get();
		vip.push_back(newWeb);

	}
	catch (Except* pEx)
	{
		cout<<endl;
        cout << "********************************************************" << endl;
		cout << "*              It appear error as below :              *" << endl;
		cout << "*              pEx->what()                             *" << endl;
        cout << "********************************************************" << endl;
		cout<<endl;
    }

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();

}

void AddArm()
{
	cin.get();
	cout << endl;
    cout << "********************************************************" << endl;
	cout << "*                  Add      ARM      vip               *" << endl;
    cout << "********************************************************" << endl;
	cout << endl;

	try
	{
		Arm* newArm = new Arm();

		if(!newArm)
			throw new Except("Add ARM vip failed!");

		newArm->Init();
		cin.get();
		vip.push_back(newArm);

	}
	catch (Except* pEx)
	{
		cout<<endl;
        cout << "********************************************************" << endl;
		cout << "*              It appear error as below :              *" << endl;
		cout << "*              pEx->what()                             *" << endl;
        cout << "********************************************************" << endl;
		cout<<endl;
	}

	cout << endl;
	cout << "****************************************************" << endl;
	cout << "*            Press ENTER to back to menu           *" << endl;
	cout << "****************************************************" << endl;
	cin.get();

}




/**************************************************
*
*                DELETE MENU INFO
*
***************************************************/
void DeleteInfoMenu()
{
	int choise=0;
	do
	{
        cout << endl;
	    cout << "********************************************************" <<endl;
        cout << "*                      Delete Menu                     *" <<endl;
        cout << "*------------------------------------------------------*" <<endl;
        cout << "*                   1. Delete vip by number            *" <<endl;
        cout << "*                   2. Delete all vip                  *" <<endl;
        cout << "*                   3. Exit                            *" <<endl;
        cout << "********************************************************" <<endl;
		cout << endl;

		cout<<"Please input choise(1 ~ 3): ";
		cin>>choise;
		switch (choise)
		{
		case 1:
			DeleteVip();
			break;
		case 2:
			DeleteAll();
			break;
		case 3:
			cout<<endl;
            cout << "********************************************************" <<endl;
            cout << "*                  Back to menu...                     *" <<endl;
            cout << "********************************************************" <<endl;
			cout<<endl;
			break;
		default:
			cout<<"Invild option!"<<endl;
			break;
		}
	} while(choise!=3);
}

void DeleteAll()
{
	cin.get();
    cout << "********************************************************" <<endl;
    cout << "*         Delete all vip, please wait...               *" <<endl;
    cout << "********************************************************" <<endl;
	cout <<endl;

	vip.clear();

	cout <<endl;
    cout << "********************************************************" <<endl;
    cout << "*           All vips has been deleted...               *" <<endl;
    cout << "********************************************************" <<endl;
}

void DeleteVip()
{
	cin.get();
	size_t i;
	string studentId;
	cout << endl;
    cout << "********************************************************" <<endl;
    cout << "*              Delete vip by number...                 *" <<endl;
    cout << "********************************************************" <<endl;

	cout << "Please input student Id(string): ";
	cin >> studentId;
	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];
		if(0 == studentId.compare(pVip->GetStudentId()))
		{
			cout << endl;
			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();

			pVip = 0;
			vip.erase(vip.begin() + i);
            cout << "********************************************************" <<endl;
            cout << "*                Finished to delete...                 *" <<endl;
            cout << "********************************************************" <<endl;
			return;
		}
	}
    cout << "********************************************************" <<endl;
    cout << "*                  Can't find vip...                   *" <<endl;
    cout << "********************************************************" <<endl;
}



/**************************************************
*
*                SEARCH MENU INFO
*
***************************************************/
void SearchInfoMenu()
{
	string studentId;
	char c;
	do
	{
		cout << endl;
        cout << "********************************************************" <<endl;
        cout << "*              Find vip by number...                   *" <<endl;
        cout << "********************************************************" <<endl;

		cout<<"Please input student ID(string): ";
		cin>>studentId;
		SearchVip(studentId);
		cout<<endl;
		cout<<"Continue [Y/N]";
		cin >> c;
		c = static_cast<char>(toupper(c));
	} while (c != 'N');
}

void SearchVip(const string& studentId)
{
	size_t i;

	for(i = 0; i < vip.size(); i++)
	{
		pVip = vip[i];
		if(0 == studentId.compare(pVip->GetStudentId()))
		{
			cout << endl;
			pVip->DisplayInfo();
			pVip->DisplayOtherInfo();
			return;
		}
	}
    cout << "********************************************************" <<endl;
    cout << "*                 Can't find vip...                    *" <<endl;
    cout << "********************************************************" <<endl;
}

void LoadInfo()
{
	int i,count;
	string fileName;
	string temp;

	cout<<"Please input file name (string): "<<endl;
	cin>>fileName;

	if(fileName.find(".") != string::npos)
	{
		cout<<"can't include '.' !!! "<<endl;
		return;
	}

	fileName += ".vip";

	ifstream inputFile(fileName.c_str());

	if(!inputFile.good())
	{
		cout<<"Can't open file!	"<<endl;
		return;
	}

	getline(inputFile,temp,'\n');

	if(temp!="vim info")
	{
		cout<<"Position error!"<<endl;
		return;
	}

	inputFile>>count;
	cout<<endl;
	cout<<"Include "<<count<<" vip. "<<endl;

	for(i=0;i<count;i++)
	{
		ws(inputFile);

		getline(inputFile,temp,'\n');
		if("_CPP" == temp)
		{
			cout<<" CPP "<<endl;
			pVip=new CPP();
		}
		else
		{
			cout<<"!!! file type error!!!"<<endl;
			return;
		}

		pVip->LoadInfo(inputFile);

		vip.push_back(pVip);
	}

}

void StoreInfo()
{
	size_t i;
	string fileName;

	if(0 == vip.size())
	{
		cout << "No info to store!" << endl;
		return;
	}

	cout << "Please input file name: " << endl;
	cin >> fileName;

	if(fileName.find(".") != string::npos)
	{
		cout<<"Can't include '.' !!!"<<endl;
		return;
	}

	fileName += ".vip";

	ofstream outFile(fileName.c_str());

	if(!outFile.good())
	{
		cout<<"Can't open file!"<<endl;
		return;
	}

	outFile<<"vip info"<<endl;
	outFile<<vip.size()<<endl;

	for(i = 0; i < vip.size(); i++)
	{
		pVip=vip[i];

		if(typeid(*pVip) == typeid(CPP))
			outFile<<"_CPP"<<endl;

		pVip->StoreInfo(outFile);
	}

	outFile.close();
}
