#include <iostream>
#include <cmath>
int main() {
		int m, t, s;
		std::cin >> m;
		std::cin >> t;
		std::cin >> s;
		if(t == 0) {
			std::cout << 0 << '\n';
			return 0;
		}
		int already = ceil(static_cast<double>(s) / t);
		int last = m - already;
		if(last < 0) {
			last = 0;
		}
		std::cout << last << '\n';
		return 0;
}
