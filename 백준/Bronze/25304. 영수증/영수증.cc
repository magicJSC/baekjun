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
	int x,n,a,b,sum = 0;
	cin >> x >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (x == sum)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}


