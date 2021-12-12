  
#include <iostream>

using namespace std;

int fi(int n)
{
    if (n >= 2) {

        return fi(n - 1) + fi(n - 2);
    }
    else
    {
        return 1;
    }

}

int main()
{
   
    for (int i = 0; i < 1000; i++)
    {
        cout << fi(i) << '\n';

    }
    return 0;
}