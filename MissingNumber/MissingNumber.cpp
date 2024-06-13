#include <iostream>
#include <string>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    long num;
    cin >> num;

    long sum = 0;
    long requiredSum = (num * (num + 1)) / 2;

    int currNum;
    for (int i = 0; i < num - 1; i++) {
        cin >> currNum;
        sum += currNum;
    }

    cout << requiredSum - sum;

    return 0;

}
