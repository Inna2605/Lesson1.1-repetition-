/* ����� ��� ����� R1, R2, R3. 
��������� �������� ����� R0 �� ��������: 1/R0 = 1/R1+1/R2+1/R3.
����������� �������: R1=2, R2=4, R3=8 R0 = 1.142857*/

#include<iostream>
#include <iomanip>//��� ����������� ������ ����� cout ����� double 
using namespace std;
int main() {
	double R1 = 2, R2 = 4, R3 = 8, R0;
	R0 = (R1 * R2 * R3) / ((R2 * R3) + (R1 * R3) + (R2 * R1));
	printf ("R0 = %.6lf",  R0) ;//%.6lf ���������� ��� ������ ����� printf ����� double
	cout<<"\nR0 = "<< fixed << setprecision(6) << R0 << endl;//������ � ���������� ������ - `fixed`
}