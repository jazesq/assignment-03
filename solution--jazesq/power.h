#ifndef POWER_H
#define POWER_H

namespace
{

	int pow(int b, int e)
	{
		//error check 
		if (e < 0) throw "negative exponent";

		//base case
		if (e == 0) return 1;

		//recoursive case 
		return b * pow(b, e - 1);
	}

	int pow_iter(int b, int e)
	{
		while (e > 0)
		{
			return b*pow(b, e - 1);
		}
		return 0;
	}
}
#endif
