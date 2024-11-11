#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
    
};

void nhap(NhanVien &nv){
    cin.ignore();
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    cin >> nv.ngayKyHopDong;
}


void inds(NhanVien ds[], int n) {
    for (int i = 0; i < n; i++) {
           string s;
        if (i < 9)s = "0000";
        else s = "000";
        cout<< s<<i+1<<" "<< ds[i].hoTen << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh << " "
         << ds[i].maSoThue << " " << ds[i].ngayKyHopDong << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}