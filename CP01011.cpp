#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int min = 1000000000;
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				int temp = a[j] - a[i];
				if(temp < min)
				{
					min = temp;
				}
				if(temp > min)
				{
					break;
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}
