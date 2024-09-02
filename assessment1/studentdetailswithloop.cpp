#include <iostream>
using namespace std;

class student{
        string name;
        int age;
        string grade;
        public:
        void setvalues(){
                getline(cin,name);
                cin>>age;
                cin.ignore();
                getline(cin,grade);
        }
        void getvalues() const{
                cout<<"Name: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
                cout<<"Grade: "<<grade<<endl;
        }

};

int main(){
        int studentcount;
	cout<<"Enter the student count"<<endl;
        cin>>studentcount;
        cin.ignore();
        student students[studentcount];
        for(int i=0;i<studentcount;i++){
                cout<<"Enter the details for student: "<<i+1<<endl;
                students[i].setvalues();
                cout<<endl;
        }
        for(int i=0;i<studentcount;i++){
                cout<<"Details of student: "<<i+1<<endl;
                students[i].getvalues();
                cout<<endl;
        }

        return 0;
}
