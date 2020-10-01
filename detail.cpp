#include "detail.h"

using std::string;
using std::cout;
using std::endl;

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