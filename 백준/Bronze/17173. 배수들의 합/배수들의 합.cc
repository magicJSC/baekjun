#include <iostream>
#include<iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using std::find;
int main() {
	
	int a,b,sum=0;
	int num[1001] = {0,};
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int d;
		cin >> d;
		for (int j = 2; j <= a; j++) {
			if (j % d == 0)
				num[j] = j;
		}
	}
	for (int i = 2; i < 1001; i++) {
		sum += num[i];
	}
	cout << sum;
	return 0;
}
