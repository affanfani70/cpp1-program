/*Create a class called employee that contains a name (an object of class string) and an
employee number (type long). Include a member function called getdata() to get data from
the user for insertion into the object, and another function called putdata() to display the
data. Assume the name has no embedded blanks. Write a main() program to exercise this
class. It should create an array of type employee, and then invite the user to input data for
up to 100 employees. Finally, it should print out the data for all the employees.*/

#include <iostream>
#include <string>
using namespace std;
class employee{
private:
    string name;
    long num; 
public:
    void getdata();
    void setdata();
};

void employee::getdata()
{
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee number: ";
    cin >> num;
}
void employee::setdata()
{
    getdata();
    cout << "Employee name is: " << name << endl;
    cout << "Employee number is: " << num << endl;
}
int main()
{
    employee first, second; 
    first.setdata();
    second.setdata();
    return 0;
}

/* Write a class called safearay that uses an int array of fixed size (call it LIMIT) as its only data member. There wil be two member functions. The first, putel(), takes an index number and an int value as arguments and inserts the int value into the array at the index. The second, getel(), takes an index number as an argument and returns the int value of the element with that index. safearray sa1; // define a safearray object int temp = 12345; // define an int value sa1.putel(7, temp); // insert value of temp into array at index 7 temp = sa1.getel(7); // obtain value from array at index 7 Both functions should check the index argument to make sure
it is not less than 0 or greater than LIMIT-1. You can use this array without fear of writing
over other parts of memory. Using functions to access array elements doesn’t look as
eloquent as using the [] operator. */

#include <iostream>
using namespace std;
class safe_array{
private:
	int LIMIT;
public:
	safe_array(int LIMIT_):LIMIT(LIMIT_) {}
	int *arr = new int[LIMIT];
	void putel(int index, int value){
		if(index > LIMIT-1){
			cout << "Error: Index out of bound" << endl;
			return;
		}
		if(index < 0){
			cout << "Error: Index out of bound" << endl;
			return;
		}
		arr[index] = value;
	}
	int getel(int index){
		if(index > LIMIT-1){
			cout << "Error: Index out of bound" << endl;
			return 1;
		}
		if(index < 0){
			cout << "Error: Index out of bound" << endl;
			return 1;
		}
		return arr[index];
	}
};

int main(){
	safe_array arr(10);
	arr.putel(5, 10);
	cout << arr.getel(5) << endl;
}

