#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() {
	int a1,b1,a2,b2,r=0,g=0,b=0;
	char c;
	cin >> a1 >> b1;
	for (int i = 0; i < a1; i++) {
		cin >> a2 >> b2;
	}
	for (int i = 0; i < b1; i++) {
		cin >> a2 >> b2 >> c;
		switch (c)
		{
		case 'R':
			r++;
			break;
		case 'G':
			g++;
			break;
		case 'B':
			b++;
			break;
		}
	}

	//nah가 빨간선을 먼저 자를때
	if (g % 2 == 0) {
		if (r > b)
			cout << "jhnah917";
		else
			cout << "jhnan917";
	}
	else { //nan이 파란선을 먼저 자를때
		if (b > r)
			cout << "jhnan917";
		else
			cout << "jhnah917";
	}


	return 0;
}
