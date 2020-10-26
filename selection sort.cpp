#include <iostream>
using namespace std;

int main()
{
	int ar[10], n, pos, ele, min;
	cout << "Enter the size of the array:";
	cin >> n;
	cout << "\nEnter array elements:\n";
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	for(int i=0;i<n-1;i++)
	{
		min = ar[i];
		pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (min > ar[j])
			{
				min = ar[j];
				pos = j;
			}
		}
		if(min!=ar[i])
		{
			ele = ar[i];
			ar[i] = min;
			ar[pos] = ele;
		}
	}
	cout << "\nArray after selection sort is\n";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	return 0;
}

