#include<iostream>
using namespace std;
int main(){
	cout<<"Hello World";
	int a=10, b=20;
	cout << "Sum : " << a+b; // Sum of two numbers.
	
	//Swapping
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Values after swapping -> " << "a : " << a << "b : " << b;
 
	//Swapping values using third variable
	int c;
	c = a;
	a = b;
	b = c;
	cout << "Values after swapping -> " << "a : " << a << "b : " << b;
}
