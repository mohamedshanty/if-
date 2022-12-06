#include<stdio.h>
#include<math.h>
//int main(){
//	
//	int a=0, sum=0;
//	
//	printf("enter number:");
//	scanf("%d",&a);
//	
//	sum=a/2;
//	
//	if(sum%2){
//		printf("odd");
//	}
//	else{
//		printf("even");
//	}
//}

//2.	Write C program to enter 5 marks from the user, then calculate the average of them, and check
// 100 -90 '  "Excellent"
//90-80 ' "Very Good"
//80-70 ' "Good" 
//70-60 ' "Accept"
//60 or less than ' "Failed"

//int main(){
//	int a, b , c , d , e , sum=0;
//	
//	printf("enter mark 1:");
//	scanf("%d",&a);
//	
//	printf("enter mark 2:");
//	scanf("%d",&b);
//	
//	printf("enter mark 3:");
//	scanf("%d",&c);
//	
//	printf("enter mark 4:");
//	scanf("%d",&d);
//	
//	printf("enter mark 5:");
//	scanf("%d",&e);
//	
//	sum=(a+b+c+d+e)/5;
//	
//	switch(sum/10){
//		case 9:
//			
//			printf("\n Excellent");
//			break;
//		
//		case 8:
//		 
//		    printf("\n Very Good");
//		    break;
//		    
//		case 7:
//		
//		    printf("\n Good");
//			break;
//			
//		case 6:
//		
//			printf("\n Accept");
//			break;
//			
//		default:
//			
//	       printf("\n Failed");
//	       break;	   
//			
//	}
//}


//3.	Write a C program to find maximum between two numbers



//int main (){
//	int a , b ;
//	
//	printf("Input num1:");
//	scanf("%d",&a);
//	
//	printf("Input num2:");
//	scanf("%d",&b);
//	
//	if(a>b){
//		printf("%d",a);
//	}

//	else{
//		printf("%d",b);
//	}
//}



//4.	Write a C program to find maximum between three numbers.


//int main(){
//	int a , b , c;
//	
//	printf("Input num1:");
//	scanf("%d",&a);
//	
//	printf("Input num2:");
//	scanf("%d",&b);
//	
//	printf("Input num3:");
//	scanf("%d",&c);
//	
//	if(a>b){
//	    if(a>c){
//	    	
//		    printf("The maximum is %d",a);
//	    }
//	}
//	
//	
//	if(b>a){
//	    if(b>c){
//	    	
//		    printf("The maximum is %d",b);
//	    }
//	}
//	
//	if(c>a){
//	    if(c>b){
//	    	
//		    printf("The maximum is %d",c);
//	    }
//	}
//}


//5.	Write a C program to check positive, negative or zero


//int main(){
//	int a;
//	
//	printf("Input num:");
//	scanf("%d",&a);
//	
//	if(a==0){
//		printf("%d is Zero",a);
//	}
//	
//	if(a>0){
//		printf("%d is positive",a);
//	}
//	
//	if(a<0){
//		printf("%d is negative",a);
//	}
//}


//6.	Write a C program to check whether a number is divisible by 5 and 11


//int main(){
//	int a;
//	
//	printf("Input num:");
//	scanf("%d",&a);
//	
//	if((a%5==0)&&(a%11==0)){
//			printf("Number is divisible by 5 and 11");
//	}
//	
//	else{
//        printf("Number is not divisible by 5 and 11");
//    }
//
//}


//7.	Write a C program to input a character from user and check whether the given character is alphabet or not using if else.

//int main() {
//    char c;
//    printf("Enter a character: ");
//    scanf("%c", &c);
//
//    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
//    	
//    	printf("%c is an alphabet.", c);
//    	
//	}
//        
//    else{
//    	
//        printf("%c is not an alphabet.", c);
//			
//	}
//    return 0;
//}


//8.	Write a C program to check whether an alphabet is vowel or consonant 

