#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
	double a;
	double b;
	double c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	double p = (a + b + c) / 2;
	double sq = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << std::fixed << std::setprecision(1) << sq << '\n';
	return 0;
}
