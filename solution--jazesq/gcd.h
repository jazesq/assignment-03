#ifndef GCD_H
#define GCD_H

namespace {

	int gcd(int a, int b)
	{
		// base case
		if (a == 0) return b;
		if (b == 0) return a;
		// recusive case
		if (a > b)
		{
			return gcd(a - b, b);
		}
		else
		{ return gcd(a, b - a); }
	}

	int gcd_iter(int a, int b)
	{
		while (a > b)
		{
			return gcd_iter(a, b - a);
		}
	}
}
#endif
