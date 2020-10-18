#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main()
{
    int a, b; int count = 0;
    cin >> a >> b;
    if ((a<=0) || (b<=0))
        return 0;
    for (int i = a; i <= b; i++)
    {
        int ca3 = 0, ca6 = 0, ca9 = 0;
        string A = to_string(i); 
        int al = A.size();
        for (int j = 0; j < al; j++)
        {
           if (A[j] == '3')
                ca3++;
           else if (A[j] == '6')
                ca6++;
           else if (A[j] == '9')
                ca9++;           
        }
        if ((ca3 == ca6)&&(ca6 == ca9) && (ca3 != 0))
            count++;
        A.clear();
    }
    cout <<count;

    return 0;
}
