
#include <iostream>
using namespace std;
int main()
{
	int ar[10], temp, n;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "\nEnter the array elements:\n";
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n-1-j; i++)
		{
			if (ar[i] > ar[i + 1])
			{
				temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
			}
		}
	}
	cout << "\nArray after the bubble sort is:\n";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	return 0;
}

