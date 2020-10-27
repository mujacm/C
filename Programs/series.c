/* Problem: Print the following series:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
