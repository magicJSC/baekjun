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
	int h, m, s, add;
	cin >> h >> m >> s >> add;
	if (add % 60 + s >= 60)
		m++;
	if ((add % 3600 / 60 + m) >= 60)
		h++;
	cout << (add / 3600 + h) % 24 << " " << (add / 60 + m) % 60 << " " << (add + s) % 60;

	return 0;
}


