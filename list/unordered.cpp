#include <iostream>
#include "unordered.h"

unordered::unordered()
	:baselist()
{

}

unordered::~unordered()
{
	delete[] item;
}

bool unordered::listEmpty() //checks whether the list has no data
{
	int dataFound = 0;
	for (int i = 0; i < maxSize; i++)
	{
		if (item[i] != 0)
			return false;
	}
	return true;
}

bool unordered::listFull() //checks wether the list is full
{
	if (length == maxSize)
		return true;
	else
		return false;		
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
	if (listEmpty() == true)
	{
		std::cout << "Error: The list is empty.\n" << std::endl;
		return;
	}
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

void unordered::replace(int loc, int replacement) //replace data at a given position
{
	if (listEmpty() == true)
	{
		std::cout << "Error: The list is empty.\n" << std::endl;
		return;
	}
	item[loc-1] = replacement;
	std::cout << "List replaced!\n" << std::endl;
}

void unordered::remove(int loc) //remove data at a given position
{
	int i = loc - 1;
	if (listEmpty() == true)
	{
		std::cout << "Error: The list is empty.\n" << std::endl;
		return;
	}
	item[i] = 0;
	std::cout << "Item removed!\n" << std::endl;
	length--;
	while (i != length)
	{
		item[i] = item[i + 1];
		i++;
	}
	
}

void unordered::print() 
{
	if (listEmpty() == true)
	{
		std::cout << "Error: The list is empty.\n" << std::endl;
		return;
	}
	std::cout << listEmpty() << std::endl;
	std::cout << "**********    List    *********** " << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << "#" << i + 1 << ": " << item[i] << std::endl;
	}
	std::cout << "\n" << std::endl;
}

void unordered::write() //feed data to array, each data input adds 1 value to protected variable length
{
	if (listFull() == true)
	{
		std::cout << "Error: The list is full!\n" << std::endl;
		return;
	}
	std::cout << "Please enter data" << std::endl;
	std::cin >> item[length];
	length++;
	std::cout << "\n" << std::endl;
	std::cout << "Writing Data Succesfull!\n" << std::endl;
}

void unordered::insert(int loc, int insertData) //insert data to a specified location and move the succeeding data to higher indeces.
{
	int i = loc - 1;
	int maxlength = length;
	if (listEmpty() == true)

	{
		std::cout << "Error: The list is empty.\n" << std::endl;
		return;
	}

	if (listFull() == true)
	{
		std::cout << "Error: The list is full!\n" << std::endl;
		return;
	}

	while (maxlength != i)
	{
		item[maxlength] = item[maxlength-1];
		maxlength--;
		//std::cout << " maxlength = " << maxlength << "i = " << i << std::endl;
	}

	item[i] = insertData;
	length++;

	std::cout << " Insert Data succesfull!\n" << std::endl;
}