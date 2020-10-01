#pragma once
#include "detail.h"
class knot :
	public detail {
protected:
	int aPotential;
public:
	void showEl() override;
	knot();
	knot(int, int);
	knot(knot&);
	~knot();
};