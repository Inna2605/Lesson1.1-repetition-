/*Написати програму, яка перетворює введене з клавіатури дробове число на грошовий формат. 
Наприклад, число 12,5 має бути перетворено так: 12 грн 50 коп.*/

#include<iostream>
using namespace std;
int main() {
	float D;
	int C, g, k;
	cout << "Vvedite drobne chuslo: ";
	cin >> D;
	C = D * 100;
	g = D;
	k = C % 100;
	cout << "Maemo " << g << " grn " << k << " kop\n";
}