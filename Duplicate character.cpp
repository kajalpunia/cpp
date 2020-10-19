#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
	string str; int count = 0,flag=0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = i + 1; j <= str.size(); j++)
		{
			if(str[i]==str[j])
			{
				flag++;
				str.erase(str.begin() + j);
			}
			
		}
		if (flag>0)
			count++;
		flag = 0;
	}
	cout << count;

	return 0;
}
