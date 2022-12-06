#include<stdio.h>
#include <math.h>

//1.	Write a C program to print all natural numbers from 1 to n using loop. C program to print first n natural numbers using loop.


//int main()
//{
//    int i, end;
//
//    printf("Print all natural numbers from 1 to : ");
//    scanf("%d", &end);
//
//    i=1;
//    while(i<=end){
//    	
//        printf("%d\n", i);
//        i++;
//    }
//
//}

//2.	Write a C program to print all natural numbers in reverse from n to 1 using for loop.


//int main()
//{
//    int n;
//
//    printf("Enter value of n: ");
//    scanf("%d", &n);
//    
//    for(; n>=1 ; n--){
//    	printf("%d",n);
//	}
//
//}



//3.	Write a C program to print alphabets from a to z using for loop.

//int main()
//{
//    char ch = 'a';
//
//    printf("Alphabets from a - z are: \n");
//    
//    for(; ch<='z'; ch++){
//    	
//    	printf("%c\n",ch);
//	}
//    
//}



//4.	Write a C program to print all even numbers from 1 to n using for loop. 


//int main()
//{
//    int i, n;
//  
//    printf("Print all even numbers till: ");
//    scanf("%d", &n);
//
//    printf("Even numbers from 1 to %d are: \n", n);
//
//    for(i=1; i<=n; i++){
//    	
//        if(i%2 == 0){
//        	
//            printf("%d\n", i);
//        }
//    }
//
//}


//5.	Write a C program to print all odd numbers from 1 to n using for loop. 


//int main()
//{
//    int i, n;
//  
//    printf("Print all even numbers till: ");
//    scanf("%d", &n);
//
//    printf("Even numbers from 1 to %d are: \n", n);
//
//    for(i=1; i<=n; i++){
//    	
//        if(i%2 != 0){
//        	
//            printf("%d\n", i);
//        }
//    }
//
//}


//6.	Write a C program to find the sum of all natural numbers between 1 to n using for loop. 

//int main()
//{
//    int i, n, sum=0;
//
//    printf("Enter upper limit: ");
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        sum += i;
//    }
//
//    printf("Sum of first %d natural numbers = %d", n, sum);
//
//    return 0;
//}


//7.	Write a C program to input number from user and find sum of all even numbers between 1 to n


//int main()
//{
//    int i, n, sum=0;
//
//    printf("Enter upper limit: ");
//    scanf("%d", &n);
//
//    for(i=2; i<=n; i+=2)
//    {
//        
//        sum += i;
//    }
//
//    printf("Sum of all even number between 1 to %d = %d", n, sum);
//
//}


//8.	Write a C program to find sum of all odd numbers from 1 to n using for loop.


//int main()
//{
//    int i, n, sum=0;
//
//    printf("Enter upper limit: ");
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i+=2)
//    {
//        
//        sum += i;
//    }
//
//    printf("Sum of all even number between 1 to %d = %d", n, sum);
//
//}

//9.	Write a C program to input a number from user and print multiplication table of the given number using for loop.

//int main() {
//  int n, i;
//  
//  printf("Enter an integer: ");
//  scanf("%d", &n);
//  
//  for (i = 1; i <= 10; ++i) {
//  	
//    printf("%d * %d = %d \n", n, i, n * i);
//  }
//  
//}

//10.	Write a C program to input a number from user and count number of digits in the given integer using loop.


//int main()
//{
//    long long num;
//    int count = 0;
//
//    printf("Enter any number: ");
//    scanf("%lld", &num);
//
//    do{
//        count++;
//
//        num /= 10;
//    } while(num != 0);
//
//    printf("Total digits: %d", count);
//
//    return 0;
//}

//11.	Write a C program to input a number from user and find first and last digit of number using loop. 


//int main()
//{
//    int n, firstDigit, lastDigit, digits;
//
//    printf("Enter any number: ");
//    scanf("%d", &n);
//
//    lastDigit = n % 10;     
//
//    digits = (int)log10(n); 
//
//    firstDigit = (int)(n / pow(10, digits)); 
//
//    printf("First digit = %d\n", firstDigit);
//    printf("Last digit = %d\n", lastDigit);
//    
//    
//}


//12.	Write a C program to input a number and find sum of first and last digit of the number using for loop. 


//int main()
//{
//    int n, sum=0, firstDigit, lastDigit;
//    
//    printf("Enter number to find sum of first and last digit = ");
//    scanf("%d", &n);
//    
//    
//    lastDigit = n % 10;
//    
//    while(n >= 10)
//    {
//        n = n / 10;
//    }
//    firstDigit = n;
//    
//    
//    sum = firstDigit + lastDigit;
//    printf("Sum of first and last digit = %d", sum);
//}


//13.	Write a C program to input a number from user and swap first and last digit of the given number.


//int main()
//{
//    int num, swappedNum;
//    int firstDigit, lastDigit, digits;
//
//    printf("Enter any number: ");
//    scanf("%d", &num);
//
//    lastDigit  = num % 10;
//
//    digits     = (int)log10(num); 
//
//    firstDigit = (int)(num / pow(10, digits)); 
//
//    swappedNum  = lastDigit;
//    swappedNum *= (int) pow(10, digits);
//    swappedNum += num % ((int) pow(10, digits));
//    swappedNum -= lastDigit;
//    swappedNum += firstDigit;
//
//    printf("Original number = %d", num);
//    printf("\n Number after swapping first and last digit: %d", swappedNum);
//
//}

