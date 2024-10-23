#include <stdio.h>
#include <stdlib.h>

#define MAX_STONE_NUM 20
#define MAX_PILE_WEIGHT 100000
#define PACK_SIZE (MAX_STONE_NUM * 4)

void buildSegmentTree(int tree[], int piles[], int start, int end, int node);
int querySegmentTree(int tree[], int start, int end, int node, int left, int right);

int main() {
    int n, piles[MAX_STONE_NUM], totalWeight = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &piles[i]);
        totalWeight += piles[i];
    }

    int tree[PACK_SIZE];
    buildSegmentTree(tree, piles, 1, n , 1);

    int halfWeight = totalWeight / 2;
    int result = totalWeight - 2 * querySegmentTree(tree, 1, n , 1, 0, halfWeight);
    printf("%d\n", result);

    return 0;
}

void buildSegmentTree(int tree[], int piles[], int start, int end, int node) {
    if (start == end) {
        tree[node] = piles[start];
        return;
    }
    int mid = (start + end) / 2;
    buildSegmentTree(tree, piles, start, mid, 2 * node);
    buildSegmentTree(tree, piles, mid + 1, end, 2 * node + 1);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int querySegmentTree(int tree[], int start, int end, int node, int left, int right) {
    if (left > end || right < start)
        return 0;
    if (left <= start && right >= end)
        return tree[node];
    int mid = (start + end) / 2;
    int sumLeft = querySegmentTree(tree, start, mid, 2 * node, left, right);
    int sumRight = querySegmentTree(tree, mid + 1, end, 2 * node + 1, left, right);
    return sumLeft + sumRight;
}
