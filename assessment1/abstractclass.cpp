#include <iostream>
using namespace std;

class parent{
	public:
		virtual void parentfun()=0;
};

class child1 : public parent{
	public:
		void parentfun(){
			cout<<"Implementation of parentfun in child1"<<endl;
		}
};
class child2 : public parent{
	public:
		void parentfun(){
			cout<<"Implementation of parentfun in child2"<<endl;
		}

};

int main(){
	child1 obj1;
	child2 obj2;
	obj1.parentfun();
	obj2.parentfun();

	return 0;
}
