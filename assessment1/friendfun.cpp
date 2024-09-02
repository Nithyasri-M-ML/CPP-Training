#include <iostream>
using namespace std;

class myclass{
	private:
		int num;
	public:
		myclass(int n){
			num=n;
		}
	friend void fun(const myclass &obj);
};
void fun(const myclass &obj){
	cout<<"The private mem of class is "<<obj.num<<endl;
}


int main(){
	myclass  obj(27);
	fun(obj);

	return 0;
}
