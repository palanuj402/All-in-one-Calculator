#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

class St1{
	int a,b;
	public:
		P1(){
			a=b=0;
		}
		void s_cal(){
			int n;
			char s;		
			cout<<"\n******************SIMPLE CALCULATOR*************************";
			start:
			cout<<"\n1.ADDITION";
			cout<<"\n2.SUBTRACTION";
			cout<<"\n3.DIVISION";
			cout<<"\n4.MULTIPLICATION";
			cout<<"\n5.MODULUS";
			cout<<"\n6.RECIPROCAL";
			cout<<"\nEnter your choice of operation: ";
			cin>>n;	
			switch(n){
				case 1:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					cout<<"\nAddition of two num is: "<<a+b;
					break;
				case 2:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					cout<<"Sub of two num is: "<<( (a)-(b) );
					break;
				case 3:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					try{
						if(b==0){
							throw "division not possible";
						}
						cout<<"Division of two num is: "<<(float)a/b;
					}
					catch(const char * msg){
						cout<<msg;
					}
					
					break;	
				case 4:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					cout<<"Multiplication of two num is: "<<a*b;
					break;
				case 5:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					cout<<"Modulus of two num is : "<<a%b;
					break;	
				case 6:
					cout<<"\nEnter number for reciprocal: ";
					cin>>a;
					try{
						if(a==0)
							throw "Reciprocal of 0 is not possible";
							
						cout<<"Reciprocal is: "<<(float)1/a;	
					}
					catch(const char *msg){
						cout<<msg;
					}
					
					break;	
			}
			cout<<"\nDo u want to see again:(y/n) ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
		
		}
		
};//end of 1st class
class St2{
		int a,b;
		public:	
		void st_cal(){
			int n;
			char s;
			
			cout<<"\n******************SCIENTIFIC CALCULATOR*************************";
			start:
			cout<<"\n1.POWER";
			cout<<"\n2.SIN";
			cout<<"\n3.COS";
			cout<<"\n4.TAN";
			cout<<"\n5.SQUARE OF A NUMBER";
			cout<<"\n6.CUBE OF A NUMBER";
			cout<<"\n7.SQUARE ROOT OF A NUMBER";
			cout<<"\n8.CUBE ROOT OF A NUMBER";
			cout<<"\n9.LOG(With base e) OF A NUMBER";
			cout<<"\n10.LOG(With base 10) OF A NUMBER";
			cout<<"\nEnter your choice of operation: ";
			cin>>n;	
			switch(n){
				case 1:
					cout<<"\nEnter First number: ";
					cin>>a;
					cout<<"\nEnter Second number: ";
					cin>>b;
					cout<<a<<" raised to power "<<b<<" is:"<<pow(a,b);
					break;
				case 2:	
					cout<<"\nEnter a number for sin operation: ";
					cin>>a;
					cout<<"Sin of "<<a<<" is: "<<sin(a);
					break;
				case 3:
					cout<<"\nEnter a number for cos operation: ";
					cin>>a;
					cout<<"Cos of "<<a<<" is: "<<cos(a);
					break;	
				case 4:
					cout<<"\nEnter a number for tan operation: ";
					cin>>a;
					cout<<"Tan of "<<a<<" is: "<<tan(a);
					break;	
				case 5:
					cout<<"\nEnter a num for finding square: ";
					cin>>a;
					cout<<"Sqaure of given Number is "<<a*a;
					break;	
				case 6:
					cout<<"\nEnter a num for finding cube: ";
					cin>>a;
					cout<<"Cube of given Number is "<<a*a*a;
					break;
				case 7:
					cout<<"\nEnter a num for finding square Root: ";
					cin>>a;
					cout<<"Square root of num is "<<sqrt(a);
					break;	
				case 8:
					cout<<"\nEnter a num for finding cube Root: ";
					cin>>a;
					cout<<"Cube root of num is "<<cbrt(a);
					break;	
				case 9:
					cout<<"\nEnter a num for finding Log with base e: ";
					cin>>a;
					cout<<"log of "<<a<<" with base e is: "<<log(a);
					break;	
				case 10:
					cout<<"\nEnter a num for finding Log with base 10: ";
					cin>>a;
					cout<<"log of "<<a<<" with base 10 is: "<<log10(a);
					break;	
			}
			cout<<"\nDo u want to see agaain: ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
		
		}
};//end of 2nd class
class St3{
	int a,b,n,op1,op2;
	char s;
	public:
	void pg_cal()
	{
				cout<<"\n******************PROGRAMMER CALCULATOR*************************";
				start:
				cout<<"\n1.Decimal to Binary";
				cout<<"\n2.Binary to Decimal";
				cout<<"\n3.AND operation";
				cout<<"\n4.OR operation";
				cout<<"\n5.XOR operation";
				cout<<"\n6.NOT operation";
				cout<<"\n7.Right Shift operation";
				cout<<"\n8.Left Shift operation";
				cout<<"\n9.Exit";
				cout<<"\nEnter your choice of operation: ";
				cin>>n;	
				switch(n){
					case 1:
						cout<<"Enter num in decimal: ";
						cin>>a;
						dec_to_bin(a);
						break;
						
					case 2:
						cout<<"Enter num in Binary(1 or 0): ";
						cin>>a;
						bin_to_dec(a);
						break;
					case 3:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<"Enter 2nd operand: ";
						cin>>op2;
						cout<<"Result after performing AND operation: "<<( op1 & op2 );
						break;							
					case 4:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<"Enter 2nd operand: ";
						cin>>op2;
						cout<<"Result after performing OR operation: "<<( op1 | op2 );
						break;
					case 5:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<"Enter 2nd operand: ";
						cin>>op2;
						cout<<"Result after performing XOR operation: "<<( op1 ^ op2 );
						break;
					case 6:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<"Result after performing NOT operation: "<<( ~ op1 );
						break;
					case 7:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<op1<<" After 1 bit right shift: "<<(op1 >> 1);
						break;
					case 8:
						cout<<"Enter 1st operand: ";
						cin>>op1;
						cout<<op1<<" After 1 bit left shift: "<<(op1 << 1);
						break;		
					default: break;												
				}//end of switch case
				cout<<"\nDo u want to see again:(y/n) ";
				cin>>s;
				if(s=='Y' || s=='y')
				goto start;
				else exit;
			
		}//end of pg_func
		
