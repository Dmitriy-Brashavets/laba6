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
knot::knot(int size, int potential) : aPotential(potential), detail(size) {}
knot::knot() : knot(0, 0) {}
knot::knot(knot &obj) : knot(obj.aSize, obj.aPotential) {}
knot::~knot() {}
void knot::showEl() {
	cout << "KNOT. SIZE: " << aSize << " POTENTIAL: " << aPotential;
}