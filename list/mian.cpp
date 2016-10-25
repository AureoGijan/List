//Author: Aureo Gijan
//A simple implementation of array based unordered list

#include <iostream>
#include "unordered.h"

using namespace std;

int main()
{
	int max;
	bool writing = false;
	char choice;
	unordered newList;
	int index = 0;
	int newdata = 0;


	//input maxSize: maximum size of the array
	//input datalengh: current true data written on the array
	cout << "enter max size: ";
	cin >> max;
	cout << endl;

	newList.setMaxSize(max);
	newList.createList(); //initializes the array to the maximum size

	while (writing != true) //loop status for menu based interaction
	{
		cout << "Enter the following options: " << endl;
		cout << "w -write on list" << endl;
		cout << "p -print list " << endl;
		cout << "i -insert" << endl;
		cout << "a -replace" << endl;
		cout << "b -remove" << endl;
		cout << "s -search list" << endl;
		cout << "x to exit application" << endl;

		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 'w':
			if (newList.listFull() == true)
			{
				cout << "Error: The list is full!\n" << endl;
				break;
			}
			newList.write();
			break;
		case 'p':
			if (newList.listEmpty() == true)
			{
				std::cout << "Error: The list is empty.\n" << std::endl;
				break;
			}
			newList.print();
			break;
		case 'i':
			if (newList.listEmpty() == true)
			{
				std::cout << "Error: The list is empty.\n" << std::endl;
				break;
			}
			if (newList.listFull() == true)
			{
				cout << "Error: The list is full!\n" << endl;
				break;
			}
			cout << "enter index number: ";
			cin >> index;
			cout << endl;

			cout << "enter new data: ";
			cin >> newdata;
			cout << endl;
			newList.insert(index, newdata);
			break;
		case 'a':
			if (newList.listEmpty() == true)
			{
				std::cout << "Error: The list is empty.\n" << std::endl;
				break;
			}
			cout << "enter index number: ";
			cin >> index;
			cout << endl;

			cout << "enter new data: ";
			cin >> newdata;
			cout << endl;
			newList.replace(index, newdata);
			break;
		case 'b':
			if (newList.listEmpty() == true)
			{
				std::cout << "Error: The list is empty.\n" << std::endl;
				break;
			}
			cout << "enter index number: ";
			cin >> index;
			cout << endl;
			newList.remove(index);
			break;
		case 'x':
			writing = true;
			break;
		case 's':
			if (newList.listEmpty() == true)
			{
				std::cout << "Error: The list is empty.\n" << std::endl;
				break;
			}
			cout << "enter data: ";
			cin >> newdata;
			cout << endl;
			newList.search(newdata);
			break;
		default:
			cout << "invalid input: Try Again!" << endl;
		}
	}

	return 0;
}