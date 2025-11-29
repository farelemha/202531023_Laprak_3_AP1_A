#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int main() {
    int pilihan_alat;
    int durasi_menit;
    int tarif_per_15_menit = 0;
    string nama_alat;
    long long total_tarif = 0;
    
    cout << "===== Arena Gym - Tarif Sewa Alat =====" << endl;
    cout << "Pilihan Alat:" << std::endl;
    cout << "1 => Dumbbell (Rp 5.000 / 15 menit)" << endl;
    cout << "2 => Treadmill (Rp 10.000 / 15 menit)" << endl;
    cout << "3 => Barbell (Rp 8.000 / 15 menit)" << endl;
    cout << "4 => Static Bike (Rp 7.000 / 15 menit)" << endl;
    cout << "---------------------------------------" << endl;
    
    cout << "Masukkan pilihan alat (1-4): ";
    if (!(cin >> pilihan_alat) || pilihan_alat < 1 || pilihan_alat > 4) {
        cout << "Input tidak valid. Harap masukkan angka pilihan 1-4." << endl;
        return 0;
    }

    switch (pilihan_alat) {
        case 1:
            nama_alat = "Dumbbell";
            tarif_per_15_menit = 5000;
            break;
        case 2:
            nama_alat = "Treadmill";
            tarif_per_15_menit = 10000;
            break;
        case 3:
            nama_alat = "Barbell";
            tarif_per_15_menit = 8000;
            break;
        case 4:
            nama_alat = "Static Bike";
            tarif_per_15_menit = 7000;
            break;
            
        default:
            cout << "Pilihan alat tidak dikenal." << endl;
            return 1;
    }
    
    cout << "Masukkan durasi pemakaian (menit): ";
    if (!(cin >> durasi_menit) || durasi_menit <= 0) {
        cout << "Input durasi tidak valid. Harap masukkan angka positif." << endl;
        return 1;
    }

    double jumlah_interval_double = static_cast<double>(durasi_menit) / 15.0; 
    
    int jumlah_interval = static_cast<int>(std::ceil(jumlah_interval_double));

    for (int i = 0; i < jumlah_interval; ++i) {
        total_tarif += tarif_per_15_menit;
    }
    
    cout << "\n=======================================" << endl;
    cout << "Hasil Perhitungan Tarif Sewa" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Alat yang Dipilih: " << nama_alat << endl;
    cout << "Durasi Pemakaian: " << durasi_menit << " menit" << endl;
    cout << "Tarif per 15 Menit: Rp " << tarif_per_15_menit << endl;
    cout << "Jumlah Interval (@15 menit): " << jumlah_interval << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total Tarif: **Rp " << total_tarif << "**" << endl;
    cout << "=======================================" << endl;
 
    system ("pause");
    
    return 0;
}
