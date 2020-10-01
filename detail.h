#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

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
detail* detail::apHead = nullptr;
detail* detail::apTail = nullptr;
detail::detail(int size) : aSize(size) {}
detail::detail() : detail(0) {}
detail::detail(detail &obj) : detail(obj.aSize) {}
detail::~detail() {}
void detail::add() {
	if (!apTail) apHead = this;
	else apTail->apNext = this;
	apTail = this;
}
void detail::show() {
	detail *pCur = apHead;
	while (pCur) {
		pCur->showEl();
		cout << "\n---------------------------------------\n";
		pCur = pCur->apNext;
	}
}