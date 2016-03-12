#ifndef TEMPLATE_H
#define	TEMPLATE_H

namespace {
	template <class TYPE>
	void PrintSquare(TYPE data)
	{
		cout << "The number squared is: " << pow(data, 2) << endl;
	}
}
#endif
