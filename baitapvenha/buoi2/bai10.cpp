#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int x = s.find("084");
		s.erase(x, 3);
		cout << s << endl;
	}
}