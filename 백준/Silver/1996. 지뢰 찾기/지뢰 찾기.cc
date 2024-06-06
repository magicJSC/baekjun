#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	vector<vector<string>> v(1000, std::vector<string>(1000, "0"));
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < a; j++) {
			string c = s.substr(j,1);
			if (c != ".")
			{
				v[j][i] = "*";

				if (i > 0 && v[j][i - 1] != "*" && v[j][i - 1] != "M")
				{
					int value = stoi(c) + stoi(v[j][i - 1]);
					if (value < 10)
						v[j][i - 1] = to_string(value);
					else
						v[j][i - 1] = "M";
				}
				if (i < a - 1 && v[j][i + 1] != "*" && v[j][i + 1] != "M")
				{
					int value = stoi(c) + stoi(v[j][i + 1]);
					if (value < 10)
						v[j][i + 1] = to_string(value);
					else
						v[j][i + 1] = "M";
				}
				if(j > 0 && v[j -1][i] != "*" && v[j - 1][i] != "M")
				{
					int value = stoi(c) + stoi(v[j-1][i]);
					if (value < 10)
						v[j-1][i] = to_string(value);
					else
						v[j-1][i] = "M";
				}
				if (j < a-1 && v[j+1][i] != "*" && v[j + 1][i] != "M")
				{
					int value = stoi(c) + stoi(v[j+1][i]);
					if (value < 10)
						v[j+1][i] = to_string(value);
					else
						v[j+1][i] = "M";
				}
				if (j > 0 && i>0 && v[j - 1][i-1] != "*" && v[j - 1][i - 1] != "M")
				{
					int value = stoi(c) + stoi(v[j-1][i-1]);
					if (value < 10)
						v[j-1][i-1] = to_string(value);
					else
						v[j-1][i -1] = "M";
				}
				if (j < a-1 && i < a-1 && v[j + 1][i + 1] != "*" && v[j + 1][i + 1] != "M")
				{
					int value = stoi(c) + stoi(v[j+1][i + 1]);
					if (value < 10)
						v[j+1][i + 1] = to_string(value);
					else
						v[j+1][i + 1] = "M";
				}
				if (j < a-1 && i > 0 && v[j + 1][i - 1] != "*" && v[j + 1][i - 1] != "M")
				{
					int value = stoi(c) + stoi(v[j+1][i - 1]);
					if (value < 10)
						v[j+1][i - 1] = to_string(value);
					else
						v[j+1][i - 1] = "M";
				}
				if (j > 0 && i < a-1 && v[j - 1][i + 1] != "*" && v[j - 1][i + 1] != "M")
				{
					int value = stoi(c) + stoi(v[j-1][i + 1]);
					if (value < 10)
						v[j-1][i + 1] = to_string(value);
					else
						v[j-1][i + 1] = "M";
				}
			}
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << v[j][i];
		}
		cout << "\n";
	}
	return 0;
}
