#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	string s1, s2;
	while (true)
	{
		int h, m, d =0;
		cin >> s1 >> s2;
		h = std::stoi(s1.substr(0, 2)) + std::stoi(s2.substr(0, 2));
		m = std::stoi(s1.substr(3, 2)) + std::stoi(s2.substr(3, 2));
		if (h == 0 && m == 0)
			break;
		if (m >= 60)
		{
			m -= 60;
			h++;
		}
		if (h >= 24) {
			d = h / 24;
			h %= 24;
		}
		if (d > 0)
		{
			printf("%02d:%02d +%d\n", h, m, d);
		}
		else
			printf("%02d:%02d\n", h, m);
	}
	
	return 0;
}
