#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>

#include "Vip.h"

//using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;

void Vip::DisplayInfo() const
{
	cout << std::setiosflags(std::ios::left)<<endl;
	cout << setw(15) <<"Vip num: "      << setw(35) << number << endl;
	cout << setw(15) <<"Name: "         << setw(35) << name << endl;
	cout << setw(15) <<"Sex: "          << setw(35) << sex << endl;
	cout << setw(15) <<"Major: "        << setw(35) << major << endl;
	cout << setw(15) <<"Student ID: "   << setw(35) << studentId << endl;
	cout << setw(15) <<"Phone: "        << setw(35) << phone << endl;
	cout << setw(15) <<"ID Card: "      << setw(35) << idCard << endl;
	cout << setw(15) <<"QQ: "           << setw(35) << qq << endl;
	cout << setw(15) <<"Mail: "         << setw(35) << mail << endl;
	cout << setw(15) <<"Parent name: "  << setw(35) << parentName << endl;
	cout << setw(15) <<"Parent Phone: " << setw(35) << parentPhone << endl;
	cout << setw(15) <<"Address: "      << setw(35) << address << endl;
	cout << setw(15) <<"Special: "      << setw(35) << special << endl;
	cout << setw(15) <<"Direct: "       << setw(35) << direct << endl;
	cout << setw(15) <<"Content: "      << setw(35) << content << endl;
	cout << setw(15) <<"Plan: "         << setw(35) << plan << endl;
}

bool Vip::ValidInfo(const string& info, bool isString)
{
	size_t i;
	if(isString)
	{
		for(i = 0; i < info.length(); i++)
			if(!isalpha(info[i]))
			{
				cout << "Note, digits in the string!" << endl;
				return false;
	        }
	}
	else
	{
		for(i = 0; i < info.length(); i++)
			if(!isdigit(info[i]))
			{
				cout << "Note, char in the digits" << endl;
				return false;
			}
	}
	return true;
}

void Vip::StoreInfo(std::ostream& os) const
{
	os<<number<<endl;
	os<<name<<endl;
	os<<sex<<endl;
	os<<major<<endl;
	os<<studentId<<endl;
	os<<phone<<endl;
	os<<idCard<<endl;
	os<<qq<<endl;
	os<<mail<<endl;
	os<<parentName<<endl;
	os<<parentPhone<<endl;
	os<<address<<endl;
	os<<special<<endl;
	os<<direct<<endl;
	os<<content<<endl;
	os<<plan<<endl;
}

void Vip::LoadInfo(std::ifstream& is)
{
	std::getline(is,number,'\n');
	cout << "Vip num: " << number << endl;

	std::getline(is,name,'\n');
	cout << "Name: " << name << endl;

	std::getline(is,sex,'\n');
	cout << "Sex: " << sex << endl;

	std::getline(is,major,'\n');
	cout << "Major: " << major << endl;

	std::getline(is,studentId,'\n');
	cout << "Student ID:" << studentId << endl;

	std::getline(is,phone,'\n');
	cout << "Phone: " << phone << endl;

	std::getline(is,idCard,'\n');
	cout << "ID Card: " << idCard << endl;

	std::getline(is,qq,'\n');
	cout << "QQ: " << qq << endl;

	std::getline(is,mail,'\n');
	cout << "Mail: " << mail << endl;

	std::getline(is,parentName,'\n');
	cout << "Parent Name: " << parentName << endl;

	std::getline(is,parentPhone,'\n');
	cout << "Parent Phone: " << parentPhone << endl;

	std::getline(is,address,'\n');
	cout << "Address: " << address << endl;

	std::getline(is,special,'\n');
	cout << "Special: " << special << endl;

	std::getline(is,direct,'\n');
	cout << "Direct: " << direct << endl;

	std::getline(is,content,'\n');
	cout << "Content: " << content << endl;

	std::getline(is,plan,'\n');
	cout << "Plan: " << plan << endl;
}

void Vip::Init()
{
	SetNumber();
	SetName();
	SetSex();
	SetMajor();
	SetStudentId();
	SetPhone();
	SetIdCard();
	SetQQ();
	SetMail();
	SetParentName();
	SetParentPhone();
	SetAddress();
	SetSpecial();
	SetDirect();
	SetContent();
	SetPlan();
}

void Vip::SetNumber()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input vip number(7 bit) : " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Vip num is empty!" << endl;
			continue;
		}
		else if(temp.length() > MAX_NUMBER)
		{
			cout << "Beyond num length!" << endl;
			continue;
		}
		else if(temp.length() != MAX_NUMBER)
		{
			cout << "shoule be 7 bit!" << endl;
			continue;
		}

		if(ValidInfo(temp, false))
			flag=0;
	}

	number=temp;
}

