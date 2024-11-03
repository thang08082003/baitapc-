#include <bits/stdc++.h>
using namespace std;

int main() {

	
		int n; cin >> n;
		double x = 0;
		for (int i = 1; i <= n; i++)
			x += 1 * 1.0 / i;
		cout << setprecision(4) << fixed << x << endl;
	
}