// TableBak.cpp
#include <string>
using namespace std;
#include "TableBak.h"

TableBak::TableBak() : TableBak(10) {
}

TableBak::TableBak(int size) : Table(size) {
    this->sizebak = 0;
    this->pbak = new string[this->sizebak];
}

TableBak::TableBak(const TableBak& tablebak) : Table(tablebak) {
    this->size = tablebak.size;
    this->p = new string[this->size];
    for (int i = 0; i < this->size; i++)
        this->p[i] = tablebak.p[i];
}

const TableBak& TableBak::operator=(const TableBak& tablebak) {
    if (this != &tablebak) {
        this->size = tablebak.size;
        delete[] this->p;
        this->p = new string[this->size];
        for (int i = 0; i < this->size; i++)
            this->p[i] = tablebak.p[i];
    }
    return *this;
}
TableBak::~TableBak() {
    delete[] p;
}

void TableBak::restore() {
    this->size = this->sizebak;
    delete[] this->p;

    this->p = new string[this->size];
    for (int i = 0; i < this->size; i++)
        this->p[i] = this->pbak[i];
}

void TableBak::backup() {
    this->sizebak = this->size;
    this->pbak = new string[this->sizebak];
    for (int i = 0; i < this->sizebak; i++)
        this->pbak[i] = this->p[i];
}
