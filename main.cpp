// Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "detail.h"
#include "knot.h"
#include "machanism.h"
#include "prduct.h"

int main() {
	knot a(23, 45);
	machanism b(23, 0);
	prduct c(23, 1, "GOOD");
	a.add();
	b.add();
	c.add();
	detail::show();
}
