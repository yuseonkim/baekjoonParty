#pragma once

class Table {
public:
    Table();
    Table(const Table& tbl);
    Table(int size);
    virtual ~Table();
    const Table& operator=(const Table& table);
    string& operator[] (int index);
protected:
    int size;
    string* p;
};