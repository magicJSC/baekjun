#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int a,sum =0;
	cin >> a;
	for (int i = a; i > 0; i--){
		sum += i;
	}
	cout << sum;
	return 0;
}