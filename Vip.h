#ifndef VIP_H_H_H
#define VIP_H_H_H

#include <cstring>

using std::string;

const int MAX_NUMBER=7;
const int MAX_STUDENTID=10;
const int MAX_PHONE=11;
const int MAX_IDCARD=18;
const int MAX_QQ=10;
const int MIN_QQ=5;

class Vip
{
public:

	string GetNumber() const
	{
		return number;
	}

	string GetName() const
	{
		return name;
	}

	string GetSex() const
	{
		return sex;
	}

	string GetMajor() const
	{
		return major;
	}

	string GetStudentId() const
	{
		return studentId;
	}

	string GetPhone() const
	{
		return phone;
	}

	string GetIdCard() const
	{
		return idCard;
	}

	string GetQQ() const
	{
		return qq;
	}

	string GetMail() const
	{
		return mail;
	}

	string GetParentName() const
	{
		return parentName;
	}

	string GetParentPhone() const
	{
		return parentPhone;
	}

	string GetAddress() const
	{
		return address;
	}

	string GetSpecial() const
	{
		return special;
	}

	string GetDirect() const
	{
		return direct;
	}

	string GetContent() const
	{
		return content;
	}

	string GetPlan() const
	{
		return plan;
	}

	void SetNumber();
	void SetName();
	void SetSex();
	void SetMajor();
	void SetStudentId();
	void SetPhone();
	void SetIdCard();
	void SetQQ();
	void SetMail();
	void SetParentName();
	void SetParentPhone();
	void SetAddress();
	void SetSpecial();
	void SetDirect();
	void SetContent();
	void SetPlan();

	void DisplayInfo() const;
	bool ValidInfo(const string& info, bool isString = true);

	virtual void StoreInfo(std::ostream& os) const;
	virtual void LoadInfo(std::ifstream& is);
	virtual void Init();
	virtual void DisplayOtherInfo()	const = 0;

private:
	string number;
	string name;
	string sex;
	string major;
	string studentId;
	string phone;
	string idCard;
	string qq;
	string mail;
	string parentName;
	string parentPhone;
	string address;
	string special;
	string direct;
	string content;
	string plan;
};

#endif