#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 200000;

int main() {
	int R[MAX], n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> R[i];

	int maxv = -200000000;
	int minv = R[0];

	for (int i = 1; i < n; i++) {
		maxv = max(R[i] - minv, maxv);
		minv = min(R[i], minv);
	}

	cout << maxv << endl;

	return 0;
}
