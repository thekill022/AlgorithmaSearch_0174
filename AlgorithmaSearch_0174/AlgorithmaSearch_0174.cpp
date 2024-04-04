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

}

int main()
{
	
}
