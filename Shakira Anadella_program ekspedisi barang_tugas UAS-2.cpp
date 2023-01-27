#include <iostream>
using namespace std;

struct jadwal{
    string hari;
    string jam;
};

void program(){
    cout << "\n\n\t==================================================================\n";
    cout << "\t\t\t==== EKSPEDISI SHAKI EKSPRESS ====\n";
    cout << "\t==================================================================\n\n";
}

void menu_utama(){
    int no, pilih_menu, pilih, jumlah_paket, i, no_antrian, resi, hb, no_input;
    char kt, yn, yt;
    long total_pembayaran;
    char nama_pengirim[30], alamat_pengirim[50], tlpn_pengirim[13], tlpn_penerima[13], nama_penerima[30], alamat_tujuan[50], deskripsi_barang[20], tanggal[30];
    float berat_aktual, berat_volume, ppn, total_berat, bayar, kembalian, biaya_asuransi;
    float volume[3];
    int admin = 3500;
    resi = 202301023;

    menu:
    cout << "========= Menu utama ekspedisi shaki ekspress =========\n";
    cout << " 1. informasi tarif \n";
    cout << " 2. Asuransi pengiriman \n";
    cout << " 3. kirim barang sekarang \n";
    cout << " 4. cetak resi \n";
    cout << " 5. keluar \n";
    cout << " pilih menu : ";
    cin >> pilih_menu;
    system("cls");

    if(pilih_menu==1){
        cout << "\n\n===================================================================\n";
        cout << "\t\t ====== 1. informasi tarif ======\n";
        cout << "===================================================================\n\n";
        cout << "ekspedisi SHAKI ekspress melayani pengiriman barang cabang Sukabumi\n";
        cout << "ke seluruh wilayah Jawa Barat\n\n";
        cout << "------------------------------------------------------------------- \n";
        cout << " No\t kota\t\t kode\t  tarif\t\t estimasi waktu\n ";
        cout << "------------------------------------------------------------------ \n";
        cout << " 1.\t Bandung\t [A]\t Rp.10000/kg \t 1-2 hari \n";
        cout << " 2.\t Bogor\t\t [B]\t Rp. 7500/kg \t 1-2 hari \n";
        cout << " 3.\t Depok\t\t [C]\t Rp. 7500/kg \t 1-2 hari \n";
        cout << " 4.\t Bekasi\t\t [D]\t Rp. 7500/kg \t 1-2 hari \n";
        cout << " 5.\t Tasikmalaya\t [E]\t Rp.12000/kg \t 1-3 hari \n";
        cout << " 6.\t kab.BandungBarat[F]\t Rp. 7500/kg \t 1-2 hari \n";
        cout << " 7.\t Cirebon\t [G]\t Rp.12000/kg \t 1-3 hari \n";
        cout << " 8.\t Cimahi\t\t [H]\t Rp.10000/kg \t 1-3 hari \n";
        cout << " 9.\t Banjar\t\t [I]\t Rp.15000/kg \t 1-3 hari \n";
        cout << "10.\t Kab.Sumedang\t [J]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "11.\t Kab.Majalengka\t [K]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "12.\t Kab.Bandung\t [L]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "13.\t Kab.Bekasi\t [M]\t Rp.10000/kg \t 2-3 hari \n";
        cout << "14.\t Kab.Bogor\t [N]\t Rp.10000/kg \t 2-3 hari \n";
        cout << "15.\t Kab.Ciamis\t [O]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "16.\t Kab.Cianjur\t [P]\t Rp.10000/kg \t 2-3 hari \n";
        cout << "17.\t Kab.Cirebon\t [Q]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "18.\t Kab.Garut\t [R]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "19.\t Kab.Indramayu\t [S]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "20.\t Kab.Karawang\t [T]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "21.\t Kab.Kuningan\t [U]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "22.\t Kab.Pangandaran [V]\t Rp.15000/kg \t 2-3 hari \n";
        cout << "23.\t Kab.Purwakarta\t [W]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "24.\t Kab.Subang\t [X]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "25.\t Kab.Tasikmalaya [Y]\t Rp.12000/kg \t 2-3 hari \n";
        cout << "26.\t Kab.Sukabumi\t [Z]\t Rp. 7500/kg \t 2-3 hari \n";
        cout << "\n\n";
        cout << "*biaya tersebut tidak termasuk biaya administrasi dan ppn \n\n";
        cout << "kembali ke menu utama (y/t) : ";
        cin >> yn;
        if(yn=='y'){
            system("cls");
            goto menu;
        }else{
            system("cls");
            cout << "\n tidak ada pilihan, anda telah keluar dari menu utama \n";
        }

    }else if(pilih_menu==2){
        system("cls");
        cout << "\n\n=======================================================================\n";
        cout << "\t\t ====== 2. asuransi pengiriman ======\n";
        cout << "=======================================================================\n\n";
        cout << " Asuransi Shaki menghadirkan layanan proteksi pengiriman barang\n";
        cout << " selama proses pengiriman \n\n";

        cout << "--------------------- syarat asuransi pengiriman ----------------------\n\n";
        cout << "berikut penjabaran mengenai syarat asuransi Shaki yang harus dipenuhi :\n\n";
        cout << " 1. Nilai barang lebih dari Rp1 juta\n";
        cout << " 2. Nilai barang atau dokumen berharga 10x lipat dari biaya pengiriman\n";
        cout << " 3. Barang elektronik\n";
        cout << " 4. Barang rawan pecah\n\n";

        cout << "--------------------- perhitungan biaya asuransi ---------------------- \n\n";
        cout << " Biaya Asuransi Shki = (0,2% x harga barang) + biaya administrasi \n\n";


        cout << "------------------- cara klaim asuransi pengiriman --------------------\n\n";
        cout << "Klaim dapat dilakukan dengan menghubungi customer service pada nomor\n";
        cout << "(022)2923111 atau via email customercare@shaki.co.id.\n";
        cout << "Berikut ini adalah dokumen klaim yang dibutuhkan : \n\n";
        cout << "1. Bukti resi asli\n";
        cout << "2. Bukti resi asuransi\n";
        cout << "3. Formulir klaim dan kartu identitas\n\n";

        cout << "kembali ke menu utama (y/t) : ";
        cin >> yn;
        if(yn=='y'){
            system("cls");
            goto menu;
        }else{
            system("cls");
            cout << "\n tidak ada pilihan, anda telah keluar dari menu utama \n";
        }

    }else if(pilih_menu==3){
        system("cls");
        cout << "\n\n======================================================================\n";
        cout << "\t ====== 3. kirim barang sekarang ======\n";
        cout << "======================================================================\n\n\n";
        cout << "tanggal pengiriman\t\t : ";
        cin.getline(tanggal,30); cin.getline(tanggal,30);
        cout << "nama pengirim \t\t\t : ";
        cin.getline(nama_pengirim,30);
        cout << "alamat pengirim\t\t\t : ";
        cin.getline(alamat_pengirim,50);
        cout << "no.tlpn pengirim\t\t : ";
        cin >> tlpn_pengirim;
        cout << "---------------------------------------------------------------------\n\n";
        cout << "nama penerima \t\t\t : ";
        cin.getline(nama_penerima,30); cin.getline(nama_penerima,30);
        cout << "alamat penerima\t\t\t : ";
        cin.getline(alamat_tujuan,50);
        cout << "no.tlpn penerima\t\t : ";
        cin >> tlpn_penerima;
        cout << "---------------------------------------------------------------------\n\n";
        cout << "nomor pengimputan\t\t : ";
        cin >> no_input;
        cout << "deskripsi barang\t\t : ";
        cin.getline(deskripsi_barang,20); cin.getline(deskripsi_barang,20);
        cout << "jumlah paket yang akan dikirim\t : ";
        cin >> jumlah_paket;
        cout << "berat aktual barang (kg)\t : ";
        cin >> berat_aktual;
        cout << "volume_paket (cm)(pxlxt)\t : ";
        cin >> volume[0] >> volume[1] >> volume[2];
        berat_volume = (volume[0]*volume[1]*volume[2])/4000;
        cout << "berat volume\t\t\t : " << berat_volume << "kg" << endl;
        if(berat_volume > berat_aktual){
            total_berat = berat_volume*jumlah_paket;
        }else{
            total_berat = berat_aktual*jumlah_paket;
        }
        cout << "total berat\t\t\t : " << total_berat <<  "kg" << endl;
        cout << "\n*berat aktual dan berat volume akan dihitung berat bobotnya" << endl;
        cout << "*total berat bobot yang lebih besar akan diambil dalam perhitungan biaya\n" << endl;
        cout << "kode wilayah tujuan\t\t : ";
        cin >> kt;
        switch(kt){
            case 'A':
                cout << "tujuan pengantaran paket\t : Bandung " << endl;
                cout << "tarif \t\t\t\t : Rp.10000 /kg" << endl;
                ppn = (10000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (10000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (10000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'B':
                cout << "tujuan pengantaran paket\t : Bogor " << endl;
                cout << "tarif  \t\t\t\t : Rp.7500 /kg" << endl;
                ppn = (7500*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (7500*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (7500*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'C':
                cout << "tujuan pengantaran paket\t : Depok" << endl;
                cout << "tarif \t\t\t\t : Rp.7500 /kg" << endl;
                ppn = (7500*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (7500*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (7500*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'D':
                cout << "tujuan pengantaran paket\t : Bekasi " << endl;
                cout << "tarif  \t\t\t\t : Rp.7500 /kg" << endl;
                ppn = (7500*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (7500*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (7500*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'E':
                cout << "tujuan pengantaran paket\t : Tasikmalaya " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'F':
                cout << "tujuan pengantaran paket\t : Kab.Bandung Barat " << endl;
                cout << "tarif  \t\t\t\t : Rp.7500 /kg" << endl;
                ppn = (7500*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (7500*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (7500*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
             case 'G':
                cout << "tujuan pengantaran paket\t : Cirebon " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'H':
                cout << "tujuan pengantaran paket\t : Cimahi " << endl;
                cout << "tarif  \t\t\t\t : Rp.10000 /kg" << endl;
                ppn = (10000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (10000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (10000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'I':
                cout << "tujuan pengantaran paket\t : Banjar " << endl;
                cout << "tarif \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'J':
                cout << "tujuan pengantaran paket\t : kab.Sumedang " << endl;
                cout << "tarif  \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'K':
                cout << "tujuan pengantaran paket\t : kab.Majalengka " << endl;
                cout << "tarif \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
             case 'L':
                cout << "tujuan pengantaran paket\t : kab.Bandung " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'M':
                cout << "tujuan pengantaran paket\t : kab.Bekasi " << endl;
                cout << "tarif  \t\t\t\t : Rp.10000 /kg" << endl;
                ppn = (10000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (10000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (10000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'N':
                cout << "tujuan pengantaran paket\t : kab.Bogor " << endl;
                cout << "tarif \t\t\t\t : Rp.10000 /kg" << endl;
                ppn = (10000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (10000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (10000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'O':
                cout << "tujuan pengantaran paket\t : kab.Ciamis " << endl;
                cout << "tarif  \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'P':
                cout << "tujuan pengantaran paket\t : kab.Cianjur " << endl;
                cout << "tarif \t\t\t\t : Rp.10000 /kg" << endl;
                ppn = (10000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (10000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (10000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'Q':
                cout << "tujuan pengantaran paket\t : kab.Cirebon " << endl;
                cout << "tarif  \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
             case 'R':
                cout << "tujuan pengantaran paket\t : kab.Garut " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'S':
                cout << "tujuan pengantaran paket\t : kab.Indramayu " << endl;
                cout << "tarif  \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'T':
                cout << "tujuan pengantaran paket\t : kab.Karawang " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'U':
                cout << "tujuan pengantaran paket\t : kab.Kuningan " << endl;
                cout << "tarif  \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'V':
                cout << "tujuan pengantaran paket\t : kab.Pangandaran " << endl;
                cout << "tarif \t\t\t\t : Rp.15000 /kg" << endl;
                ppn = (15000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (15000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (15000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'W':
                cout << "tujuan pengantaran paket\t : kab.Purwakarta " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
             case 'X':
                cout << "tujuan pengantaran paket\t : kab.Subang " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'Y':
                cout << "tujuan pengantaran paket\t : kab.Tasikmalaya " << endl;
                cout << "tarif \t\t\t\t : Rp.12000 /kg" << endl;
                ppn = (12000*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (12000*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (12000*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            case 'Z':
                cout << "tujuan pengantaran paket\t : kab.Sukabumi " << endl;
                cout << "tarif  \t\t\t\t : Rp. 7500 /kg" << endl;
                ppn = (7500*total_berat)*0.10;
                if(total_berat<=1){
                    total_pembayaran = (7500*1)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                } else{
                    total_pembayaran = (7500*total_berat)+ppn+admin;
                    cout << "total pembayaran \t\t : Rp." << total_pembayaran << endl;
                }
                break;
            default:
                cout << "\n\nmaaf, kode tujuan pengantaran tidak tersedia" << endl;
                cout << "silahkan cek kembali kode tujuan anda di menu pertama" << endl;
        }
        cout << "\ndata berhasil disimpan... \n\n";
        system("pause");
        system("cls");
        goto menu;

        } else if(pilih_menu==4){
        system("cls");
        cout << "\n\n===================================================================\n";
        cout << "\t\t ====== 3. cetak resi ======\n";
        cout << "===================================================================\n\n\n";
        for(int i=1; i<=1; i++){
        cout << "\nnomor resi\t\t : " << resi+no_input << endl;
        cout << "nomor pengimputan\t : " << no_input << endl;
        cout << "tanggal pengiriman\t : " << tanggal << endl;
        cout << "nama pengirim\t\t : "<< nama_pengirim << endl;
        cout << "nama penerima\t\t : " << nama_penerima << endl;
        cout << "alamat pengirim\t\t : " << alamat_pengirim << endl;
        cout << "alamat penerima\t\t : "<< alamat_tujuan << endl;
        cout << "no telepon pengirim\t : " << tlpn_pengirim << endl;
        cout << "no telepon penerima\t : " << tlpn_penerima << endl;
        cout << "deskripsi paket\t\t : " << deskripsi_barang << endl;
        cout << "jumlah paket\t\t : " << jumlah_paket << endl;
        cout << "total berat\t\t : " << total_berat << "kg" << endl;
        cout << "biaya ppn\t\t : 10% " << endl;
        cout << "biaya admin\t\t : Rp.3500" << endl;
        cout << "total pembayaran\t : Rp." << total_pembayaran << endl;
        cout << "-------------------------------------------------------------------\n";
        cout << "ajukan asuransi barang (y/t)\t : ";
        cin >> yt;
        if(yt=='y'){
            cout << "harga barang per-unit\t\t : Rp.";
            cin >> hb;
            biaya_asuransi = (0.2/100*hb*jumlah_paket) + admin;
            cout << "biaya asuransi pengiriman\t : Rp. " << biaya_asuransi << endl;
        } else{
            cout << "asuransi \t\t\t : tidak\n";
        }
        cout << "-------------------------------------------------------------------\n";
    }
        system("pause");
        system("cls");
        goto menu;

    } else if(pilih_menu==5){
       system("cls");
       cout << "\n\n===================================================================\n";
       cout << "\t\t ====== TERIMAKASIH ======\n";
       cout << "\t ====== TELAH MENGGUNAKAN JASA KAMI ======\n";
       cout << "===================================================================\n\n\n";
       cout << "kami akan segera memproses paket anda\n";

    } else{
        cout << "maaf, menu tidak tersedia" << endl;
        cout << "kembali ke menu utama (y/t) : ";
        cin >> yn;
        if(yn=='y'){
            system("cls");
            goto menu;
        }else{
            system("cls");
            cout << "\n tidak ada pilihan, anda telah keluar dari menu utama \n";
        }
    }
}


int main(){
    program();

    cout << "====== jadwal layanan operasional Shaki Ekspress ======" << endl;

    jadwal operasional1, operasional2;
    operasional1.hari = "senin-sabtu";
    operasional1.jam = "08.00 - 18.00";
    cout << operasional1.hari << " : " << operasional1.jam << endl;

    operasional2.hari = "minggu";
    operasional2.jam = "08.00 - 15.00";
    cout << operasional2.hari << "\t   : " << operasional2.jam << endl;
    cout << "\n\n";

    menu_utama();
}

