#include <stdio.h>
2	#include <stdlib.h>
3	
4	int main() {
5	    int i, n;
6	
7	    printf("Enter the size of the array: ");
8	    scanf("%d", &n);
9	
10	    int *ptr = (int *)malloc(n * sizeof(int));
11	
12	    if (ptr == NULL) {
13	        printf("Memory allocation failed\n");
14	        exit(1);
15	    }
16	
17	    for (i = 0; i < n; i++) {
18	        printf("Enter the %d number: ", i + 1);
19	        scanf("%d", ptr + i);
20	    }
21	
22	    printf("Array elements are:\n");
23	
24	    for (i = 0; i < n; i++) {
25	        printf("%d ", *(ptr + i));
26	    }
27	
28	    free(ptr);
29	
30	    return 0;
31	}