// UVA_practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

typedef	struct phonebook
{
	char *name;
	phonebook *next;
	phonebook *prev;
} phonebook;

void clear_phonebook();
void initialize_phonebook();
void add_to_phonebook(const char *data);
int new_node_position();
phonebook* get_node(const char *data);

int Strlen(const char* data);

int phonebook_size;


int main()
{
	for (int tc = 0; tc < 5; tc++)
	{
		initialize_phonebook();

		add_to_phonebook("Rahul");
		add_to_phonebook("Avnish");
		add_to_phonebook("Saurabh");
		add_to_phonebook("Pnakaj");
		add_to_phonebook("Amit");
	}
    std::cout << "Hello World!\n"; 
}

void clear_phonebook()
{

}

void initialize_phonebook()
{
	phonebook_size = 0;
	clear_phonebook();
}

void add_to_phonebook(const char *data)
{
	phonebook *new_node = get_node(data);
}

int new_node_position()
{

	return 0;
}

phonebook* get_node(const char *data)
{
	phonebook *pb = new phonebook;
	char* name = new char[10];
	int len = Strlen(data);

	for (int i = 0; i < len; i++)
		name[i] = data[i];

	pb->next = NULL;
	pb->prev = NULL;

	return pb;
}

int Strlen(const char* data)
{
	return 0;
}