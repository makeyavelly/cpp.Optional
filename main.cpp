#include <iostream>
#include "Optional.h"

using namespace std;

int main()
{
    int n1 = 7;
    Optional<int> op1(n1);
    cout << op1.value() << endl;

    int n2 = 14;
    Optional<int> op2(n2);
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    op1 = 14;
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    op1 = Optional<int>::null();
    op2 = 0;
    if (!op1) {
        cout << "op1 is null" << endl;
    }
    if (op2) {
        cout << "op2 is not null" << endl;
    }
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    op2 = Optional<int>::null();
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    op1.value() = 15; // null
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    op1 = 15; // not null
    cout << op1.value() << " == " << op2.value() << " = " << (op1 == op2) << endl;

    return 0;
}
