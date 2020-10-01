#include "prduct.h"

prduct::prduct(int size, bool performance, string quality) : aQuality(quality), machanism(size, performance) {}
prduct::prduct() : prduct(0, 0, "-") {}
prduct::prduct(prduct &obj) : prduct(obj.aSize, obj.aPerformance, obj.aQuality) {}
prduct::~prduct() {}
void prduct::showEl() {
	string perf = aPerformance ? "+" : "-";
	cout << "MECHANISM. SIZE: " << aSize << " PERFORMANCE: " << perf << " QUALITY: " << aQuality;
}

