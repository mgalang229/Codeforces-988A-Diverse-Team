#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, k;
	scanf("%d%d", &n, &k);
	set<int> el;
	vector<int> ans;
	for(int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		if(!el.count(x)) {
			ans.push_back(i + 1);
			el.insert(x);
		}
	}
	if(int(ans.size()) < k) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
		for(int i = 0; i < k; ++i) {
			printf("%d ", ans[i]);
		}
		printf("\n");
	}
}

int main() {
	test_case();
	return 0;
}
