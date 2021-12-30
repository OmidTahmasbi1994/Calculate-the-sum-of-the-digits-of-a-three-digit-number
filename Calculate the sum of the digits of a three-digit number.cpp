#include <iostream>
#include <conio.h>

using namespace std;
	   int main()
	   {
	      long int n , sum ,t ;
	      
          cout << "Enter a Three-digit Number :";
		  cin >> n ;
		  sum = 0 ;
		  while ( 99<n<1000 && n!=0 ) {
		         t = n % 10 ;
		 sum = sum + t ;
		 n = n / 10 ;
		 }
		 cout << sum << endl;
		 
		 
		 getch();
		 }

