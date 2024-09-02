#include <iostream>
using namespace std;

class myclass{
	static int num1;
	static int num2;
	public:
	static void fun(){
		cout<<"Fun called"<<endl;
	}
	static void display(){
		cout<<"Displaying num1 "<<num1<<endl;
		cout<<"Displaying num2 "<<num2<<endl;
		fun();
	}
};
int myclass::num1=10;
int myclass::num2=20;

int main(){
	myclass::display();
	return 0;
}



//static member function is independent of any object of the class
//it can be called even if no object of the class exixts
//can be accessed using class name through scope resolution operator
