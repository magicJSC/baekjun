#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,sum=0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		sum += s.length();
	}
	cout << sum;
	return 0;
}
