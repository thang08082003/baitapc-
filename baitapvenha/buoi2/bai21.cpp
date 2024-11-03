#include <bits/stdc++.h>
using namespace std;

int snt(long long int n) {
	if (n < 2)return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		long long int n,m; cin >> n>>m;
		for (int i = n; i <= m; i++)
			if (snt(i))cout << i << " ";
		cout << endl;
	}
}