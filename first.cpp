#include<iostream>
using namespace std;

void add(int x, int y){
	cout << "Sum : " << x+y << endl;
}
// comment
int main(){

	int a=10, b=20;
	
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