		//Decimal to binary 
		void dec_to_bin(int &n){
			int arr[100];
			int i;
			//for storing
			while(n>0)
			{
				arr[i]=n%2;
				n=n/2;
				i++;
			}
			//for printing
			for(int j=i-1;j>=0;j--){
				cout<<arr[j];
			}
		}
		
		//Binary to decimal
		void bin_to_dec(int a){
		int dec_val;
		int base=1;
		while (a) {
			int ld = a % 10;	//for getting alast digit
			a=a/10;
			dec_val += ld *base;
			base =base*2;
		}
		cout<<"\nDecimal value is : "<<dec_val;
	}  
		
};//end of 3rd class
class St4{
	int b_d,b_m,b_y,c_day,c_month,c_year;
	int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //no of days in year
	public:
		void input(){
			cout<<"\nEnter your DOB one by one in new line:(dd/mm/yy) ";
			cin>>b_d>>b_m>>b_y;
			cout<<"\nEnter Today's Date one by one in new line:(dd/mm/yy) ";
			cin>>c_day>>c_month>>c_year;
			cal();
		}
		void cal(){
			//if current date is less birth day then this month not counted
			if(b_d>c_day){
				c_day = c_day + month[b_m - 1];
      			c_month = c_month - 1;
			}
			//if birth month is less than currrent month than this month not counted
			if(b_m>c_month){
				c_year=c_year-1;
				c_month=c_month+12;
			}
							
			int age_year=c_year-b_y;
			int age_month=c_month-b_m;
			int age_day=c_day-b_d;
				
			cout<<"Your Age is: "<<age_year<<" years "<<age_month<<" months "<<age_day<<" days ";					
		}
};

int main(){
	int n,dd,mm,yy,dd1,mm1,yy1;
	char s;
	St1 ob1;
	St2 ob2;
	St3 ob3;
	St4 ob4;
	start:
	cout<<"*********ALL IN ONE CALCULATOR**************";	
	cout<<"\n1.Simple calculator";
	cout<<"\n2.Scientific calculator";
	cout<<"\n3.Age calculator";
	cout<<"\n4.Programmer calculator";
	cout<<"\n5.Exit";
	cout<<"\nEnter Nunmber for type of calculator u want: ";
	cin>>n;
	switch(n){
		case 1:
			ob1.s_cal();
			break;
		case 2:
			ob2.st_cal();
			break;
		case 3:
			ob4.input();
			//cout<<"\nYour age is: "<<( (yy1)-(yy) )<<" years "<<( (mm1)-(mm) )<<" months "<<( (dd1)-(dd) )<<" days ";
			break;
		case 4:
			ob3.pg_cal();
			break;						
		default: 	break;		
	}
	cout<<"\nDo u want to choose again type of calculator(y/n): ";
			cin>>s;
			if(s=='Y' || s=='y')
			goto start;
			else exit;
	
	return 0;	
}
