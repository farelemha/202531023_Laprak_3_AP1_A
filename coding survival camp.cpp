#include <iostream>
#include <string>
using namespace std;

int main() {
    int umur;
    string level_peralatan;

    cout << "----------------------------------------" << endl;
    cout << "Masukkan umur peserta Survival Camp: " << endl;
    cout << "----------------------------------------" << endl;
    cin >> umur;
    
    if (umur >= 10) {
        if (umur >= 16) {
            if (umur >= 21) {
                level_peralatan = "Expert Gear";
            } else {
                level_peralatan = "Pro Gear";
            }
        } else {
            level_peralatan = "Basic Gear";
        }
    } else {
        level_peralatan = "Starter Kit";
    }
    
    cout << "Umur Peserta: " << umur << " tahun" << endl;
    cout << "Peralatan Tertinggi yang Boleh Dipakai: **" << level_peralatan << "**" << endl;
    cout << "----------------------------------------" << endl;
    
    system("pause");
    
    return 0; 
}
