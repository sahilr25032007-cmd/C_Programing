//#include<stdio.h>
//int main(){
  //  system("cls");
    //int a;
    //printf("Enter a number : \n");
    //scanf("%d",&a);
    //if(a>0){
      //  printf("the number is positive ");
    //}
    //else if(a<0){
      //  printf("the number is negative ");
    //}
    //else{
      //  printf("the number is zero ");
    //}
//return 0;
//}
//#include<stdio.h>
//int main(){
  //  system("cls");
    //char c;
    //printf("Enter a character: ");
    //scanf("%c",&c);
    //if(c=='a'||c=='e'||c=='i'||c=="o"||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
      //  printf("The character is a vowel");
    //}
    //else{
      //  printf("The character is a consonant");
    //}
 //return 0;    
//}
/*#include<stdio.h>
int main(){
    system("cls");
    int l,b,a,s;
    int choice;
    printf(" Enter 1 to calculate Area of rectangle\n");
    printf("Enter 2 to calculate Area of square\n");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the length of rectangle:");
        scanf("%d",&l);
        printf("Enter the breadth of rectangle:");
        scanf("%d",&b);
        a=l*b;
        printf("Area of Rectangle : %d",a);
}
    else if(choice==2){
        printf("Enter the side of square:");
        scanf("%d",&s);
        a=s*s;
        printf("Area of Square : %d",a);
    }
else{
        printf("Invalid choice");
    }

return 0;
}*/
/*#include<stdio.h>
main() {
int x , y ;
int n = 10;
x = n++;//x 10, n=11 value is assigned first then incremented
y = ++n;//y=12, n=11 value is incremented first then assigned
printf( " x = %d, y = %d\n", x , y ) ;
return 0;
}
*/

/*#include<stdio.h>
int main(){
  system("cls");
  int x =9;
  int y = (x>6)?4:6;
  printf("%d",y);

 return 0;
}
 */
/*
// to 
#include<stdio.h>
int main(){
int n = -1;
if(n){
  printf("True");
}
else{
  printf("False");
}
return 0;
}
*/
/*
#include<stdio.h>
int main(){  
  int hours=45;
  if(hours>40){
    printf("You will not get overtime pay %d \n",hours-40);
    
  }
  else{
    printf("You will not get overtime pay %d \n",hours);
  }
 
 return 0; 
  }
*/

/*#include<stdio.h>
int main(){
  int day;
  printf("Enter a number between 1 to 7 : \n");
  scanf("%d",&day);
  switch(day){
    case 1:
     ?> printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("Invalid input");
  }
 return 0; 
  }
 /*




#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

*/



/*
#include <stdio.h>
int main()
{
  int number;
  <if number<=0> ? <printf("The number is negative\n") : <printf("The number is positive\n")>


}

*/
/*
#include<stdio.h>
int main(){
  int day;
  printf("Enter a number between 1 to 7 : \n");
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
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("Invalid input");
  }
 return 0; 
  }
  */




 // WAP to demonstrate nested switch case
 /*
#include <stdio.h>

int main() {
    int mainChoice;  // Pretend user chose 1
    int subChoice;   // Pretend user chose 2
    printf("Enter 1st no. : \n");
    scanf("%d",&mainChoice);
    printf("Enter 2nd no. : \n"); 
    scanf("%d",&subChoice);
    switch (mainChoice) {
        case 1:
            switch (subChoice) {
                case 1:
                    printf("You chose %d \n",mainChoice);
                    break;
                case 2:
                    printf("You chose Option 1.2\n");
                    break;
                default:
                    printf("Invalid sub-option for main choice 1\n");
            }
            break;

        case 2:
            printf("Main choice 2 selected\n");
            break;

        default:
            printf("Invalid main choice\n");
    }

    return 0;
}
*/
// WAP to check whether a character is vowel or consonant
/*
#include<stdio.h>
int main(){
    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("the given alphabet %c is a vowel",ch);
            break;
        default: 
        printf("the given alphabet %c is a consonent",ch);
    }
    return 0;
}
*/
// WAP to demonstrate continue and break statement
/*
#include<stdio.h>
int main(){
  int n=10,i;
  for(i=0;i<=n;i++){
    if(i==5){
      continue;
   //break;
    }
    printf("%d\n",i);
  }
  return 0;
}
*/

//looping/iterative statements

//entry control 
//while
//for
// do while
//exit control



