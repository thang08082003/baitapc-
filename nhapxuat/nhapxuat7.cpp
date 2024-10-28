#include <iostream>
using namespace std;

int main() {
    int a, b;

    
    cin >> a;
    
    cin >> b;

    


   
    int temp = a;
    a = b;
    b = temp;

    
    cout << "after swapping: a = " << a << ", b = " << b << endl;

    return 0;
}