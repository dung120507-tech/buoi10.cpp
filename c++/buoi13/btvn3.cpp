#include <iostream>
using namespace std;
double tinhTienHang(int soLuong, double donGia, double phanTramGiam = 0) {
    return soLuong * donGia * (1 - phanTramGiam / 100);
}
int main (){
    int soLuong = 5;
    double donGia = 100;
    cout << "Khong giam gia: " << tinhTienHang(soLuong, donGia) << endl;
    cout << "Giam gia 10%: " << tinhTienHang(soLuong, donGia, 10) << endl;  
    cout << "Giam gia 50%: " << tinhTienHang(soLuong, donGia, 50) << endl;
    return 0;
}