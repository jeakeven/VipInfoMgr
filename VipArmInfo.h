#include "Vip.h"

#ifndef VIPARMINFO_H_H_H
#define VIPARMINFO_H_H_H

class Arm : public Vip
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
