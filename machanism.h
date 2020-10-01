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
machanism::machanism(int size, bool performance) : aPerformance(performance), detail(size) {}
machanism::machanism() : machanism(0, 0) {}
machanism::machanism(machanism &obj) : machanism(obj.aSize, obj.aPerformance) {}
machanism::~machanism() {}
void machanism::showEl() {
	string perf = aPerformance ? "+" : "-";
	cout << "MECHANISM. SIZE: " << aSize << " PERFORMANCE: " << perf;
}