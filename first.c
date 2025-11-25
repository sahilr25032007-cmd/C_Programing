/* #include <stdio.h>
 int main()
{
    int day;
    printf("Enter day number(1-7): \n");
    scanf("%d",&day);
    switch(day){
        case 1: 
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break ;
        case 4 :
        printf("Thrusday");
        break ;
        case 5 :
        printf("Friday");
        break ;
        case 6 :
        printf("Saturday"); 
*/
//wap to print the even number blw given range 
#include <stdio.h>

int main() {
    int start, end, i;

    // Taking input
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are:\n", start, end);

    // Adjust start if it's odd
    if (start % 2 != 0) {
        start++;
    }

    // Loop to print even numbers
    for (i = start; i <= end; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
