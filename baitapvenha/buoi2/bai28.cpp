#include <iostream>
#include<math.h>
#include<cstring>
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
		long long int n; cin >> n;
		for (int i = 2; i <= n; i++)
		{
			if (snt(i) && snt(n - i)) {
				cout << i << " " << n - i;
				break;
			}
		}
		cout << endl;
	}
}