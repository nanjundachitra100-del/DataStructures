#include <stdio.h>
#include <stdlib.h>
	
	int main() {
	    int i, n;
	
	    printf("Enter the size of the array: ");
	    scanf("%d", &n);
	
	    int *ptr = (int *)malloc(n * sizeof(int));

	    if (ptr == NULL) {
	        printf("Memory allocation failed\n");
	        exit(1);
	    }
	
            for (i = 0; i < n; i++) {
	        printf("Enter the %d number: ", i + 1);
	        scanf("%d", ptr + i);
	    }
	
	    printf("Array elements are:\n");
	
	    for (i = 0; i < n; i++) {
	        printf("%d ", *(ptr + i));
	    }
	
	    free(ptr);
	
	    return 0;
	}