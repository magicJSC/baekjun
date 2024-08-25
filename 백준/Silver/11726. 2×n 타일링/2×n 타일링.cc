#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int arr[1005];

int main() {
	fastIo;
	int a;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	for (int i = 4; i <= 1000; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cin >> a;
	cout << arr[a];
	return 0;
}


