#include <iostream>
#include <string>
using namespace std;

#include "Table.h"
#include "TableBak.h";

int main() {
    Table t1, t2(20);
    Table t3(t2);

    t1[0] = "hello";
    t1[1] = "world";

    t3 = t1;

    cout << "t3[0] = " << t3[0] << ", t3[1] = " << t3[1] << endl;

    // Using tables with backup/restore.
    TableBak tb1, tb2(20);
    TableBak tb3(tb2);

    tb1[0] = "hello";
    tb2[1] = "world";

    tb3 = tb1;

    cout << "t3[0] = " << t3[0] << ", t3[1] = " << t3[1] << endl;

    // backup tb3!
    tb3[0] = "Nice to";
    tb3[1] = "meet you";

    cout << "tb3[0] = " << tb3[0] << ", tb3[1] = " << tb3[1] << endl;

    cout << "backup tb3" << endl;

    tb3.backup();

    // restore the backup table!
    tb3[0] = "Write this";
    tb3[1] = "with something new";

    cout << "tb3[0] = " << tb3[0] << ", tb3[1] = " << tb3[1] << endl;

    cout << "restore the backup table in tb3" << endl;
    tb3.restore();

    cout << "tb3[0] = " << tb3[0] << ", tb3[1] = " << tb3[1] << endl;

    return 0;
    
}