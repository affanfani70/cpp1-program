/*Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format. The final member function should add two objects of type time passed as arguments. A main() program should create two initialized time objects (should they be const?) and one that isn’t initialized. Then it should add the two initialized values together, leaving the result in the third time variable. Finally it should display the value of this third variable. Make appropriate member functions const.*/

// #include <iostream>
// using namespace std;

// class time{
// private:
//     int hrs, mints, secs;

// public:
//     time() : hrs(0), mints(0), secs(0){}
    
//     time(int h, int m, int s) : hrs(h),mints(m),secs(s){}
   
//     void add(time t1, time t2)
//     {
//         secs = t1.secs + t2.secs;
//         if (secs > 59)
//         {
//             secs -= 60;
//             mints++;
//         }
//         mints += t1.mints + t2.mints;
//         if (mints > 59)
//         {
//             mints -= 60;
//             hrs++;
//         }
        
//       hrs += t1.hrs + t2.hrs;
//     }
//     void display() const
//     {
//         cout << hrs << ":" << mints << ":" << secs << endl;
//     }
// };
// int main(){
// const time  time1(10,25,16),
//             time2(5,59,59);
// time time3;
// cout << "Time1 is: ";   
// time1.display( );
// cout << "Time2 is: "; 
// time2.display( );
// time3.add(time1,time2);
// cout << "Time3 is: ";  
// time3.display( );
// }
/*Q6. Add to the time class of Exercise 5 the ability to subtract two time values using the
overloaded (-) operator, and to multiply a time value by a number of type float, using the
overloaded (*) operator.
(Q5. Augment the time class referred to in Exercise 3 to include overloaded increment (++)
and decrement (--) operators that operate in both prefix and postfix notation and return
values. Add statements to main() to test these operators.
Q3. Modify the time class from Exercise 3 in Chapter 6 so that instead of a function
add_time() it uses the overloaded + operator to add two times. Write a program to test this

class.
Ch6_Q3. Create a class called time that has separate int member data for hours, minutes,
and seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments. A main()
program should create two initialized time objects (should they be const?) and one that
isn’t initialized. Then it should add the two initialized values together, leaving the result in
the third time variable. Finally it should display the value of this third variable. Make
appropriate member functions const.)*/

// #include <iostream>
// using namespace std;
// class time{
// 	int hrs;
// 	int min;
// 	int sec;
// public:
// 	time(): hrs(0), min(0), sec(0){}
// 	time(int h, int m, int s){
// 		hrs = h;
// 		min = m;
// 		sec = s;
// 	}
// 	void display(){
// 		cout << hrs << ":" << min << ":" << sec << endl;
// 	}
// 	void operator ++(){
// 		++hrs;
// 		++min;
// 		++sec;
// 	}
// 	void operator ++(int ){
// 		hrs++;
// 		min++;
// 		sec++;
// 	}
// 	void operator --(){
// 		--hrs;
// 		--min;
// 		--sec;
// 	}
// 	void operator --(int ){
// 		hrs--;
// 		min--;
// 		sec--;
// 	}
// 	time operator + (const time & t2){
// 		return time{hrs+t2.hrs, min+t2.min, sec+t2.sec};
// 	}
// 	time operator - (const time& t2){
// 		return time{hrs-t2.hrs, min-t2.min, sec-t2.sec};
// 	}
// 	time operator* (float i){
// 		return time{hrs*i, min*i, sec*i};
// 	}
// };

// int main(){
//     time t1(01,15,20), 
//         t2(01,15,20),
//         t3;
// 	t1++;
// 	t1--;
// 	++t2;
// 	--t2;
// 	t2=t2*2;
// 	t2.display();
// 	t3 = t1 + t2;
// 	t3.display();
// }