void Vip::SetName()
{
	string temp;

	int flag=1;
	while(flag)
	{
		cout<<"Please input name(): "<<endl;
		cin>>temp;

		if(temp.empty())
		{
			cout<<"Name is empty!"<<endl;
			continue;
		}

		flag=0;
	}

	name=temp;
}

void Vip::SetSex()
{
	string temp;
	const char *nSex1 = "male";
	const char *nSex2 = "female";
	int flag = 1;

	while(flag)
	{
		cout << "Please input sex (male or female): " << endl;
		cin >> temp;

		const char *nSex = temp.c_str();

		if(temp.empty())
		{
			cout << "Sex is empty!" << endl;
			continue;
		}
		else if(0 != strcmp(nSex, nSex1) && 0 != strcmp(nSex, nSex2))
		{
			cout << "Please input : male or female" << endl;
			continue;
		}
		flag = 0;
	}

	sex = temp;
}

void Vip::SetMajor()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input major : " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Major is empty!" << endl;
			continue;
		}

		flag = 0;
	}

	major = temp;
}

void Vip::SetStudentId()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input student ID (9 bit), Fomart like this : Z13055226 : " << endl;
		cin >> temp;

		if(temp.length() >= MAX_STUDENTID)
		{
			cout << "Beyond student ID length!" << endl;
			continue;
		}
		else if(temp.length() != 9)
		{
			cout << "ID is 9 bit, please input again!" << endl;
			continue;
		}

		if(ValidInfo(temp, false))
		{
			cout<<"Fomart like this : Z13055226, please input again!"<<endl;
			continue;
		}
		else
		{
			string ttemp = temp.substr(1, temp.length()-1);
			if(ValidInfo(ttemp, false))
				flag = 0;
		}

	}

	studentId = temp;
}

void Vip::SetPhone()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input phone (11 bit): " << endl;
		cin >> temp;

		if(temp.length() > MAX_PHONE)
		{
			cout << "Beyond phone length, please input again!" << endl;
			continue;
		}
		else if (temp.length() != MAX_PHONE)
		{
			cout<<"Phone length is not 11 !"<<endl;
			continue;
		}

		if(ValidInfo(temp, false))
			flag = 0;
	}

	phone = temp;
}

void Vip::SetIdCard()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input ID Card (18 bit): " << endl;
		cin >> temp;

		if(temp.length()>MAX_IDCARD)
		{
			cout << "Beyond max length, please input again !" << endl;
			continue;
		}
		else if (temp.length()!=MAX_IDCARD)
		{
			cout << "ID Card length is not 18!" << endl;
			continue;
		}

		if(ValidInfo(temp, false))
			flag = 0;
		else
			if(temp[temp.length()-1] == 'X')
			{
				string ttemp = temp.substr(0, temp.length()-1);
				if(ValidInfo(ttemp, false))
					flag = 0;
			}
	}

	idCard = temp;
}

void Vip::SetQQ()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input QQ (5~10 bit): " << endl;
		cin >> temp;

		if(temp.length() > MAX_QQ)
		{
			cout << "Beyond qq length(10 bit), please input again !" << endl;
			continue;
		}
		else if (temp.length() < MIN_QQ)
		{
			cout << "less than min length(5 bit), please input again !" << endl;
			continue;
		}

		if(ValidInfo(temp, false))
			flag = 0;
	}

	qq = temp;
}

void Vip::SetMail()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input mail : " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Mail is empty!" << endl;
			continue;
		}

		flag = 0;
	}

	mail = temp;
}

void Vip::SetParentName()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please parent name :" << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Parent name is empty!" << endl;
			continue;
		}

		flag = 0;
	}

	parentName = temp;
}

void Vip::SetParentPhone()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input parent phone (11 bit): " << endl;
		cin >> temp;

		if(temp.length() > MAX_PHONE)
		{
			cout << "Beyond phone length, please input again!" << endl;
			continue;
		}
		else if (temp.length() != MAX_PHONE)
		{
			cout << "Phone length is not 11!" << endl;
			continue;
		}

		if(ValidInfo(temp, false))
			flag = 0;
	}

	parentPhone = temp;
}

void Vip::SetAddress()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input address: " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Address is empty!" << endl;
			continue;
		}
		flag = 0;
	}

	address = temp;
}

void Vip::SetSpecial()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input special: " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Special is empty!" << endl;
			continue;
		}
		flag = 0;
	}

	special = temp;
}

void Vip::SetDirect()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input direct: " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Direct is empty!" << endl;
			continue;
		}
		flag = 0;
	}

	direct = temp;
}

void Vip::SetContent()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input content: " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Content is empty!" << endl;
			continue;
		}
		flag = 0;
	}

	content = temp;
}

void Vip::SetPlan()
{
	string temp;

	int flag = 1;
	while(flag)
	{
		cout << "Please input plan: " << endl;
		cin >> temp;

		if(temp.empty())
		{
			cout << "Plan is empty!" << endl;
			continue;
		}
		flag = 0;
	}

	plan = temp;
}