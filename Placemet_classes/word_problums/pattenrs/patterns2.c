Problem Statement:
A nursery labels seedling trays in a triangular display rack. Given N rows, print a pyramid in which 
each row carries the tray numbers for that row, continuing the count from the previous row. Row 1 
holds tray 1, row 2 holds trays 2 and 3, row 3 holds trays 4, 5 and 6, and so on. Each row is 
preceded by N minus the row number spaces, and the numbers within a row are separated by 
single spaces.
After the pyramid, print the total tray count.
Examples:
Example 1. For N = 3, row 1 holds 1, row 2 holds 2 and 3, and row 3 holds 4, 5 and 6. The total is 
6 trays. The count does not restart at each row.
Example 2. For N = 4, the last row holds 7, 8, 9 and 10, and the total is 10. Notice that the rows 
are no longer visually centred once the numbers reach two digits, because the space count is per 
row rather than per printed character. That is the specified behaviour.
Example 3. For N = 1, the output is a single row containing 1, with no leading spaces, and a total of 1.

include <stdio.h>
2	
3	int main() {
4	
5	    int n;
6	
7	    printf("Enter the no. of rows: ");
8	    scanf("%d", &n);
9	
10	
11	    int x=1;
12	    for(int i = 1; i <= n; i++) {//control rows
13	
14	        // spaces
15	        for(int j = 1; j <= n-i; j++) {
16	            printf(" ");
17	        }
18	
19	        // print number
  
20	        for(int j = 1; j <= 2*i-1; j++) {
21	            printf("%d",x);
22	            x++;
23	        }
24	
25	        printf("\n");
26	    }
27	    printf("Total no. of trays %d",n*(n+1)/2);
28	    return 0;
29	}
