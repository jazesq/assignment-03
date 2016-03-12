#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace
{
	int triangle(int n)
	{
		if (n == 0) throw "Invalid N";
		//base case
		if (n == 1) return 1;

		//recoursive case
		return n*(n + 1) / 2;
	}

	int triangle_iter(int n)
	{
		while (n >= 1)
		{
			return n*(n + 1) / 2;
		}


	}
}
#endif
