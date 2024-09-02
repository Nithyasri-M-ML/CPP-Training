#include <iostream>
using namespace std;

class myclass{
	int num;
	public:
	void getnum(){
		cin>>num;
		cin.ignore();
	}
	void fun() const{
		//++num; //this line will throw an error since const members can only access but not modify.
		cout<<num<<endl;
	}
};

int main(){
	myclass obj;
	obj.getnum();
	obj.fun();

	return 0;
}


//const mem functions are functions that are denied permission to modify the data members of the class
//They can display the data, but cannot modify it
//when a function is declared as const, it can be called on any type of object (const and non cost object). Non const functions can only be called through non const objects.

