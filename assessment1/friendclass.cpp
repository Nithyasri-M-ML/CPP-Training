#include <iostream>
using namespace std;


class logger;

class info{
	private:
		string name;
		int age;
	public:
		info(string s,int a){
			name=s;
			age=a;
		}
	friend class logger;
	void display(){
		cout<<"Name"<<"-"<<name<<endl;
		cout<<"Age"<<"-"<<age<<endl;
	}
};

class logger{
	public:
		void loggerfun(info &obj){
			cout<<"Name"<<"-"<<obj.name<<endl;
			cout<<"Age"<<"-"<<obj.age<<endl;
		}
};

int main(){
	info obj1("Nithya",21);
	logger obj2;
	obj1.display();
	obj2.loggerfun(obj1);
	return 0;
}