//WAP to print first 10 numbers
/*
#include<stdio.h>
int main(){
   int i=0;
   while(i<=10){
     printf("i=%d \n", i);
     i++;

  }

return 0;

 }
*/
// WAP TO PRINT EVEN NUMBERS BETWEEN 1 TO 10
/*
#include<stdio.h>
int main(){
  int i;
  for(i=1;i<=10;i++){
    if(i%2!=0){
      continue;
    }
    printf("%d\n",i);
  }
  return 0;
}
*/

//WAP to  print the even number between given range.
/*
#include<stdio.h>
int main(){
   int sp,ep,even;
   printf("Enter starting and ending point : ");
   scanf("%d%d",&sp,&ep);
   while(sp!=ep)
   {
      even = sp%2;
      if(even == 0)
      {
         printf("Even Number = %d",sp);
       }
      sp++;

    }
  return 0;
 }
*/
//WAP to point 1 to 5 but the given range is 1 to 10
/*
#include<stdio.h>
int main()
{
    int i = 1, n = 10;
    while(i != n)
    {
        printf("i=%d\n", i);
        if(i == 5)
            break;
        i++;
    }
return 0;
}
*/
// WAP to print the sum of first n natural numbers
/*
#include<stdio.h>
int main(){
  int n,i,sum=0;
  printf("Enter a number : ");
  scanf("%d",&n);
  while(n!=0){
    sum=sum+n;
    n--;
  }
  printf("The sum of first %d natural numbers is %d",n,sum);
  return 0;
}
*/
// WAP to print the reverse of a number
/*
#include<stdio.h>
int main(){
  int n,rev=0,rem;
  printf("Enter a number : ");
  scanf("%d",&n);
  while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  printf("The reverse of the number is %d",rev);
  return 0;
}
*/

