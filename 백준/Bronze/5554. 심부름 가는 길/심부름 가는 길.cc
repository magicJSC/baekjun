#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
	fastIo;
	int a, b,c,d;
	cin >> a >> b>>c>>d;
	cout << (a + b + c + d) / 60 << "\n" << (a + b + c + d) % 60;

	return 0;
}




