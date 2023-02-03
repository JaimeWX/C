#include <iostream>
using namespace std;

void swap_reference(int &a, int &b);

int main()
{
    int wallet1 = 300;
    int wallet2 = 500;
    swap_reference(wallet1,wallet2);
    cout << wallet1 << endl;
    cout << wallet2 << endl;
}

void swap_reference(int &a, int &b)
{
    int temp;
    temp =a;
    a = b;
    b = temp;
}