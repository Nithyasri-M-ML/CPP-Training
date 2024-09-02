#include <iostream>
using namespace std;

class privatememfun{
	private:
		int a;
		int b;
		void privatefun(){
			cout<<"private member function accessed through public member function"<<endl;
		}
	public:
		void publicfun(){
			cin>>a;
			cin.ignore();
			cin>>b;
			cin.ignore();
			cout<<"The private data members are "<<a<<" "<<b<<endl;
			privatefun();
		}
};

int main(){
	privatememfun obj;
	obj.publicfun();
	return 0;
}



//function declared inside private section is called private member function
//private member functions are accessible only through public member functions
