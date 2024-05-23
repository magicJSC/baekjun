#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	int a,b,max,result=0;
	vector<int> v;
	cin >> a;
	cin >> max;
	for (int i = 0; i < a; i++) {
		cin >> b;
		v.push_back(b);
	}

	for (int i = 0; i < v.size() - 2; i++) {
		if (result == max)
			break;
		for (int j = i+1; j < v.size(); j++) {
			if (v[i] + v[j] > max)
				continue;
			for (int o = j + 1; o < v.size(); o++) {
				int sum = v[i] + v[j] + v[o];
				if (sum <= max && result < sum)
					result = sum;
			}
		}
	}

	cout << result;
	return 0;
}
