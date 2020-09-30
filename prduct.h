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
prduct::prduct(int size, bool performance, string quality) : aQuality(quality), machanism(size, performance) {}
prduct::prduct() : prduct(0, 0, "-") {}
prduct::prduct(prduct &obj) : prduct(obj.aSize, obj.aPerformance, obj.aQuality) {}
prduct::~prduct() {}
void prduct::showEl() {
	string perf = aPerformance ? "+" : "-";
	cout << "MECHANISM. SIZE: " << aSize << " PERFORMANCE: " << perf << " QUALITY: " << aQuality;
}

