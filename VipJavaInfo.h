#include "Vip.h"

#ifndef VIPJAVAINFO_H_H_H
#define VIPJAVAINFO_H_H_H

class Java : public Vip
{

public:
	virtual void DisplayOtherInfo()	const;
	virtual void StoreInfo(std::ostream& os) const;
	virtual void LoadInfo(std::ifstream& is);
	virtual void Init();

private:
	string opinion;
};

#endif
