#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>

//using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;

#include "VipJavaInfo.h"

void Java::DisplayOtherInfo() const
{
	cout << std::setiosflags(std::ios::left) << endl;
	cout << setw(15) << "Input advice(string): " << setw(35) << opinion << endl;
}

void Java::StoreInfo(std::ostream& os) const
{
	Vip::StoreInfo(os);
	os<<opinion<<endl;
}

void Java::LoadInfo(std::ifstream& is)
{
	Vip::LoadInfo(is);
	std::getline(is, opinion, '\n');
	cout << "Input advice(string): " << opinion << endl;
}

void Java::Init()
{
	Vip::Init();

	string strOpinion;
	int flag;

	flag = 1;
	while(flag)
	{
		cout << "Please input string:" << endl;
		cin >> strOpinion;

		if(strOpinion.empty())
		{
			cout << "Opinion is empty, input again!" << endl;
			continue;
		}
		flag = 0;
	}

	opinion = strOpinion;
}
