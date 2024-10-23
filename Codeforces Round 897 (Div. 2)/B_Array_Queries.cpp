#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <limits.h>

using namespace std;

#define ll long long
#define   all(x)          (x).begin(), (x).end()

// Define Node1 and Update1 as you did before

template<typename Node, typename Update>
struct SegTree {
	vector<Node> tree;
	vector<ll> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<ll> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
			s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
		if (start == end)	{
			tree[index] = Node(arr[start]);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
		if (start == end) {
			u.apply(tree[index]);
			return;
		}
		int mid = (start + end) / 2;
		if (mid >= query_index)
			update(start, mid, 2 * index, query_index, u);
		else
			update(mid + 1, end, 2 * index + 1, query_index, u);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
			return Node();
		if (start >= left && end <= right)
			return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, ll val,int left,int right,int n) {  // pass in as many parameters as required
		Update new_update = Update(val); // may change
        update(left, (left + right) / 2, n * 2);
		//update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
		return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
	ll val; // may change
	Node1() { // Identity element
		val = 0;	// may change
	}
	Node1(ll p1) {  // Actual Node
		val = p1; // may change
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = l.val ^ r.val;  // may change
	}
};

struct Update1 {
	ll val; // may change
	Update1(ll p1) { // Actual Update
		val = p1; // may change
	}
	void apply(Node1 &a) { // apply update to given node
		a.val = val; // may change
	}
};
int main() {
	int t;
	scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		int n;
		int qs;
		int x;
		int y;

		scanf("%d", &n);
		scanf("%d", &qs);

		vector<ll> a(n + 1);

		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
		}

		SegTree<Node1, Update1> segtree(n, a);

		printf("Case %d:\n", cs);

		for (int i = 0; i < qs; i++) {
			scanf("%d", &x);
			scanf("%d", &y);

			// Use make_query method from segtree
			Node1 result = segtree.make_query(x, y);

			// Print the result
			printf("%lld\n", result.val);
		}
	}

	return 0;
}
