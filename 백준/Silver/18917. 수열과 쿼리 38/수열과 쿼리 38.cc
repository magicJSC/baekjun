#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long m;
    cin >> m;
    vector<int>A;
    long long sum = 0;
    long long ret = 0;
    for (int i = 0; i < m; i++)
    {
        int query;
        cin >> query;
        switch (query) {
        case 1:
            int input1;
            cin >> input1;
            sum += input1;
            ret ^= input1;
            break;
        case 2:
            int input2;
            cin >> input2;
            sum -= input2;
            ret ^= input2;
            break;
        case 3:
            cout << sum << "\n";
            break;
        case 4:
            cout << ret << "\n";
            break;
        }


    }

}