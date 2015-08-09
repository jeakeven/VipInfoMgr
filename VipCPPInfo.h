#include "Vip.h"

#ifndef VIPCPPINFO_H_H_H
#define VIPCPPINFO_H_H_H

class CPP : public Vip
{
public:
	virtual void DisplayOtherInfo()	const;
	virtual void StoreInfo(std::ostream& os) const;
	virtual void LoadInfo(std::ifstream& is);
	virtual void Init();

private:
	string point;
	int ACM;
	int book;
};

#endif
