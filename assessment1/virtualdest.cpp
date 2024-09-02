#include <iostream>
using namespace std;


class parent{
	public:
	parent(){
		cout<<"Parent Constructor"<<endl;
	}
	virtual ~parent(){
		cout<<"Parent Destructor"<<endl;
	}
};
class child:public parent{
	public:
	child(){
		cout<<"Child Constructor"<<endl;
	}
	~child(){
		cout<<"Child Destructor"<<endl;
	}
};


int main(){
	parent *ptr=new child;
	delete ptr;
}
