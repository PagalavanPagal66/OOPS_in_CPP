#include<bits/stdc++.h>
using namespace std;

int main() {
	//int* ptr = (int*)malloc(1 * sizeof(int));
	//int* ptr2 = (int*)calloc(1, sizeof(int));
	// calloc -> para1 = n , para2 = size of datatype
	// malloc -> para = total size
	// type casting to desired pointer value in important to segment the data blocks
	//cout << *ptr << endl;
	//cout << *ptr2 << endl;
	// ptr2 with initial 0 value due to calloc
	//free(ptr);
	// ptr2 = realloc(ptr2, 2 * sizeof(int));
	int *ptr, i , n1 = 10, n2 = 5;

	ptr = (int*) malloc(n1 * sizeof(int));

	// rellocating the memory
	ptr = (int*)realloc(ptr, n2 * sizeof(int));

	printf("Addresses of newly allocated memory:\n");
	for (i = 0; i < n2; ++i)
		printf("%pc\n", ptr + i);

	free(ptr);

	return 0;
}