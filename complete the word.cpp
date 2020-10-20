#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	char str1[50], str2[50]; int arr[50], flag=0;
	cin >> str1 >> str2;
	for (int i = 0; i < sizeof(str1); i++)
	{
		for (int j = 0; j < sizeof(str2); j++)
		{
			if (str1[i] == str2[j])
				arr[i] = j;
			break;
		}
	}
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] > arr[i + 1])
		{cout << "0";
		break;
		}
		else
		flag++;

	} 
	cout << "1";
	return 0;
}
