//
// Created by admin on 3/17/2024.
//
// 【看图写代码-快速排序（交换法+挖空法）】https://www.bilibili.com/video/BV1pd4y1z7gf?vd_source=dd0693a0880c6b173c9281441a6d9fc1
#include <bits/stdc++.h>
#define N 100010
using namespace std;
int n;
int a[N];

void quick_sort(int l, int r) {
    // 设置最右边的数为分界线
    int pivot = a[r];

    // 元素移动
    int k = l - 1;
    for (int j = l; j < r; ++j)
        if (a[j] < pivot) swap(a[j], a[++k]);
    swap(a[r], a[++k]);

    if (l < k - 1) quick_sort(l, k - 1); // 如果序列的分界线左边的子段长度>1，排序
    if (k + 1 < r) quick_sort(k + 1, r); // 如果序列的分界线右边的子段长度>1，排序
    // 上面的过程结束后，到这里左子段和右子段已经分别排好序。又因为确定分界线以后的移动操作
    // 保证了左子段中的元素都小于等于分界线，右子段中的元素都大于分界线。所以整个序列也是有序的。
}

int main() {
    // 输入
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);

    // 快速排序
    quick_sort(1, n);

    // 输出
    for (int i = 1; i <= n; ++i) printf("%d ", a[i]);
    return 0;
}

// 5 2 1 3 4 5
// 5 5 4 3 2 1