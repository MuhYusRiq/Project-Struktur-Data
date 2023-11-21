#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

const int MAX_PERAWAT = 100;

struct Perawat {
    string nama;
    int usia;
    string shift;
    string jenisKelamin;
    string poli;
    string jabatan;
};

void tambahPerawat(vector<Perawat>& daftarPerawat, int& jumlahPerawat) {
    if (jumlahPerawat < MAX_PERAWAT) {
        Perawat perawat;
        cout << "                                            Masukkan Nama          : ";
        cin >> perawat.nama;
        cout << "                                            Masukkan Usia          : ";
        cin >> perawat.usia;
        cout << "                                            Masukkan Jenis Kelamin : ";
        cin >> perawat.jenisKelamin;
        cout << "                                            Masukkan Poli          : ";
        cin >> perawat.poli;
        cout << "                                            Masukkan Shift         : ";
        cin >> perawat.shift;
        cout << "                                            Masukkan Jabatan       : ";
        cin >> perawat.jabatan;

        daftarPerawat.push_back(perawat);

        jumlahPerawat++;
        cout << "\nData perawat berhasil ditambahkan!" << endl;
    } else {
        cout << "\nKuota perawat penuh, tidak dapat menambahkan data perawat baru." << endl;
    }
}

void cetakDaftarPerawat(const vector<Perawat>& daftarPerawat) {
    if (daftarPerawat.empty()) {
        cout << "\nTidak ada perawat dalam daftar." << endl;
        return;
    }
	
	cout << " ====================================================================================================================================" << endl;
	cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
    cout << " ====================================================================================================================================\n" << endl;
    cout << "                                                  BAGIAN DAFTAR PERAWAT RUMAH SAKIT    " << endl;
    cout << "                                                 ===================================\n" << endl;
    cout << "\n                                          +-------------------------------------------+ " << endl;
    cout << "                                            |              Daftar Perawat               | " << endl;
 	cout << "                                            +-------------------------------------------+ " << endl;
    for (int i = 0; i < daftarPerawat.size(); i++) {
        const Perawat& perawat = daftarPerawat[i];
    	cout << "                                              Nama          : " << perawat.nama << endl;
        cout << "                                              Usia          : " << perawat.usia << endl;
        cout << "                                              Shift         : " << perawat.shift << endl;
        cout << "                                              Jenis Kelamin : " << perawat.jenisKelamin << " Tahun " << endl;
        cout << "                                              Poli          : " << perawat.poli << endl;
    cout << "                                              Jabatan       : " << perawat.jabatan << endl;
	cout << "                                            =============================================\n" << endl;
    }
}

bool perawatLebihKecil(const Perawat& perawat1, const Perawat& perawat2) {
    return perawat1.nama < perawat2.nama;
}

void urutkanDaftarPerawat(vector<Perawat>& daftarPerawat) {
    sort(daftarPerawat.begin(), daftarPerawat.end(), perawatLebihKecil);
}

