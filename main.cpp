#include <iostream>

using namespace std;

int main()
{

	double angka1, angka2, angka3, angka4, max;

	cout << "program angka terbesar: \n";


	//input

	cout << "masukan angka pertama: \n";
	cin >> angka1;
	cout << "masukan angka kedua: \n";
	cin >> angka2;
	cout << "masukan angka ketiga: \n";
	cin >> angka3;
	cout << "masukan angka keempat: \n";
	cin >> angka4;


	//proses

	if (angka2 && angka3 && angka4 < angka1)
	{
		max = angka1;
	}
	else if (angka1 && angka3 && angka4 < angka2)
	{
		max = angka2;
	}
	else if (angka1 && angka2 && angka4 < angka3)
	{
		max = angka3;
	}
	else if (angka1 && angka2 && angka3 < angka4)
	{
		max = angka4;
	}
	//output 
	cout << "angka yang terbesar adalah = " <<  max << endl;


	system("pause");
		return 0;



}