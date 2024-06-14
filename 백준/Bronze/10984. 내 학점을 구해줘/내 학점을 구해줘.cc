#include <iostream>
#include<iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		float b,avg=0;
		int sum=0;
		cin >> b;
		for (int j = 0; j < b; j++) {
			float c, d;
			cin >> c >> d;
			sum += c;
			avg += d * c;
		}
		cout<<showpoint<< sum << " "<<setprecision(2) << avg / sum<<"\n";
	}
	
	return 0;
}
