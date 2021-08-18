#include <iostream>
using namespace std;
void swapValues(int &, int &);
int main()
{
    int a = 4, b = 8;
    cout << a << " " << b << endl;
    swapValues(a, b);
    cout << a << " " << b << endl;
    ;
    return 0;
}
void swapValues(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}