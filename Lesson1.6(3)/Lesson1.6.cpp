/*Написати програму, яка обчислює, з якою швидкістю бігун пробіг дистанцію. 
Рекомендований вигляд екрану під час виконання програми наведено нижче:
? Обчислення швидкості бігу;
? Введіть довжину дистанції (метрів) = 1000;
? Введіть час (мін. сек) = 3.25;
? Дистанція: 1000 м;
? Час: 3 хв 25 сек = 205 сек;
? Ви бігли зі швидкістю 17.56 км/год.*/

#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	float P, H, F, V;
	int C, M, S;
	cout << "- Obchuslenna svudkosti bigy:\n"
		<< "- Vvedit dovzeny dustansii (metriv)  = ";
	cin >> P;
	cout << "- Vvedit chas (min.sek) = ";
	cin >> H;
	C = H * 100;
	M = H;
	S = C % 100;
	V = M * 60 + S;
	F = (P / 1000) / (V / 3600);
	cout << "\n- Dustansia: " << P << " m\n"
		<< "- Chas: " << M << " min " << S << " sek = " << V << " sek\n"
		<< "- Vu biglu zi svidkisty " << fixed << setprecision(2) << F << " km/god\n";
}