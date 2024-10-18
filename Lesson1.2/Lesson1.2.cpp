/*За заданою довжиною окружності знайти площу кола за формулою S = pi* R2, 
радіус обчислити з формули довжини кола: L = 2*pi*R.
Примітка: pi = 3.14.*/

#include<iostream>
using namespace std;
int main() {
	double S, L, pi = 3.14;
	cout << "Vvedite dovzuny kola: ";
	cin >> L;
	//R = L / 2 * pi
	S = pi * ((L / (2 * pi)) * (L /(2 * pi)));
	cout << "Ploscha kola S = " << S << endl;
}