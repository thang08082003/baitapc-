#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct NhanVien {
    string ma, hoten;
    float hs;
    long lcb, pc;
};

void NhapNV() {
    ofstream f("NhanVien.txt"); 
    for (int i = 0; i < 10; i++) { 
        NhanVien nv;
       
        cin >> nv.ma;
        cin.ignore(); 
       
        getline(cin, nv.hoten);
        
        cin >> nv.hs >> nv.lcb >> nv.pc;

        
        f << nv.ma << "\n" << nv.hoten << "\n" << nv.hs << "\n" << nv.lcb << "\n" << nv.pc << "\n";
    }
    f.close(); 
}

void DocNV() {
    ifstream f("NhanVien.txt");
   
    NhanVien nvm;
    while (f >> nvm.ma) { 
        f.ignore(); 
        getline(f, nvm.hoten);
        f >> nvm.hs >> nvm.lcb >> nvm.pc;
        f.ignore(); 

        cout << nvm.ma << " " << nvm.hoten << " : " << (nvm.lcb * nvm.hs + nvm.pc) << endl;
    }
    f.close(); 
}

int main() {
    NhapNV(); 
    // DocNV(); 
    return 0;
}