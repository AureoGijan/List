#include <iostream>
#include "unordered.h"

unordered::unordered()
	:baselist()
{
	std::cout << "*** DERIVED constructor is initialized ***" << std::endl; //test
}

unordered::~unordered()
{
	delete[] item;
	std::cout << "*** DERIVED deconstructor is initialized ***" << std::endl; //test
}

bool unordered::listEmpty() //checks whether the list has no data
{
	int dataFound = 0;
	for (int i = 0; i < maxSize; i++)
	{
		if (item[i] == 0)
		{ }
		else
		{
			dataFound++;
		}
	}

	if (dataFound == 0)
	{
		return true;
	}
}

bool unordered::listFull()
{

}

void unordered::createList() //initialization of the array list
{
	item = new int[maxSize];
	for (int i = 0; i < maxSize; i++)
		item[i] = 0;
}

void unordered::search(int query) 
{
	bool found = false;
	for (int i = 0; i < maxSize; i++)
	{
		if (query == item[i])
		{
			std::cout << "Match found! ----> ";
			std::cout << "Index #" << i + 1 << " " << item[i] << std::endl;
			found = true;
			std::cout << "\n" << std::endl;
		}
	}
	if (found == false)
		std::cout << "No match found!\n" << std::endl;
}

void unordered::replace(int loc, int replacement) //replace data at a gevin position
{
	item[loc-1] = replacement;
	std::cout << "List replaced!\n" << std::endl;
}

void unordered::remove(int loc) //remove data at a given position
{
	item[loc-1] = 0;
	std::cout << "Item removed!\n" << std::endl;
}

void unordered::print() const 
{
	std::cout << "**********    List    *********** " << std::endl;
	for (int i = 0; i < maxSize; i++)
	{
		std::cout << "#" << i + 1 << ": " << item[i] << std::endl;
	}
	std::cout << "\n" << std::endl;
}

void unordered::write() //feed data to array, each data input adds 1 value to protected variable length
{
	std::cout << "Please enter data" << std::endl;
	std::cin >> item[length];
	length++;
	std::cout << "\n" << std::endl;
	std::cout << "Writing Data Succesfull!\n" << std::endl;
}

void unordered::insert(int loc, int insertData) //insert data to a specified location and move the succeeding data to higher indeces.
{
	int i = loc - 1;
	for (i; i < maxSize; i++)
	{
		item[i + 1] = item[i];
	}
	item[loc] = insertData;
	std::cout << " Insert Data succesfull!\n" << std::endl;
}