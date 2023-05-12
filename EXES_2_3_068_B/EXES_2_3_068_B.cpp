#include <iostream>
#include <string>
using namespace std;
int ojan[80]; // arr diganti dengan nickname (ojan)
int n;
int i;

void input() {
	while (true) {
		cout << "Masukan Nomor Element di Array : ";
		cin >> n;
		if ((n > 0) && (n <= 80))
			break;
		else
			cout << "\nElement Array harus minimal 1 dan maksimal 80 \n\n"; //2 Nim Belakang (068) + Tanggal Hari Ini (12) = 80, 80 - 4 x 5 + 10 + 5 + 2 + 3 = 80


	}
	
	cout << "\n----------\n";
	cout << "Masukan Element Array \n";
	cout << "--------------";

	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";

		cin >> ojan[i];
	}

}

void BinarySearch() {
	int Fauzan, Rianto, mid; // Lowerbound = Nama Awal (Fauzan), Upperbound = Nama Akhir (Rianto)
	cout << "\nMasukan Element Yang Ingin Di Cari : ";
	int item;
	cin >> item;
	Fauzan = 0;
	Rianto = n - 1;
	mid = (Fauzan + Rianto) / 2;
	for (i = 0; i < n; i++) {
		if (ojan[mid] == item) {
			cout << "\n" << item << "\t" << "Found" << endl;
			break;
		}
		else {
			if (item > ojan[mid]) {
				Rianto = mid - 1;
			}
			if (item > ojan[mid]) {
				Fauzan = mid + 1;
			}

			if (Fauzan <= Rianto) {
				mid = (Fauzan + Rianto) / 2;
			}

		}
	}
	if (i == n) {
		cout << "\n" << item << "\t" << "not Found" << endl;
	}

}
int main() {
	input();
	BinarySearch();

}




	