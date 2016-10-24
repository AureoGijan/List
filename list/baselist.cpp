#include <iostream>
#include "baselist.h"

baselist::baselist()
{
	length = 0;
	maxSize = 0;
	std::cout << "*** BASE constructor is initialized ***" << std::endl; //test
}

void baselist::setMaxSize(int size)
{
	maxSize = size;
}

baselist::~baselist()
{
	std::cout << "*** BASE deconstructor is initialized ***" << std::endl; //test
}

