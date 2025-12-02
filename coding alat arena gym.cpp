#include <iostream>
using namespace std;

int main() {
    int pilihan, durasi, tarif = 0, total = 0;
    
   cout << "===== Arena Gym - Tarif Sewa Alat =====" << endl;
   cout << "Pilih alat (1-4): ";
   cin >> pilihan;
    
   cout << "Durasi pemakaian dalam menit: ";
   cin >> durasi;
    
    switch (pilihan) {
        case 1:
            tarif = 5000; // Dumbbell
            break;
        case 2:
            tarif = 10000; // Treadmill
            break;
        case 3:
            tarif = 8000; // Barbell
            break;
        case 4:
            tarif = 7000; // Static Bike
            break;
        default:
            cout << "Pilihan alat tidak valid." << endl;
            return 0;
    }
    
    int intervals = (durasi + 14) / 15;
    
    for (int i = 0; i < intervals; i++) {
        total += tarif;
    }
    
    cout << "Total biaya sewa: Rp " << total << endl;
    cout << "=======================================" << endl;
    
    system ("pause");
    
    return 0;
}
