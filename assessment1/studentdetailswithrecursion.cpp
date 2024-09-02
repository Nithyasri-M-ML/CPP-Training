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

void setstudentdetails(student students[],int index, int studentcount){
	if(index>=studentcount){
		return;
	}
	
        cout<<"Enter the details for student: "<<index+1<<endl;
	students[index].setvalues();
	cout<<endl;

	setstudentdetails(students,index+1,studentcount);

}

void getstudentdetails(student students[], int index, int studentcount){
	if(index>=studentcount){
		return;
	}

	cout<<"Details of student: "<<index+1<<endl;
	students[index].getvalues();
	cout<<endl;

	getstudentdetails(students,index+1,studentcount);

}

int main(){
        int studentcount;
        cout<<"Enter the student count"<<endl;
        cin>>studentcount;
        cin.ignore();
        student *students = new student[studentcount];
	setstudentdetails(students,0,studentcount);
	getstudentdetails(students,0,studentcount);

        return 0;
}
