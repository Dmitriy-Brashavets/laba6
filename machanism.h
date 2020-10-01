#pragma once
#include "detail.h"

class machanism :
	public detail {
protected:
	bool aPerformance;
public:
	void showEl() override;
	machanism();
	machanism(int, bool);
	machanism(machanism&);
	~machanism();
};