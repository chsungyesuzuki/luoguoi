#include <iostream>
#include <cmath>
namespace P2433 {
void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void q8();
void q9();
void q10();
void q11();
void q12();
void q13();
void q14();
constexpr double circumf(short);
constexpr double square(short);
constexpr double volume(short);
}
using namespace P2433;
int main() {
	short questionn;
	std::cin >> questionn;
	switch (questionn) {
		case 1:
		q1();
		break;
		case 2:
		q2();
		break;
		case 3:
		q3();
		break;
		case 4:
		q4();
		break;
		case 5:
		q5();
		break;
		case 6:
		q6();
		break;
		case 7:
		q7();
		break;
		case 8:
		q8();
		break;
		case 9:
		q9();
		break;
		case 10:
		q10();
		break;
		case 11:
		q11();
		break;
		case 12:
		q12();
		break;
		case 13:
		q13();
		break;
		case 14:
		q14();
		break;
	}
	return 0;
}
void P2433::q1() {
	std::cout << "I love Luogu!" << '\n';
}
void P2433::q2() {
	std::cout << 6 << ' ';
	std::cout << 4 << '\n';
}
void P2433::q3() {
	std::cout << 3 << '\n';
	std::cout << 12 << '\n';
	std::cout << 2 << '\n';
}
void P2433::q4() {
	std::cout << 166.667 << '\n';
}
void P2433::q5() {
	std::cout << 15 << '\n';
}
void P2433::q6() {
	std::cout << sqrt(117) << '\n';
}
void P2433::q7() {
	std::cout << 110 << '\n';
	std::cout << 90 << '\n';
	std::cout << 0 << '\n';
}
constexpr double pi = 3.141593;
constexpr double P2433::circumf(short r) {
	return 2 * pi * r;
}
constexpr double P2433::square(short r) {
	return pi * r * r;
}
constexpr double P2433::volume(short r) {
	return 4 * pi * r * r * r / 3;
}
void P2433::q8() {
	std::cout << circumf(5) << '\n';
	std::cout << square(5) << '\n';
	std::cout << volume(5) << '\n';
}
void P2433::q9() {
	std::cout << 22 << '\n';
}
void P2433::q10() {
	std::cout << 9 << '\n';
}
void P2433::q11() {
	std::cout << 100.0 / 3 << '\n';
}
void P2433::q12() {
	std::cout << 13 << '\n';
	std::cout << 'R' << '\n';
}
void P2433::q13() {
	double vs = volume(4) + volume(10);
	int ans = floor(cbrt(vs));
	std::cout << ans << '\n';
}
void P2433::q14() {
	std::cout << 50 << '\n';
}
