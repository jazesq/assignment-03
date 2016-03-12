#ifndef FIB_H
#define FIB_H

namespace {

	int fib(int n)
	{
		if (n < 0)
		{
			throw "Invalid n";
		}
		// base case
		if (n == 1) { return 1; }
		if (n == 2) { return 2; }

		//recusive case
		else {
			return fib(n - 1) + (fib(n - 2));
		}

	}

	int fib_iter(int n)
	{
		if (n < 0)
		{
			throw "invalid N";
		}
		if (n == 1)
		{
			return 1;
		}
		if (n == 2)
		{
			return 2;
		}
		while (n > 0) {
			return fib_iter(n - 1) + (fib_iter(n - 2));
			break;
		}
	}
}
#endif