// for loop has 3 parameters :- 
//syntax :- for(initialization;condition;increment/decrement)
// WAP to print first 'n' natural number.
/*
#include<stdio.h>
int main(){
  
  int n;
  int i=1; // initialization
  system("cls");
  printf("ENTER THE VALUE OF 'n' : ");
  scanf("%d",&n);
  for(;i<=n;i++){ // initialization i=1, condition i<=n, increment i++  
    // in for loop initialization can be  done  outside and incriment and dicriment operation can be done in body of for loop
   // instead of passing in parenthesis 
    printf("%d\n",i); 
  }
 sleep(10);
 printf("run the program again"); 
 return 0; 

}
*/
/*
#include<stdio.h>
int main(){
  system("cls");
  for(int i=0;i<3;i++){
    for(int j=0;j<=i;j++){
      printf("*");
    }
  printf("\n");
  }
return 0;  
}
*/
/*
#include<stdio.h>
int main(){
  system("cls");
  for(int i=1;i<4;i++){
    for(int j=1;j<=i;j++){
      printf("%d",j);
    }
  printf("\n");
  }
return 0;  
}
*/
/*
#include<stdio.h>
int main(){
  int a;
  system("cls");
  for(int i=1;i<4;i++){
    for(int j=1;j<=i+1;j++){
      printf("%d",j);
      a++;
    }
  printf("\n");
  }
return 0;  
}
*/
// WAP to print :-
// A
// B C
// D E F
/*
#include<stdio.h>
int main(){
  char a='A';
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%c",a);
      a++;
      
    }
  printf("\n");
  }
return 0;  
}
*/
/*
// WAP to print character pa  ttern :-
// A  
// B B
// C C C
#include<stdio.h>
int main(){
  char a='A';
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%c",a);
    
      
    }
    a++;
  printf("\n");
  }
return 0;  
}
*/
/*
// WAP to print number pattern :-
// 1
// 2 2
// 3 3 3
#include<stdio.h>
int main(){
  int a=1;
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%d",a);
      
      
    }
    a++;
  printf("\n");
  }
return 0;  
}
*/
/*
// WAP to print character pattern :-
// A  
// A B
// A B C
#include<stdio.h>
int main(){
  char a='A';
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%c",a);
     a++;
      
    }
  printf("\n");
  a='A';
  }
return 0;  
}
*/
/*
// WAP to print right angled triangle pattern :-
// *  
//  **
//   ***
#include<stdio.h>
int main(){
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf(" ");
    }
     for(int k=0;k<=i;k++){
      printf("*");
     }
    
  printf("\n");
    }
return 0;  
}
*/
// WAP to check the number is pallindrome 0r not?
/*
#include<stdio.h>
int main(){
   int n,orig,rev=0;
   int count;
   while(n!=0){
    count++;

   }


  return 0;
}

*/
/*
// WAP to check the number is armstrong number or not
#include<stdio.h>
int main(){
   int n,rem,res=0;
   int count,n1;
   while(n!=0){
    rem = n%10;
    res = res+(pow(rem,count));
    n/=10;

   }
   if(res==n1){
    printf("%d",res);
   }
   else{
       printf("34");
   }
  return 0;
}

*/
/*
// WAP to print last and first digit of a number
#include<stdio.h>
int main(){
    int n,fd,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10){
      n=n/10;
    }
    fd=n;
    printf("First digit is %d and \n last digit is %d",fd,ld);


  return 0;
}

*/
// WAP to print sum of first and last digit of a number
/*
#include<stdio.h>
int main(){
  
   int n,l,f,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    l=n%10;
   while(n>=10){
    n=n/10;

   }
   f=n;
   sum=f+l;
  printf("The sum of first and last digit is %d",sum);

  return 0;
}

*/
/*
// WAP to swap first and last digit of a number
#include<stdio.h>
int main(){
  
   int n,l,f,s;
    printf("Enter a number : ");
    scanf("%d",&n);
    l=n%10;
   while(n>=10){
    n=n/10;

   }
   f=n;
  s=n;
  n=f;
  f=s;
  printf("The swap of first and last digit is %d and %d",f,l);


  return 0;
}
*/
// WAP TO PRINT THE FACTORS OF A NUMBER
/*
#include<stdio.h>
int main(){
  int n,i;
  printf("Enter a number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){ 
    if(n%i==0){
      printf("%d\n",i);
    }
  }
  return 0;
}
*/
// WAP TO PRINT THE  FACTORIAL of a number
/*
#include<stdio.h>
int main(){
  int n,i,fact=1;
  printf("Enter a number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){ 
  
      fact=fact*i;
    
  }
  printf("The factorial of %d is %d",n,fact);
  return 0;
}

*/
// WAP TO PRINT THE FIBONACCI SERIES upto given number/range and print first "n" fabonacci series 
/*
#include<stdio.h>
int main(){
   int  n=0,i,next=0,n1=1,m;
   printf("Enter a number : ");
   scanf("%d",&m);
   while(n<=m){
    n=n1;
    n1=next;
    next=n+n1;
    printf("%d\n",next);
   }

  return 0;
}
*/
/*
// WAP TO PRINT THE FIBONACCI SERIES upto given number/range and print first "n" fabonacci series
#include<stdio.h>
int main(){
  int n1=0,n2=1,next,n,i;
  printf("Enter a number : ");
  scanf("%d",&n);
  printf("%d\n%d\n",n1,n2);
  for(i=2;i<n;i++){
    next=n1+n2;
    printf("%d\n",next);
    n1=n2;
    n2=next;
  }
  return 0;
}
  */
/*
// WAP to demonstrate call by value and call by reference
// this is call by value
  #include<stdio.h>
  void swap(int x,int y){
    printf("Before swapping  x is %d and y is %d\n",x,y);
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping  x is %d and y is %d\n",x,y);
  }
int main(){
  int a,b;
  printf("Enter two numbers : \n");
  scanf("%d%d",&a,&b);
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(a,b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
return 0;
}
*/
/*
// this is call by reference
  #include<stdio.h>
  void swap(int *x,int *y){
    printf("Before swapping  x is %d and y is %d\n",*x,*y);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping  x is %d and y is %d\n",*x,*y);
  }
int main(){
  int a,b;
  printf("Enter two numbers : \n");
  scanf("%d%d",&a,&b);
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(&a,&b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
return 0;
}
*/
/*
// call by value
// WAP to demonstrate call by value

#include<stdio.h>
void swap(int x,int y);
int main(){
  int a=5,b=7;
  
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(a,b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
  printf("After Swapping, a is %d and b is %d\n",b,a);
return 0;
}
void swap(int x,int y){
    printf("Before swapping  x is %d and y is %d\n",x,y);
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping  x is %d and y is %d\n",x,y);
  }
  */
 /*
 // call by reference
 // WAP to demonstrate call by reference
 // swap function to swap two numbers
 // using call by reference method
 // pointer variables are used to achieve call by reference
#include<stdio.h>
void swap(int *x,int *y){
    printf("Before swapping  x is %d and y is %d\n",*x,*y);
    int temp=*x;
    *x=*y;
   *y=temp;
    printf("After swapping  x is %d and y is %d\n",*x,*y);
  }
int main(){
  system("cls");
  int a=5,b=7;
  
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(&a,&b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
  printf("After Swapping, a is %d and b is %d\n",b,a);
return 0;
}
*/
// Recussion : A functoin calling itself is known as recussion function
/*
#include<stdio.h>
void rev(int x);
int main(){

  rev(5);
  return 0;
}
 void rev(int x){
  if(x==0){
    printf("%d",x);
    rev(x-1);
  }
  
 }
 // forms selector CSS
*/
// WAP to check the year is leap year or not Q1
/*
#include<stdio.h>
int main(){
  int y;
  printf("Enter a year : ");
  scanf("%d",&y);
  if((y%4==0 && y%100!=0) || (y%400==0)){
    printf("The year is a leap year");
  }
  else{
    printf("The year is not a leap year");
  }
  return 0;
}
  */
