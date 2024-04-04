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

	}
}

int main()
{
	
}
