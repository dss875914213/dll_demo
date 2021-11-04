#include "test.h"

__declspec(dllexport)  int Add(int a, int b)
{
	return a + b;
}

__declspec(dllexport)  int Min(int a, int b)
{
	return a > b ? b : a;
}