void tampilkanTutorial() {
	cout << " ====================================================================================================================================" << endl;
	cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
    cout << " ====================================================================================================================================\n" << endl;
    cout << "                                               BANTUAN PENGGUNAAN APLIKASI RUMAH SAKIT    " << endl;
    cout << "                                           ================================================\n" << endl;
    cout << "                                           +----------------------------------------------+" << endl;
    cout << "                                           |       Tutorial Penggunaan Aplikasi Ini       |" << endl;
    cout << "                                           +----------------------------------------------+" << endl;
    cout << "                                           | 1. Pilih menu 'Tambah Daftar Perawat' untuk  |" << endl;
    cout << "                                           |    memasukkan data perawat baru ke dalam     |" << endl;
    cout << "                                           |    sistem.                                   |" << endl;
    cout << "                                           | 2. Pilih menu 'Report' untuk melihat daftar  |" << endl;
    cout << "                                           |    perawat atau mengurutkan daftar perawat.  |" << endl;
    cout << "                                           | 3. Pilih menu 'Help' untuk melihat tutorial  |" << endl;
    cout << "                                           |    penggunaan aplikasi ini.                  |" << endl;
    cout << "                                           | 4. Pilih menu 'Keluar' untuk mengakhiri      |" << endl;
    cout << "                                           |    aplikasi.                                 |" << endl;
    cout << "                                           +----------------------------------------------+" << endl;
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void tampilkanMenuAwal() {
	clearScreen();
	cout << " ====================================================================================================================================" << endl;
    cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
    cout << " ====================================================================================================================================\n" << endl;
    cout << "                                                    SELAMAT DATANG DI RUMAH SAKIT       " << endl;
    cout << "                                                           BAGIAN  PERAWAT        " << endl;
    cout << "                                                =====================================\n " << endl;
    cout << "                                                    +---------------------------+     " << endl;
    cout << "                                                    |    Perawat Rumah Sakit    |     " << endl;
    cout << "                                                    +---------------------------+     " << endl;
    cout << "                                                    | Menu:                     |     " << endl;
    cout << "                                                    | 1. Input                  |     " << endl;
    cout << "                                                    | 2. Report                 |     " << endl;
    cout << "                                                    | 3. Help                   |     " << endl;
    cout << "                                                    | 0. Keluar                 |     " << endl;
    cout << "                                                    +---------------------------+     " << endl;
    cout << "                                                      Pilihan Anda : ";
}

void tampilkanSubMenuReport() {
	cout << " ====================================================================================================================================" << endl;
	cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
    cout << " ====================================================================================================================================\n" << endl;
    cout << "                                                  BAGIAN REPORT PERAWAT RUMAH SAKIT     " << endl;
    cout << "                                                 ===================================\n" << endl;
    cout << "                                                  +-------------------------------+" << endl;
    cout << "                                                  |             Report            |" << endl;
    cout << "                                                  +-------------------------------+" << endl;
    cout << "                                                  | 1. Daftar Perawat             |" << endl;
    cout << "                                                  | 2. Urutkan Daftar             |" << endl;
    cout << "                                                  | 3. Help                       |" << endl;
    cout << "                                                  | 0. Kembali                    |" << endl;
    cout << "                                                  +-------------------------------+" << endl;
    cout << "                                                    Pilihan Anda : ";
}

int main() {
    vector<Perawat> daftarPerawat;
    int jumlahPerawat = 0;
    int pilihan;

    do {
        tampilkanMenuAwal();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                clearScreen();
                cout << " ====================================================================================================================================" << endl;
                cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    			cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
  			  	cout << " ====================================================================================================================================\n" << endl;
				int jumlahPerawatBaru;
    			cout << "\n Berapa jumlah perawat yang ingin Anda tambahkan? ";
    			cin >> jumlahPerawatBaru;
    			clearScreen();
    			cout << " ====================================================================================================================================" << endl;
                cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    			cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
  			  	cout << " ====================================================================================================================================\n" << endl;
				cout << "                                                  BAGIAN DAFTAR PERAWAT RUMAH SAKIT    " << endl;
    			cout << "                                                 ===================================\n" << endl;
    			cout << "\n                                          +-------------------------------------------+ " << endl;
    			cout << "                                            |              Daftar Perawat               | " << endl;
    			cout << "                                            +-------------------------------------------+ " << endl;
    			int tambahLagi;
    			do {
        			for (int i = 0; i < jumlahPerawatBaru; i++) {
            			tambahPerawat(daftarPerawat, jumlahPerawat);
        			}
        			cout << "\n Apakah Anda ingin menambahkan perawat lagi? (1: Ya / 0: Tidak) ";
        			cin >> tambahLagi;
    			} while (tambahLagi == 1);

    			break;
            case 2:
                clearScreen();
                int subPilihan;
                do {
                    tampilkanSubMenuReport();
                    cin >> subPilihan;
                    switch (subPilihan) {
                        case 1:
                            clearScreen();
                            cetakDaftarPerawat(daftarPerawat);
                            int kembali1;
                			cout << "\n                                             Ketik '0' untuk kembali ke menu sebelumnya: ";
                			cin >> kembali1;
                			clearScreen();
                            break;
                        case 2:
                            clearScreen();
                            urutkanDaftarPerawat(daftarPerawat);
                            cout << "\n                                         Daftar perawat berhasil diurutkan berdasarkan nama.\n" << endl;
                            int kembali2;
                			cout << "\n                                             Ketik '0' untuk kembali ke menu sebelumnya: ";
                			cin >> kembali2;
                			clearScreen();
                            break;
                        case 3:
                            clearScreen();
                            tampilkanTutorial();
                            int kembali3;
                			cout << "\n                                             Ketik '0' untuk kembali ke menu sebelumnya: ";
                			cin >> kembali3;
                			clearScreen();
                            break;
                        case 0:
                            clearScreen();
                            break;
                        default:
                            cout << "\nPilihan tidak valid. Silakan coba lagi!" << endl;
                            break;
                    }
                } while (subPilihan != 0);
                break;
            case 3:
                clearScreen();
                tampilkanTutorial();
                int kembali4;
                cout << "\nKetik '0' untuk kembali ke menu sebelumnya: ";
                cin >> kembali4;
                clearScreen();
                break;
            case 0:
            	clearScreen();
            	cout << " ====================================================================================================================================\n" << endl;
            	cout << "                                       PROJECT STRUKTUR DATA TENTANG LIST PERAWAT RUMAH SAKIT " << endl;
    			cout << "                                              MUHAMMAD YUSRON THORIQ (220103160) 22TIA5       " << endl;
    			cout << " ====================================================================================================================================\n" << endl;
				cout << "	                                mm                                                                    mm   mm        " << endl;
				cout << "	@@@**@@**@@@                    @@                                  *@@@@* *@@@*                      @@  @@@        " << endl;
				cout << "	@*   @@   *@                                                          @@   m@*                             @@        " << endl;
				cout << "	     @@       mm@*@@ *@@@m@@@ *@@@  *@@@@@@@@m@@@@@m   m@*@@m         @@ m@*        m@*@@m   m@@*@@@*@@@   @@@@@@@m  " << endl;
				cout << "	     !@      m@*   @@  @@* **   @@    @@    @@    @@  @@   @@         @@@@@m       @@   @@   @@   **  @@   @@    @@  " << endl;
				cout << "	     !@      !@******  @!       !@    !@    @@    @@   m@@@!@         !@  @@!       m@@@!@   *@@@@@m  !@   @@    @!  " << endl;
				cout << "	     !@      !@m    m  @!       !@    !@    !@    @@  @!   !@         !@   *!!m    @!   !@        @@  !@   @!    @!  " << endl;
				cout << "	     !@      !!******  !!       !!    !!    !!    !!   !!!!:!         !!    !:!     !!!!:!   *!   @!  !!   !!    !!  " << endl;
				cout << "	     !!      :!!       !:       !!    :!    :!    !!  !!   :!         !!     :!!!  !!   :!   !!   !!  !!   !:    !:  " << endl;
				cout << "	   : :!::     : : :: : :::    : : : : :!:  :::   ::!: :!: : !:      : : :      : : :!: : !:  : :!:  : : : : :   : : :" << endl;
                break;
            default:
                clearScreen();
                cout << "\nPilihan tidak valid. Silakan coba lagi!" << endl;
                break;
        }
    } while (pilihan != 0);

    return 0;
}

