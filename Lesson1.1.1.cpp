/* Задані три опори R1, R2, R3. 
Обчислити значення опору R0 за формулою: 1/R0 = 1/R1+1/R2+1/R3.
Контрольний приклад: R1=2, R2=4, R3=8 R0 = 1.142857*/

#include<iostream>
#include <iomanip>//для модіфікатора виводу через cout числа double 
using namespace std;
int main() {
	double R1 = 2, R2 = 4, R3 = 8, R0;
	R0 = (R1 * R2 * R3) / ((R2 * R3) + (R1 * R3) + (R2 * R1));
	printf ("R0 = %.6lf",  R0) ;//%.6lf модіфікатор для виводу через printf числа double
	cout<<"\nR0 = "<< fixed << setprecision(6) << R0 << endl;//формат з фіксованой точкой - `fixed`
}