//int main() {
//    char c;
//    int lowercase_vowel, uppercase_vowel;
//    printf("Enter an alphabet: ");
//    scanf("%c", &c);
//
//    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//
//    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//
//    if (lowercase_vowel || uppercase_vowel){
//    	
//    	printf("%c is a vowel.", c);
//    	
//	}
//        
//    else{
//    
//        printf("%c is a consonant.", c);
//			
//	}a
//}


//9.	Write a C program to input a character from user and check whether given character is alphabet, digit or special character 


//int main()
//{
//    char ch;
//
//    printf("Enter any character: ");
//    scanf("%c", &ch);
//
//
//    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//    {
//        printf("'%c' is alphabet.", ch);
//    }
//    else if(ch >= '0' && ch <= '9')
//    {
//        printf("'%c' is digit.", ch);
//    }
//    else 
//    {
//        printf("'%c' is special character.", ch);
//    }
//
//    return 0;
//}


//10.	Write a program in C to read any Month Number in integer and display Month name in
//the word.(using switch case)


//int main(){
//	
//	int a;
//	
//	printf("Enter any number:");
//	scanf("%d",&a);
//	
//	switch(a){
//		
//		case 1:
//			printf("January");
//			break;
//			
//		case 2:
//			printf("Februay");
//			break;
//			
//		case 3:
//			printf("March");
//			break;
//			
//		case 4:
//			printf("April");
//			break;
//			
//		case 5:
//			printf("May");
//			break;
//			
//		case 6:
//			printf("June");
//			break;
//			
//		case 7:
//			printf("July");
//			break;
//			
//		case 8:
//			printf("August");
//			break;
//			
//		case 9:
//			printf("September");
//			break;
//			
//		case 10:
//			printf("October");
//			break;
//			
//		case 11:
//			printf("November");
//			break;
//			
//		case 12:
//			printf("December");
//			break;
//		
//		default:
//			printf("No any Month ");
//			break;
//	}
//}

//11.	Write a C program to input character from user and check whether character is uppercase or lowercase alphabet


//int main(){
//    char ch;
//
//    printf("Enter any character: ");
//    scanf("%c", &ch);
//
//
//    if(ch >= 'A' && ch <= 'Z')
//    {
//        printf("'%c' is uppercase alphabet.", ch);
//    }
//    else if(ch >= 'a' && ch <= 'z')
//    {
//        printf("'%c' is lowercase alphabet.", ch);
//    }
//    else
//    {
//        printf("'%c' is not an alphabet.", ch);
//    }
//
//}


//12.	Write a program by using switch case if user enter 11 it will have are area of circle and when user enter 22 it will have area of rectangle 
//and when user enter 33 it will give area of square when user enter 44 it will give area of triangle.
//int main(){

//   int choice;

//   printf("Enter \n 11 to find area of Triangle \n 22 for finding area of Square \n 33 for finding area of Circle \n 44 for finding area of Rectangle\n");
//   scanf("%d",&choice); 
//   
//   switch(choice) {
//   	
//      case 11: {
//         float radius,area;
//         printf("Enter Radius of Circle\n");
//         scanf("%f",&radius);
//         area=(float)3.14159*radius*radius;
//         printf("Area of Circle %f\n",area);
//         break;
//      }
//      
//      case 22: {
//         float len,breadth,area;
//         printf("Enter Length and Breadth of Rectangle\n");
//         scanf("%f %f",&len,&breadth);
//         area=(float)len*breadth;
//         printf("Area of Rectangle is %f\n",area);
//         break;
//      }
//      
//      case 33: {
//         float side,area;
//         printf("Enter Sides of Square\n");
//         scanf("%f",&side);
//         area=(float)side*side;
//         printf("Area of Square is %f\n",area);
//         break;
//      }
//      
//      case 44: {
//         int a,b,c;
//         float s,area;
//         printf("Enter sides of triangle\n");
//         scanf("%d%d %d",&a,&b,&c);
//         s=(float)(a+b+c)/2;
//         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
//         printf("Area of Triangle is %f\n",area);
//         break;
//      }
//      default: {
//         printf("Invalid Choice\n");
//         break;
//      }
//   }
//}

