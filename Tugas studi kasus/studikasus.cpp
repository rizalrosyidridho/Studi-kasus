#include <iostream>
#include <string>

using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

// syntax program yang akan menjalankan program
int main()
{
    string nama_penjaga, jenis, code, plat, nama_pelanggan;
    data_BBM BBM;
    string kode_BBM[4]={"1", "2", "3", "4"};
    string nama_BBM[4]={"Premium", "Pertalite", "Solar", "Pertamax"};
    int jml_uang, kembali, total=0;
    string no_pompa, no_selang;
    float liter, harga, uang;

    cout << "======================================="<<endl;
    cout << "     Selamat Datang di SPBU UAD  "<<endl;
    cout << "   Jalan kenangan 11, Yogyakarta "<<endl;
    cout << "======================================="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode        Jenis BBM         Harga "<<endl;
    cout << " 1           Premium      Rp. 8.500,00"<<endl;
    cout << " 2          Pertalite     Rp. 7.000,00"<<endl;
    cout << " 3            Solar       Rp. 5.000,00"<<endl;
    cout << " 4          Pertamax      Rp. 9.000,00"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 8.500/liter";
        jenis = "Premium";
        harga = 8500;
        nama_penjaga = "Dobleh";
        no_pompa = "1";
        no_selang = "1";
    }
    else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 7.000/liter";
        jenis = "Pertalite";
        harga = 7000;
        nama_penjaga = "Dobleh";
        no_pompa = "2";
        no_selang = "2";
    }
    else if (BBM.kode_BBM == "3"){
        cout << "Jenis BBM : "<<nama_BBM[2]<<endl;
        cout << "Rp. 5.000/liter";
        jenis = "Solar";
        harga = 5000;
        nama_penjaga = "Sutono";
        no_pompa = "3";
        no_selang = "3";
    }
    else if (BBM.kode_BBM == "4"){
        cout << "Jenis BBM : "<<nama_BBM[3]<<endl;
        cout << "Rp. 9.000/liter";
        jenis = "Pertamax";
        harga = 9000;
        nama_penjaga = "Farhan";
        no_pompa = "4";
        no_selang = "4";
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout << "Nama       : "; cin >> nama_pelanggan;
        cout << "Plat nomor : "; cin >> plat;
        cout << "Beli       : "; cin >> uang;
        cout << "Bayar      : "; cin >> jml_uang;
        total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                   -PERTAMINA-                        "<<endl;
    cout << "                   -SPBU UAD-                     "<<endl;
    cout << "        -Jl. Kenangan 11, Yogyakarta-          "<<endl;
    cout << "                -Telp 0281 643663-                    "<<endl;
    cout << "------------------------------------------------------"<<endl;
    cout << dt <<endl;
    cout << "Nomor Pompa    : "<<no_pompa<<endl;
    cout << "Nomor Selang   : "<<no_selang<<endl;
    cout << "Nomor Plat     : "<<plat<<endl;
    cout << "Jenis BBM      : "<<jenis<<endl;
    cout << "Liter          : "<<liter<<endl;
    cout << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout << "Total          : Rp. "<<total<<",00"<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    cout << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    cout << "======================================================"<<endl;
    cout << "Operator       : "<<nama_penjaga<<endl;
    cout << "Nama pelangga  : "<<nama_pelanggan<<endl;
    cout << "        BBM subsidi untuk golongan TIDAK MAMPU        "<<endl;
    cout << "           TERIMA KASIH DAN SELAMAT JALAN             ";

    return 0;
}