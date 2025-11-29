#include <iostream>
using namespace std;

int main() {
    int kecepatan;
    
    cout << "Level Kecepatan Drone Racing.\n";
    cout << "================================\n";
    cout << "Masukkan Kecepatan Drone Racing(Dalam Satuan Km/h): ";
    
    cin >> kecepatan;

    if (kecepatan < 40) {
        cout << "Level Basic." << endl;
    } 
    else if (kecepatan <= 79) {
        cout << "Level Intermediate." << endl;
    } 
    else if (kecepatan <= 119) {
        cout << "Level Advanced" << endl;
    }  
    else {
        cout << "Level ultra" << endl;
    }
    cout << "================================\n";
    
    system("pause");
    
    return 0;
}
