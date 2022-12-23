#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" 
using namespace nsDod;
using namespace nsVar;

void nsSum::sum()
{
	n = 0;
	s = 0;
	R = 1;
	do
	{
		aa = x - 1;
		b = n + 1;
		dod();
		n++;
	} while (abs(R) >= eps);
}