//13.	Write a C program to input cost price and selling price of a product and check profit or loss 


//int main()
//{
//    int cp,sp, amt; 
//    
//    printf("Enter cost price: ");
//    scanf("%d", &cp);
//    
//    printf("Enter selling price: ");
//    scanf("%d", &sp);
//    
//    if(sp > cp){
//        amt = sp - cp;
//        printf("Profit = %d", amt);
//    }
//    
//    else if(cp > sp){
//        amt = cp - sp;
//        printf("Loss = %d", amt);
//    }
//    
//    else{
//        printf("No Profit No Loss.");
//    }
//}



//14.	Write a C program to enter month number between(1-12) and print number of days in month using if else.


//int main()
//{
//    int month;
//
//    printf("Enter month number (1-12): ");
//    scanf("%d", &month);
//
//
//    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
//        printf("31 days");
//    }
//    
//    else if(month==4 || month==6 || month==9 || month==11){
//        printf("30 days");
//    }
//    
//    else if(month==2){
//        printf("28 or 29 days");
//    }
//    
//    else{
//        printf("Invalid input! Please enter month number between (1-12).");
//    }
//}

//15.	Write a C program to input week number(1-7) and print day of week name using switch case.


//int main()
//{
//   int dayno;
//   
//   printf("Input Day No : ");
//   scanf("%d",&dayno);
//   
//   switch(dayno){
//   	
//	case 1:
//	       printf("Monday \n");
//	       break;
//	       
//	case 2:
//	       printf("Tuesday \n");
//	       break;
//	       
//	case 3:
//	       printf("Wednesday \n");
//	       break;
//	       
//	case 4:
//	       printf("Thursday \n");
//	       break;
//	       
//	case 5:
//	       printf("Friday \n");
//	       break;
//	       
//	case 6:
//	       printf("Saturday \n");
//	       break;
//	       
//	case 7:
//	       printf("Sunday  \n");
//	       break;
//	       
//	default:
//	       printf("Invalid day number. \nPlease try again ....\n");
//	       break;
//      }
//}

//16.	Write a C program to input month number and print total number of days in month using switch...case


//int main()
//{
//    int month;
//
//    printf("Enter month number(1-12): ");
//    scanf("%d", &month);
//
//    switch(month)
//    {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12: 
//            printf("31 days");
//            break;
//
//        case 4:
//        case 6:
//        case 9:
//        case 11: 
//            printf("30 days");
//            break;
//
//        case 2: 
//            printf("28/29 days");
//            break;
//
//        default: 
//            printf("Invalid input! Please enter month number between 1-12");
//    }
//}


//17.	Write a C program to input an alphabet and check whether it is vowel or consonant using switch case.


//int main()
//{
//    char ch;
//
//    printf("Enter any character: ");
//    scanf("%c", &ch);
//
//    switch(ch){
//        case 'a': 
//        case 'e': 
//        case 'i':
//        case 'o':
//        case 'u':
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U': 
//            printf("Vowel");
//            break;
//
//        default: printf("Consonant");
//    }
//}


//18.	Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case


//int main()
//{
//    char op;
//    float num1, num2, result=0.0f;
//
//    printf("WELCOME TO SIMPLE CALCULATOR\n");
//    printf("----------------------------\n");
//    printf("Enter [number 1] [+ - * /] [number 2]\n");

//    scanf("%f %c %f", &num1, &op, &num2);
//
//    switch(op)
//    {
//        case '+': 
//            result = num1 + num2;
//            break;
//
//        case '-': 
//            result = num1 - num2;
//            break;
//
//        case '*': 
//            result = num1 * num2;
//            break;
//
//        case '/': 
//            result = num1 / num2;
//            break;
//
//        default: 
//            printf("Invalid operator");
//    }
//
//    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
//
//}
