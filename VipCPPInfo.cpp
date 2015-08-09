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

#include "VipCPPInfo.h"

void CPP::DisplayOtherInfo() const
{
	cout << std::setiosflags(std::ios::left)<<endl;
	cout << setw(15) << "Point info: " << setw(35) << point << endl;
	cout << setw(15) << "ACM number: " << setw(35) << ACM << endl;
	cout << setw(15) << "Book number: " << setw(35) << book << endl;
}

void CPP::StoreInfo(std::ostream& os) const
{
	Vip::StoreInfo(os);
	os<<point<<endl;
	os<<ACM<<endl;
	os<<book<<endl;
}

void CPP::LoadInfo(std::ifstream& is)
{
	Vip::LoadInfo(is);

	std::getline(is, point, '\n');
	cout << "Point info:" << point << endl;

	is >> ACM;
	is.get();
	cout << "ACM number:" << ACM << endl;

	is >> book;
	is.get();
	cout << "Book number:" << book << endl;
}

void CPP::Init()
{
	Vip::Init();

	string strPoint;
	int nACM;
	int nBook;
	int flag;

	flag = 1;
	while(flag)
	{
		cout << "Please input string: " << endl;
		cin >> strPoint;

		if(strPoint.length() >= 1000)
		{
			cout << "The length is greater than 1000, please input again: " << endl;
			continue;
		}
		flag = 0;
	}

	point = strPoint;

	flag = 1;
	while(flag)
	{
		cout << "Please input ACM number(integer): " << endl;
		cin >> nACM;

		if(nACM < 0)
		{
			cout << "It need greater than 0, input again: " << endl;
			continue;
		}
		flag = 0;
	}

	ACM = nACM;

	flag = 1;
	while(flag)
	{
		cout << "Please input book number(integer): " << endl;
		cin >> nBook;

		if(nBook < 0)
		{
			cout << "It need greater than 0, input again: " << endl;
			continue;
		}
		flag = 0;
	}

	book = nBook;
}
