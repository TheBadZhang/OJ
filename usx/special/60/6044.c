#include <stdio.h>

int search (int* list, int size, int d) {
	int start = 0, end = size, mid;      // 二分搜索查找插入的位置
	while (start <= end) {
		mid = (start+end)/2;
		if (d <= list [mid]) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return start;
}

void moveRight (int* list, int size, int pos) {
	int i = size;                // 将数组pos位置及右边的元素，向右移动
	for (; i > pos; i--) {
		list [i] = list [i-1];
	}
}

void insert (int* list, int size, int i) {
	int pos = search (list, size, i);
	                             // 通过搜索得到插入的位置
	moveRight (list, size, pos);
								 // 移动数据并插入
	list [pos] = i;

}

void insertSort (int* list, int size) {
	int i, t;                   // 将后面的元素反复插入到前面已经排好序的数组里面
	for (i = 1; i < size; i ++) {
		t = list [i];           // 就可以得到一个全都有序的数组了
		insert (list, i, t);
	}
}

void print (int* list, int size) {
	int i;                     // 输出数组当前元素
	for (i = 0; i < size; i ++) {
		printf ("%3d", list [i]);
	}
	printf ("\n");
}
int main () {

	int list [100];
	int n, i;
	while (~scanf ("%d", &n)) {
		for (i = 0; i < n; i++) {    // 读入数据
			scanf ("%d", &list [i]);
		}
		// print  (list, n);
		insertSort (list, n);
		print  (list, n);
		scanf  ("%d", &i);
		insert (list, n, i);
		print  (list, n+1);
	}



	return 0;
}