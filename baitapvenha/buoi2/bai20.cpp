#include <bits/stdc++.h>
using namespace std;

int snt(int n) {
	if (n < 2)return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
		int n, m; cin >> n >> m;
		if (n > m)swap(n, m);
		for (int i = n; i <= m; i++)
			if (snt(i))cout << i << " ";
}