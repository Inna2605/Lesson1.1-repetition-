/*. ���������� ������� � ��������� ��� � ��������. 
��������� �������� ��������, ��� �������� ������ ������������ ������� 
� ������, �������, ������� � �������� �� �� �����.*/

#include<iostream>
using namespace std;
int main() {
	int S, s = 0, m = 0, h = 0;
	cout << "Vvedite chas y sekyndah S = ";
	cin >> S;
		h = S / 3600;
		m = (S - (h * 3600)) / 60;
		s = (S - (h * 3600)) - (m * 60);
		cout << S << "sek = " << h << "god " << m << "min " << s << "sek\n";
}