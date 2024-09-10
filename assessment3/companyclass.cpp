#include <iostream>
using namespace std;

class company{
        protected:
        int emp_id;
        string name;
        string department;

        public:
        company(int id, std::string n){
                emp_id = id;
                name = n;
                department = "Not Assigned";
                cout<<"Base Constructor Called"<<endl;
        }

        void get_data(){
                cout<<"Employee ID: "<<emp_id<<endl;
                cout<<"Employee Name: "<<name<<endl;
                cout<<"Employee Dept: "<<department<<endl;
        }

        virtual void dept_work(){
                cout<<"General Department work not Assigned"<<endl;
        }

	virtual ~company(){
		cout<<"Base class destructor"<<endl;
	}
};

class HR : public company{
public:
        HR(int id, string n):company(id,n){
                emp_id = id;
                name = n;
                department = "HR";
                cout<<"HR class Constructor Called"<<endl;
        }

        void dept_work(){
                cout<<"HR Department: Manage people"<<endl;

        }

        ~HR(){
                cout<<"HR Destructor Called"<<endl;
        }
};


class Finance : public company{

        public:
        Finance(int id, string n):company(id,n){
                emp_id = id;
                name = n;
                department = "Finance";
                cout<<"Finance class Constructor Called"<<endl;
        }
void dept_work(){
                cout<<"Finance Department: Manage Accounts"<<endl;
        }

        ~Finance(){
                cout<<"Finance Destructor Called"<<endl;
        }
};

int main(){
        company *ptr1 = new HR(1,"Sanjay");
        company *ptr2 = new Finance(2,"Sambath");
        company obj1(3,"Nithya");


        ptr1->dept_work();
        ptr2->dept_work();
        obj1.dept_work();

        delete ptr1;
	delete ptr2;
        return 0;

}
