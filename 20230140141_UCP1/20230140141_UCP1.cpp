#include <iostream>
#include <string>
using namespace std;

// 6. Tidak sehat jika tingkat polutan = 75 & nilai = 45 | Tampilkan total lokasi yang sehat dan tidak sehat | kondisi ingin mengulangi program atau tidak

string status;

struct DetailSensor
{
	int polutan;
	int nilai;
};

struct Kota
{
	string nama;
	DetailSensor sensor;
	string status;
};

void input()
{
	Kota kt[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Kota Ke - " << (i + 1) << ":" << endl;
		cout << "Nama Kota = ";
		getline(cin, kt[i].nama);
		cout << "Data Sensor = " << endl;
		cout << "\t Tingkat Polutan = ";
		cin >> kt[i].sensor.polutan;
		cout << "\t Nilai Perhairanya = ";
		cin >> kt[i].sensor.nilai;
		cin.ignore(1, '\n');
		cout << endl;

		if (kt[i].sensor.polutan <= 75)
		{
			kt[i].status = "Tidak Sehat";
		}
		else if (kt[i].sensor.nilai <= 45)
		{
			kt[i].status = "Tidak Sehat";
		}
		else
		{
			kt[i].status = "Sehat";
		}

	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "Nama Kota \t Status" << endl;
		cout << kt[i].nama << "\t\t" << kt[i].status;
		cout << endl;
	}
}

int main()
{
	char pilihan;
	do
	{
		input();

		cout << "\nApakah anda ingin mengulangi lagi? (y/n)";
		cin >> pilihan;
		
		system("cls");
	} while (pilihan == 'y' || pilihan == 'Y');
}


// 1. Contoh deklarasi variable : int panjang, string nama | 3 Variable dgn tipe data berbeda : int, string, date
// 2. Prosedur void display =  digunakan sebagai tempat untuk menulis kode tentang prosedur atau fungsi yang akan di tampilkan kepada pengguna
// Fungsi int hitungLuas = digunakan sebagai tempat untuk menulis kode yang menghitung perkalian variable int panjang dan int lebar 
// 3. bisa digunakan dalam program quiz yang dimana jika nilai pengguna belum melebihi nilai yang ditentukan maka pengguna harus melakukan quiz itu lagi
// 4. bisa digunakan untuk menentukan nilai mahasiswa yang lulus atau tidak
// 5. implementasi dari struct bisa digunakan dalam program yang memiliki tujuan untuk memasukan data mahasiswa
// Struct bisa digunakan untuk mengelompokan beberapa data dalam satu struct agar data dapat dikelola lebih baik