/*�������� ��������, ��� ���������� ������� � ��������� ������� ����� �� �������� ������. 
���������, ����� 12,5 �� ���� ����������� ���: 12 ��� 50 ���.*/

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