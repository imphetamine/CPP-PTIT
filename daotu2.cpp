#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	cin.ignore();
	while(test--)
	{
		string s;
		getline(cin, s);
		vector <string> res;
		res.clear();
		string temp = "";
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != ' ')
			{
				temp = temp + s[i];
			}
			else
			{
				res.push_back(temp);
				temp = "";
			}
		}
		res.push_back(temp);
		for(int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
