#include<bits/stdc++.h>
using namespace std;

struct segtree {
	int n;
	vector<int> st;
	void fill(int _n) {
		this->n = _n;
		st.resize(4 * n, 0);
	}

	void buildst(int start, int end, int node, vector<int> &v) {
		if (start == end) {
			st[node] = v[start];
			return;
		}
		int mid = (start + end) / 2;
		buildst(start, mid, 2 * node + 1, v);
		buildst(mid + 1, end, 2 * node + 2, v);

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];
	}

	int queryst(int start, int end, int l, int r, int node) {
		if (start > r || end < l) {
			return 0;
		}
		if (start >= l && end <= r) {
			return st[node];
		}

		int mid = (start + end) / 2;

		int q1 = queryst(start, mid, l, r, 2 * node + 1);
		int q2 = queryst(mid + 1, end, l, r, 2 * node + 2);
		return q1 + q2;
	}

	void updatest(int start, int end, int node, int index, int value) {
		if (start == end) {
			st[node] = value;
			return;
		}
		int mid = (start + end) / 2;
		if (index <= mid) { updatest(start, mid, 2 * node + 1, index, value);}
		else {updatest(mid + 1, end, 2 * node + 2, index, value);}
		st[node] = st[node * 2 + 1] + st[node * 2 + 2];

		return;
	}

	void buildst(vector<int> &v) {
		buildst(0, n - 1, 0, v);
	}

	int queryst(int l, int r) {
		return queryst(0, n - 1, l, r, 0);
	}

	void updatest(int a, int b) {
		updatest(0, n - 1, 0, a, b);
	}
};




int main()
{
	vector<int> vec = {10,12,8,11,15,7,23,14,43,11,19,16,11,13};
	segtree st;
	st.fill(vec.size());
	st.buildst(vec);
	cout << st.queryst(0, 3) <<"\n\n"; //[10+12+8+11]
	cout << st.queryst(3, 8) <<"\n\n"; //[11+15+7+23+14+43]
	st.updatest(2, 25);
	cout << st.queryst(0, 3); //  [10+12+25+11]
	return 0;
}