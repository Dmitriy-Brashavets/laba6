#pragma once
#include "machanism.h"
class prduct :
	public machanism {
protected:
	string aQuality;
public:
	void showEl() override;
	prduct();
	prduct(int, bool, string);
	prduct(prduct&);
	~prduct();
};