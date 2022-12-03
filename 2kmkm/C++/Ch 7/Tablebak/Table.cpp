// Table.cpp
#include <string>
using namespace std;

#include "Table.h"

Table::Table() : Table(10) { // 디폴트 크기 10
}

Table::Table(int size) {
	this->size = size;
	this->p = new string[this->size];
}

Table::Table(const Table& table) {
	this->size = table.size;
	this->p = new string[this->size];
	for (int i = 0; i < this->size; i++)
		this->p[i] = table.p[i];
}

Table::~Table() {
	delete[] p;
}

string& Table::operator[](int index) {
	return this->p[index];
}

const Table& Table::operator=(const Table& table) {
	if (this != &table) {  // this : Table*, table : Table
		this->size = table.size;
		delete[] this->p;
		this->p = new string[this->size];
		for (int i = 0; i < this->size; i++)
			this->p[i] = table.p[i];
	}
	return *this;
}
