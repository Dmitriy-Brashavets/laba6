#pragma once
#include <iostream>
#include <string>

class detail {
private:
	static detail *apHead, *apTail;
	detail *apNext = nullptr;
protected:
	int aSize;
public:
	void add();
	virtual void showEl() = 0;
	static void show();
	detail();
	detail(int);
	detail(detail&);
	~detail();
};