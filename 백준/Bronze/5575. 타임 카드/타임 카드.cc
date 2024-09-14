#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	for (int i = 0; i < 3; i++) {
		int h1, m1, s1, h2, m2, s2,num;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

		num = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
		
		cout << num / 3600 << " " << num % 3600 / 60 << " " << num % 60<<"\n";
	}
	

	return 0;
}




