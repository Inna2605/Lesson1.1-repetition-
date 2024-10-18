/* ќбчислити пройдену в≥дстань при пр€мол≥н≥йному р≥вноприскореному рус≥ 
за формулою S = v*t + (a*t2) / 2, де v Ч швидк≥сть, t Ч час, а Ч прискоренн€.*/

#include<iostream>
using namespace std;
int main() {
	float a, v, t, S;
	cout << "Svudkist v = ";
	cin >> v;
	cout << "Chas t = ";
	cin >> t;
	//a = v / t;
	//S = v*t + (v/t * t * t) = v*t + v*t = 2*v*t
	S = 2 * v * t;
	cout << "Vidstan S = " << S << endl;
}