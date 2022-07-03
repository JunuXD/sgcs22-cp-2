#include <stdio.h>

void swap(int*, int*);
void sort(int*, int);
void all_sort(int[][100], int, int);
int binary_search(int*, int*, int, int**);
int all_binary_search(int[][100], int, int, int, int**);

int main(void)
{
	int n, m, k;
	int arr[100][100];

	int* findPtr;

	int i, j;

	//input
	scanf("%d %d %d", &n, &m, &k);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	all_sort(arr, n, m);

	if (all_binary_search(arr, n, m, k, &findPtr)==0) {
		printf("0\n");
	}

    return 0;
}

void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int* a, int m) {
	int i, j;

	for (i = 0; i <= m - 1; i++) {
		for (j = (m - 1); j > i; j--) {
			if (*(a + j) < *(a + j - 1)) swap(a + j, a + j - 1);
		}
	}
}

void all_sort(int a[][100], int n, int m) {
	int i;

	for (i = 0; i < n; i++) {
		sort(a[i], m);
	}
}

int binary_search(int* a, int* endPtr, int key, int** findPtr) {
	int* b_ptr, * e_ptr, * m_ptr;

	int found = 1;

	b_ptr = a;
	e_ptr = endPtr;

	while (b_ptr <= e_ptr) {
		m_ptr = b_ptr + (b_ptr - e_ptr) / 2;

		if (key < *(m_ptr)) {
			e_ptr = m_ptr - 1;
		}
		else if (key > *(m_ptr)) {
			b_ptr = m_ptr + 1;
		}
		else {
			found = 1;
			(*findPtr) = m_ptr;
            break;
		}
	}
    return found;
}

int all_binary_search(int a[][100], int n, int m, int key, int** findPtr) {
	for (int i = 0; i < n; i++) {
		if (binary_search(a[i], &a[i][m], key, findPtr)) {
			printf("1\n%p\n", *findPtr);
			return 1;
		}
	}

	return 0;
}