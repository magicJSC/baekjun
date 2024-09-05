#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


bool compare(int a, int b)
{
	return a < b;
}

int main() {
	fastIo;
	int a,sum1=0,sum2=0,score = 0;
	cin >> a;
	for (int j = 0; j < a; j++) {
		vector<int> v;
		for (int i = 0; i < 7; i++) {
			int b;
			cin >> b;
			v.push_back(b);
		}
		sum1 = max(v[0], v[1]);
		sort(v.begin()+2, v.end(), compare);
		sum2 = v[5] + v[6];
		if (score < sum1 + sum2)
		{
			score = sum1 + sum2;
		}
	}
	cout << score;
	return 0;
}


