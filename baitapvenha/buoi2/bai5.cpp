#include<iostream>
#include<iomanip>
using namespace std;

int main() {
		int n; 
        
        cin >> n;
        long long  a= 1;
        long long  s = 0;
        for(int i =1; i <=n; i++){
        a *= i;
        s += a;
        }
        cout<< s << endl;
        return 0;
		
}