// WAP to calculate the LCM and GCD of given input values Q2
/*
#include<stdio.h>
int main(){
  int a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);
  if(() && ()){

  }
  for(int i=1;;i++){
    printf("no. : %d",i);
  }

  return 0;
}
*/
// ARRAY is a collection of homogenous elements -> (similar type) 
/*
#include<stdio.h>
# define MAXSIZE 100
int main(){    
  system("cls"); 
     int size;
     printf("Enter the size of array : ");
     scanf("%d",&size); 
      int arr[size];
     printf("Enter %d elements in array : \n",size);
     for(int i=0;i<size;i++){
     scanf("%d",&arr[i]);
     }
     printf("The elements of array are : \n");     
      for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
      }
  return 0;

}
  */
 // WAP to insert an element in an array at a spcific position.
/*
 #include<stdio.h>
 int main(){
   system("cls"); 
     int size;
     printf("Enter the size of array : ");
     scanf("%d",&size); 
      int arr[size];
     printf("Enter %d elements in array : \n",size);
     for(int i=0;i<size;i++){
     scanf("%d",&arr[i]);
     }
     printf("The elements of array are : \n");     
      for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
      }
 // insert element at specific position     
 int n,pas;
 printf("Enter the new element & position : ");
 scanf("%d %d",&n,&pas);
 if (pas>size||pas<=0){
  printf("Invalid position");
 }
 else{
   for(int i=size;i>=pas-1;i--){
    arr[i]=arr[i-1];
    // incomplete
   }

  }
   arr[pas-1]=n;
   size++;
   printf("The elements of array after insertion are : \n");     
      for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
      }
  return 0;
 }
*/




// WAP to handle 2D array (matrix) till line 963
/*
 #include<stdio.h>
 int main(){
   system("cls"); 
     int size1,size2;
     printf("Enter the no. of rows and columns of Matrix : ");
     scanf("%d %d",&size1,&size2); 
      int mat[size1][size2];
     printf("Enter %d elements in array : \n",size1*size2);
     for(int i=0;i<size1;i++){
     for(int j=0;j<size2;j++){ 
    printf("Enter element at position [%d][%d] : ",i,j);
     scanf("%d",&mat[i][j]);
     }
     }
     printf("The elements of array are : \n");     
      for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
        printf("%d ",mat[i][j]);
        }
        printf("\n");
      }
      */
 // insert element at specific position   
 /*  
 int n,pas;
 printf("Enter the new element & position : ");
 scanf("%d %d",&n,&pas);
 if (pas>size||pas<=0){
  printf("Invalid position");
 }
 else{
   for(int i=size;i>=pas-1;i--){
    mat[i]=mat[i-1];
    // incomplete
   }

  }
   mat[pas-1]=n;
   size++;
   printf("The elements of array after insertion are : \n");     
      for(int i=0;i<size;i++){
        printf("%d\n",mat[i]);
      }
        
  return 0;
 }
*/




/*
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number <= 0) ? printf("The number is negative\n") : printf("The number is positive\n");

    return 0;
}
*/
/*
// WAP to demonstrate continue and break statement
// in case of continue statement the control goes to the next iteration of the loop
// in case of break statement the control comes out of the loop
#include<stdio.h>
int main(){
  int n=10,i;
  for(i=0;i<=n;i++){
    if(i==5){
      continue;
      //break;
    }
    printf("%d\n",i);
  }
  return 0;
}
*/