/*Q7. Modify the fraction class in the four-function fraction calculator from Exercise 11 in
Chapter 6 so that it uses overloaded operators for addition, subtraction, multiplication, and
division. (Remember the rules for fraction arithmetic in Exercise 12 in Chapter 3, “Loops
and Decisions.”) Also overload the == and != comparison operators, and use them to exit
from the loop if the user enters 0/1, 0/1 for the values of the two input fractions. You may
want to modify the lowterms() function so that it returns the value of its argument reduced
to lowest terms. This makes it more useful in the arithmetic functions, where it can be
applied just before the answer is returned.
(Ch3_Q12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations applied
to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.
Ch6_Q11. Modify the four-function fraction calculator of Exercise 12 in Chapter 5 to use a
fraction class rather than a structure. There should be member functions for input and
output, as well as for the four arithmetical operations. While you’re at it, you might as well
install the capability to reduce fractions to lowest terms. Here’s a member function that will
reduce the fraction object of which it is a member to lowest terms. It finds the greatest
common divisor (gcd) of the fraction’s numerator and denominator, and uses this gcd to
divide both numbers.
void fraction::lowterms() // change ourself to lowest terms
{
long tnum, tden, temp, gcd;

tnum = labs(num); // use non-negative copies
tden = labs(den); // (needs cmath)
if(tden==0 ) // check for n/0
{ cout << “Illegal fraction: division by 0”; exit(1); }
else if( tnum==0 ) // check for 0/n
{ num=0; den = 1; return; }
// this ‘while’ loop finds the gcd of tnum and tden
while(tnum != 0)
{
if(tnum < tden) // ensure numerator larger
{ temp=tnum; tnum=tden; tden=temp; } // swap them
tnum = tnum - tden; // subtract them
}
gcd = tden; // this is greatest common divisor
num = num / gcd; // divide both num and den by gcd
den = den / gcd; // to reduce frac to lowest terms
}
You can call this function at the end of each arithmetic function, or just before you perform
output. You’ll also need the usual member functions: four arithmetic operations, input, and
display. You may find a two-argument constructor useful.)*/

#include <iostream>
using namespace std;
class fraction {
    private:
	int num;
	char slash;
	int den;
public:
	fraction() {}
	fraction(int n, int d): num(n), den(d) {}
	void lowterms();
	void getData() {
		cin >> num >> slash >> den;
	}
	void putData() {
		cout << num << "/" << den << endl;
	}
	fraction operator + (const fraction& f1) {
		return fraction(num * f1.den + den * f1.num, (den * f1.den));
	}
	fraction operator - (const fraction& f1) {
		return fraction(num * f1.den - den * f1.num, (den * f1.den));
	}
	fraction operator * (const fraction& f1) {
		return fraction(num * f1.num, den * f1.den);
	}
	fraction operator / (const fraction& f1) {
		return fraction(num * f1.den, den * f1.num);
	}
	bool operator == (const fraction& f1) {
		if (num == 0 && den == 1 && f1.num == 0 && f1.den == 1)
			return true;
		else
			return false;
	}
	bool operator != (const fraction& f1) {
		if (num != 0 && den != 1 && f1.num != 0 && f1.den != 1)
			return true;
		else
			return false;
	}
};

void fraction::lowterms() 
{
	long tnum, tden, temp, gcd;

	tnum = labs(num); 
	tden = labs(den); 
	if (tden == 0 ) 
	{ cout << "Illegal fraction: division by 0"; exit(1); }
	else if ( tnum == 0 ) 
	{ num = 0; den = 1; return; }
	
	while (tnum != 0)
	{
		if (tnum < tden) // ensure numerator larger
		{ temp = tnum; tnum = tden; tden = temp; } // swap them
		tnum = tnum - tden; // subtract them
	}
	gcd = tden; 
	num = num / gcd; // divide both num and den by gcd
	den = den / gcd; // to reduce frac to lowest terms
}

int main() {
	fraction f1, f2, f3;
	f1.getData();
	f2.getData();
	if (f1 == f2)
		return 1;
	else {
		f3 = f1 + f2;
		f3.lowterms();
		f3.putData();
		f3 = f1 - f2;
		f3.lowterms();
		f3.putData();
		f3 = f1 * f2;
		f3.lowterms();
		f3.putData();
		f3 = f1 / f2;
		f3.lowterms();
		f3.putData();
	}
}

