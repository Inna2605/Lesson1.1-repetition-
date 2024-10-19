/*Написати програму, яка перетворює введену користувачем кількість днів 
на кількість повних тижнів і днів, що залишилися. 
Наприклад, користувач ввів 17 днів, програма має вивести на екран 2 тижні і 3 дні.*/

#include<iostream>
using namespace std;
int main() {
	int D, t = 0, d = 0;
	cout << "Vedite kilkict dniv: ";
	cin >> D;
	t = D / 7;
	d = D - t * 7;
	cout << endl << D << " dniv = " << t << " tuzni ta " << d << " dni\n";
}