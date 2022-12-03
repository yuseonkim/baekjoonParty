#pragma once
// TableBak.h
#include <string>
using namespace std;
#include "Table.h"
class TableBak : public Table {
public:
	TableBak();
	TableBak(int size);
	TableBak(const TableBak& tablebak);
	~TableBak();
	const TableBak& operator=(const TableBak& tablebak);
	void backup();
	void restore();
private:
	int sizebak;
	string* pbak;
};
