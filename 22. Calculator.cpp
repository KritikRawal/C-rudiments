#include<iostream>
#include<conio.h>
using namespace std;
class CALC{
	public:
		CALC(int i=0)
		{
			result=i;
		}
		void addnumber(int num1, int num2)
		{
			result=num1+num2;
		}
		void subnumber(int num1, int num2)
		{
			result=num1-num2;
		}
		void multnumber(int num1, int num2)
		{
			result=num1*num2;
        }
        	void divnumber(int num1, int num2)
		{
			result=num1/num2;
        }
        int getresult()
        {
        	return result;
		}
		private:
			//hidden from outside the world
			int result;
};
int main()
{
	CALC cob;
	int a,b,c;
	char ch;
	do{
		
	system("cls");
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Enter the operator(+,-,/,*):";
	cin>>ch;
    switch(ch)
    {
	
	 case'+':
		cob.addnumber(a,b);
		cout<<"Summation ="<<cob.getresult()<<"\n";
		break;
			
		 case'-':
		cob.subnumber(a,b);
		cout<<"Subtraction ="<<cob.getresult()<<"\n";
		break;
			
				 case'*':
		cob.multnumber(a,b);
		cout<<"Multiplication ="<<cob.getresult()<<"\n";
		break;
			
				 case'/':
		cob.divnumber(a,b);
		cout<<"Division ="<<cob.getresult()<<"\n";
		break;
			default:
				cout<<"Wrong operator";
				break;
	}
	cout<<"Do you want to continue...(1-YES/0-No):";
	cin>>c;
	}while(c==1);
	getch();
	return 0;
}
