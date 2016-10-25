#include <iostream>
#include "baselist.h"

baselist::baselist()
{
	length = 0;
	maxSize = 0;
}

void baselist::setMaxSize(int size)
{
	maxSize = size;
}

baselist::~baselist()
{

}

int baselist::getLength()
{
	return length;
}

