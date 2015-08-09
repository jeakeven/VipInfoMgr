#include "Vip.h"

#ifndef VIPWEBINFO_H_H_H
#define VIPWEBINFO_H_H_H

class Web : public Vip
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
