#include <iostream>
using namespace std;

int arr[20]; //inisialisasi variabel arr sebagai variabel global untuk menampung isi data
int n; //inisialisasi variabel n sebagai variabel global untuk menentukan panjang data array
int i; //inisialisasi variabel i sebagai variabel global untuk menandai index dari array

void input() //membuat prosedur input
{
	while (true) //membuat looping untuk menentukan panjang element array
	{
		cout << "Inputkan berapa banyak element array yan ingin anda berikan : ";
		cin >> n;
		if (n > 0 && n <= 20) //membuat kondisi jika n > 0 dan n <=20
		{
			break;
		}
		else //membuat kondisi jika n > 0 dan n <= 20 tidak terpenuhi
		{
			cout << "\nMinimun Jumlah elemnt adalah 1 dan Maksimum Jumlah Element adalah 20\n" << endl;
		}
	}
	//display untuk menginputkan isi masing - masing element array
	cout << "\n======================\n";
	cout << "Inputkan Element Array\n";
	cout << "======================\n";

	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void linearSearch()  //membuat prosedur linearSearch
{
	char ch; //inisialisasi variabel char ch untuk pilihan lanjut atau tidaknya looping
	int ctr; //inisilisasi variabel ctr untuk melihat jumlah data dibandingkan
	int item; //inisilisasi variabel item untuk menginput data yang akan dicari

	//membuat looping untuk mencari element array menggunakan linear sort
	do
	{
		cout << "\nInputkan element yang ingin anda cari : "; //step 1
		cin >> item;

		ctr = 0; //mulai ctr dari 0 
		i = 0; //step 2

		while (i < n) //step 3
		{
			ctr++;//increment ctr
			if (arr[i] == item) //membuat kondisi jika data telah ditemukan
			{
				cout << "\n" << item << " ditemukan pada posisi ke " << (i + 1) << endl;
				break;
			}

		}


	} while (true);

}

int main()
{
	
}
