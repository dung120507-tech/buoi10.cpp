#include <iostream> 
using namespace std;
bool lasochan(int n){
    return n % 2 == 0;
}
bool lasonguyento(int n){
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool lanamnhuan(int year) {
    if (year % 400 == 0){
        return true;
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    return false;
} 
int main () {
    int n, year;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Nhap nam: ";
    cin >> year;
    if (lasochan(n)) {
        cout << "La so chan: Co" << endl;
    } else {
        cout << "La so chan: Khong" << endl;
    }
    if (lasonguyento(n)) {
        cout << "La so nguyen to: Co" << endl;
    } else {
        cout << "La so nguyen to: Khong" << endl;
    }
    if (lanamnhuan(year)) {
        cout << "La nam nhuan: Co" << endl;
    } else {
        cout << "La nam nhuan: Khong" << endl;
    }
    return 0;
}   