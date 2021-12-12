#include <iostream>

using namespace std;

int fi(int n)
{
    if (n >= 2)
        return fi(n - 1) + fi(n - 2);
    else
        return 1;
}

int main()
{

    int m;
    cout << "please enter the number: ";
    cin >> m;

    cout << fi(m);
}