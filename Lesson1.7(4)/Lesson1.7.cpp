/*�������� ��������, ��� ���������� ������� ������������ ������� ��� 
�� ������� ������ ����� � ���, �� ����������. 
���������, ���������� ��� 17 ���, �������� �� ������� �� ����� 2 ���� � 3 ��.*/

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