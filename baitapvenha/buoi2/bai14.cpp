#include<iostream>;
#include<math.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		long long int n; cin >> n;
		int x = 0;
		while (n % 2 == 0) {
			x++; n /= 2;
		}
		if(x)
		cout << 2 << " " << x << " ";
		long long int i = 3;
		while (i <= sqrt(n)) {
			int a = 0;
			while (n % i == 0) {
				a++;
				n /= i;
			}
			if(a>0)
			cout << i << " " << a << " ";
			i += 2;
		}
		if (n > 2)
			cout << n<<" "<<1;
		cout << endl;
	}
}