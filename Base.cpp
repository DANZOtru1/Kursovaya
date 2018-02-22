#include "MyForm.h"
#include "Base.h"

int Base::Result(int b1, int b2, int b3, int b4, int b5, int b6, int b7, int b8, int b9, int draw, int d, System::String^ Name1, System::String^ Name2, bool c1) {
	if ((b1 == b2 && b2 == b3 && b3 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b1 == b2 && b2 == b3 && b3 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b1 == b5 && b5 == b9 && b9 == 1) && (c1 == true)) {
		c1 = false;
		d += 1;
		return 1;
	}
	else if ((b1 == b5 && b5 == b9 && b9 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b1 == b4 && b4 == b7 && b7 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b1 == b4 && b4 == b7 && b7 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b2 == b5 && b5 == b8 && b8 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b2 == b5 && b5 == b8 && b8 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b3 == b5 && b5 == b7 && b7 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b3 == b5 && b5 == b7 && b7 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b3 == b6 && b6 == b9 && b9 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b3 == b6 && b6 == b9 && b9 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b4 == b5 && b5 == b6 && b6 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b4 == b5 && b5 == b6 && b6 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((b7 == b8 && b8 == b9 && b9 == 1) && (c1 == true)) {
		c1 = false;
		return 1;
	}
	else if ((b7 == b8 && b8 == b9 && b9 == 2) && (c1 == true)) {
		c1 = false;
		return 2;
	}
	if ((draw == 9) && (c1 == true)) {
		return 0;
	}
	return -1;
}