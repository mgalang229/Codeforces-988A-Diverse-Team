#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void test_case() {
	int n, k;
	scanf("%d%d", &n, &k);
	set<int> el;
	vector<int> ans;
	for(int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		if(!el.count(x)) {
			ans.push_back(i);
			el.insert(x);
		}
	}
	if(int(ans.size()) < k) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
		for(int i = 0; i < k; ++i) {
			printf("%d ", ans[i] + 1);
		}
		printf("\n");
	}
}

int main() {
	//int T;
	//scand("%d", &T);
	//for(int nr = 1; nr <= T; nr++) {
		//test_case();
	//}
	test_case();
	return 0;
}
