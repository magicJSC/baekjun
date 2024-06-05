#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int fibo(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	int s1 =0,s2 =1;
	for (int i = 1; i < n; i++) {
		int c = s1;
		s1 = s2;
		s2 = c + s2;
	}
	return s2;
}

int main() {
	int n;
	cin >> n;
	int r = fibo(n);
	cout << r;
	return 0;
}
