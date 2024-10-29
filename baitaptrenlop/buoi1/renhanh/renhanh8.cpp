#include <iostream>
using namespace std;

int main() {
    int a;

    // Nhập số nguyên a
    cout << "Nhập số nguyên a: ";
    cin >> a;

    // Kiểm tra số a có nằm trong khoảng từ 10 đến 100
    if (a >= 0 && a <= 10) {
        cout << "valid" << endl;
    } else {
        cout <<"invalid" << endl;
    }

    return 0;
}