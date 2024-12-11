#include "stdio.h"

typedef struct Callback
{
	void (*name)(char *);
	void (*year)(int);
}Callback;

typedef struct Item
{
	Callback cb;
	int year;
	char *name;
}Item;

void print_name(char *arr)
{
	printf("\nname: %s\n",arr);
}

void print_year(int num)
{
	printf("year: %d\n",num);
}

int main()
{
	Item item;
	item.name = "sunqixiu";
	item.year = 23;
	item.cb.name = print_name;
	item.cb.year = print_year;
	item.cb.name(item.name);
	item.cb.year(item.year);
	return 0;
}
