// TemplateExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "example.h"
#include <iostream>

void Run();

int _tmain(int argc, _TCHAR* argv[])
{
    Run();
    getchar();
	return 0;
}

void Run()
{
    int i = 100;

    std::wcout << _T("origin ") << i << std::endl;
    test1(i);
    std::wcout << _T("test1(i) ") << i << std::endl;
    test3(i);

    i = 100;
    std::wcout << _T("origin ") << i << std::endl;
    test1<int&>(i);
    std::wcout << _T("test1<int&>(i) ") << i << std::endl;
    test4(i);

    const int *pi = NULL;
    test2(pi);
    // Error
    //test1(pi);
    test4(pi);

    i = 100;
    int &j = i;
    std::wcout << _T("origin ") << j << std::endl;
    test1(j);
    std::wcout << _T("test1(j) ") << i << std::endl;
    test3(j);

    const int &k = i;
    test1(k);
    // Error
    //test1<const int &>(k);
    test4(k);
    //test4<int&>(k);

    int const &l = i;
    test1(l);
}
