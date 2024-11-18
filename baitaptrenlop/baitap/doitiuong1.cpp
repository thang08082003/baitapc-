#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class NhanVien {
private:
    string maNV;
    string hoTen;
    float hs;
    float lcb;
    float pc;

public:

    float tinhTongLuong() const {
        return lcb * hs + pc;
    }

  
    void docThongTin(ifstream &fileIn) {
        getline(fileIn, maNV);
        getline(fileIn, hoTen);
        fileIn >> hs >> lcb >> pc;
        fileIn.ignore(); 
        fileIn.ignore();
    }

   
    void hienThiThongTin() const {
        cout << "Ma NV: " << maNV << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Tong luong: " << tinhTongLuong() << endl;
      
    }
};

int main() {
    const int soNhanVien = 10; 
    NhanVien danhSach[soNhanVien]; 

    ifstream fileIn("nhanvien.txt");
    
        for (int i = 0; i < soNhanVien; ++i) {
            danhSach[i].docThongTin(fileIn);
        }
        fileIn.close();
   

  
    for (int i = 0; i < soNhanVien; ++i) {
        danhSach[i].hienThiThongTin();
    }

    return 0;
}
