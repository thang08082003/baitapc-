#include<iostream>
using namespace std;

int test(int a,long long int m) {
	int sum = 0;
	for (int i = 1; i <= a; i++) 
		sum += i % m;
	if (sum == m)return 1;
return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		long long int a, m; cin >> a >> m;
		cout << test(a, m) << endl;
	}
}