//derived class for unordered list
//contains non virtual methods for basic operations
//on unordered list
//methods are self explanatory
#ifndef UNORDERED_H
#define UNORDERED_H
#include "baselist.h"

class unordered: public baselist
{
public:
	void createList();
	void write();
	void search(int);
	void replace(int, int);
	void remove(int);
	void print() const;
	void insert(int, int);
	bool listFull();
	bool listEmpty();
	unordered();
	~unordered();
};

#endif // !UNORDERED_H
