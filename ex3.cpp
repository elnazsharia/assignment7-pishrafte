#include<iostream>
#include<conio.h>
using namespace std;
int binsearch(int l, int h, int x, int m[])
{
	int mid;
	if (l > h)
		return (-1);
	else
	{
		mid = (l + h) / 2;
		if (x == m[mid])
			return mid;
		else if (x < m[mid])
			return binsearch(l, mid - 1, x, m);
		else
			return binsearch(mid + 1, h, x, m);
	}
}
int main()
{
	int i, x, z, low = 0, high = 6, n[6];
	cout << "Enter the 6-numbers: " << endl;
	for (i = 0; i < 6; i++)
	{
		cout << "number " << i + 1 << " :";
		cin >> n[i];
	}
	cout << "Enter the number Search:" << endl;
	cin >> x;
	z = binsearch(low, high, x, n);
	if (z == (-1))
		cout << "Not found";
	else
		cout << "The place is :" << z + 1;
	
	_getch();
	return 0;
}
