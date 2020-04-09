#include<iostream>
#include<conio.h>
using namespace std;
class person{//base class
	protected:
		char name[20];
		char gender[10];
		int age;
		public:
			void get_info()
			{
				cout<<"Enter your name: ";
				cin>>name;
				cout<<"Enter your Gender: ";
				cin>>gender;
				cout<<"Enter your Age: ";
				cin>>age;
				//cout<<"Enter your Gender: ";
	
			}
};
class employee:public person{//derived class
	private:
		float salary;
		int id;
		char pos;
		public:
			void get_emp()
			{
			    cout<<"Enter your employee_id no: ";
				cin>>id;
				cout<<"Enter your position: ";
				cin >>pos;
				cout<<"Enter your Salary: ";
				cin>>salary;
			}
			void show()
			{
				cout<<"EMPLOYEE RECORD\n\n";
				cout<<"Name: "<<name<<endl;
				cout<<"Gender: "<<gender<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Employee_ID: "<<pos<<endl;
				cout<<"Salary: "<<salary;			
            }
};
int main()
{
	employee emp;
	emp.get_info();
	emp.get_emp();
	system("cls");
	emp.show();
	getch();
	return 0;
}
