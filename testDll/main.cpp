#include <iostream>
#include <windows.h>
#include "test.h"
using namespace std;

typedef int(*ADD)(int a, int b);
typedef int(*MIN)(int a, int b);

int main()
{
	//HMODULE hm = ::LoadLibrary(L"Project2.dll");
	//if (hm == NULL)
	//{
	//	cout << "Failed to Load Project2.dll" << endl;
	//	return 0;
	//}

	//ADD add;
	//MIN min;
	//add = (ADD)::GetProcAddress(hm, "Add");
	//if (add == NULL)
	//{
	//	cout << "Failed to Get add function" << endl;
	//	FreeLibrary(hm);
	//	return 0;
	//}
	//min = (MIN)::GetProcAddress(hm, "Min");
	//if (min == NULL)
	//{
	//	cout << "Failed to Get min function" << endl;
	//	FreeLibrary(hm);
	//	return 0;
	//}

	cout << Add(5, 2) << endl;
	cout << Min(5, 2) << endl;
}
