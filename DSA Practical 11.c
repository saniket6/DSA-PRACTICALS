//This Program is made by Aniket Singh
#include <stdio.h>
int main(){
    printf("\nBubble Sort\n");
    printf("-----------\n");
	int n;
	printf("Enter the number of elements in Array\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements of Array:\n");
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	printf("The original lArray is:");
	for(int i = 0 ; i<n ; i++){
		printf(" %d", a[i]);
	}
	printf("\n");
	for(int i = 0 ; i < n-1 ; i++){ // n-1 times
		// n-1 times we need to do some work
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				// swap a[j] and a[j+1]
				 int temp = a[j];
				 a[j] = a[j+1];
				 a[j+1] = temp;

			}
		}

	}
	printf("The Elements of Array After Bubble Sort is:");
	for(int i = 0 ; i < n ; i++){
		printf(" %d", a[i]);
	}

	return 0;
	}
