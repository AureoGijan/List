//abstract base class for the array based unordered list
#ifndef BASELIST_H
#define BESELIST_H

class baselist
{
public:
	virtual void createList() = 0;
	virtual void write() = 0;
	virtual void search(int) = 0;
	virtual void replace(int, int) = 0;
	virtual void insert(int, int) = 0;
	virtual void remove(int) = 0;
	virtual void print() const = 0;
	virtual bool listFull() = 0;
	virtual bool listEmpty() = 0;
	void setMaxSize(int);
	baselist();
	~baselist();

protected:
	int *item;
	int length;
	int maxSize;
	
};


#endif // !BASELIST_H
