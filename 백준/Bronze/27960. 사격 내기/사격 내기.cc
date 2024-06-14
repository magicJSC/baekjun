#include <iostream>
#include<iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	
	int a,b;
	cin >> a>>b;
	int c = a ^ b;
	cout << c;
	return 0;
}
