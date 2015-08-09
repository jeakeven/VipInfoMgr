#include <cstring>
#include <string>

#ifndef EXCEPT_H_H_H
#define EXCEPT_H_H_H

class Except:public std::exception
{
private:
	string message;

public:
	Except(const string& m)
	{
		message = m;
	}
	const char* what() const throw()
	{
		return message.c_str();
	}
};

#endif
