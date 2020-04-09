#include<iostream>
#include<conio.h>
using namespace std;
class person{
protected:
	char name[20];
	char add[20];
	int age;
	int contact;
	public:
		void get_p()
		{
			cout<<"enter your name: ";
			fflush(stdin);
			gets(name);
			cout<<"Enter your address: ";
			cin>>add;
			cout<<"Enter your age: ";
			cin>>age;
			cout<<"enter your contact number: ";
			cin>>contact;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Address ="<<add<<endl;
			cout<<"Age = "<<contact<<endl;
		}
};
class  student: public person{
int Class,roll;
float per; 
public:
	void get_student()
	{
		person::get_p();
		cout<<"Enter your class: ";
		cin>>Class;
		cout<<"Enter your Roll: ";
		cin>>roll;
		cout<<"Enter your previous class percentage ";
		cin>>per;
	}
	void show_student()
	{
		person::display();
		cout<<"Class = "<<Class<<endl;
		cout<<"Roll Number = "<<roll<<endl;
		cout<<"Percentage = "<<per<<endl;
	}
};
class teacher:public person{
	int salary;
	char sub[20];
	public:
		void get_t()
		{
			person::get_p();
			cout<<"Enter your salary: ";
			cin>>salary;
			cout<<"Enter subjects name you teach: ";
			fflush(stdin);
			gets(sub); 
		}
		void show_t()
		{
			person::display();
			cout<<"salary = "<<salary<<endl;
			cout<<"Teaching Subjects = "<<sub<<endl;
			
		}
};
int main()
{
	student std;
	cout<<"\n\n******ENTER STUDENT DETAILS******\n\n";
	std.get_student();
	teacher tea;
	cout<<"\n\n******ENTER TEACHER DETAILS******\n\n";
	tea.get_t();
	
	system("cls");
	cout<<"******DISPLAYING STUDENT DETAILS******\n\n";
	std.show_student();
	cout<<"******DISPLAYING TEACHER DETAILS******\n\n";
	tea.show_t();
	getch();
	return 0;
}

