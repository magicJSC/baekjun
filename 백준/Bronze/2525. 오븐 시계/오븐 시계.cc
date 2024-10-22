#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fastIo;
	int a,b,c,time;
	cin >> a >> b >> c;
	time = a * 60 + b + c;
	time = time % 1440;
	cout << time / 60 << " " << time % 60;
}