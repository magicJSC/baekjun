#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) { 
		string s;
		cin >> s;
		if (s == "Algorithm") {
			cout << "204" << "\n";
		}
		else if (s == "DataAnalysis") {
			cout << "207" << "\n";
		}
		else if (s == "ArtificialIntelligence") {
			cout << "302" << "\n";
		}
		else if (s == "CyberSecurity") {
			cout << "B101" << "\n";
		}
		else if (s == "Network") {
			cout << "303" << "\n";
		}
		else if (s == "Startup") {
			cout << "501" << "\n";
		}
		else if (s == "TestStrategy") {
			cout << "105" << "\n";
		}
	}
	return 0;
}


