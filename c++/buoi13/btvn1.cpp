#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14159;
double dientichHCN(double cdai, double crong){
    return cdai * crong;
}
double chuviHCN(double cdai, double crong) {
    return (cdai + crong) * 2;
}
double dientichhinhtron(double r) {
    return PI * r * r;
}
double chuvihinhtron(double r) {
    return 2 * PI * r;
}
int main () {
    double cdai, crong, r;
    cout << "Nhap chieu dai hcn: ";
    cin >> cdai;
    cout << "Nhap chieu rong hcn: ";
    cin >> crong;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    cout << fixed << setprecision(2);
    cout << "Dien tich hcn la: " << dientichHCN(cdai, crong) << endl;
    cout << "Chu vi hcn la: " << chuviHCN(cdai, crong) << endl;
    cout << "Dien tich hinh tron la: " << dientichhinhtron(r) << endl;
    cout << "Chu vi hinh tron la: " << chuvihinhtron(r) << endl;
    return 0;
}