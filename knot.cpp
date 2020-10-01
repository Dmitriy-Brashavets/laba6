#include "knot.h"

knot::knot(int size, int potential) : aPotential(potential), detail(size) {}
knot::knot() : knot(0, 0) {}
knot::knot(knot &obj) : knot(obj.aSize, obj.aPotential) {}
knot::~knot() {}
void knot::showEl() {
	cout << "KNOT. SIZE: " << aSize << " POTENTIAL: " << aPotential;
}