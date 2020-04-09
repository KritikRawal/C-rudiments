#include<iostream>
using namespace std;
class sum{
	int num1,num2,add;
	public:
		int calc()
		{
			cout<<"Enter any two integer numbers: "<<endl;
			cin>>num1>>num2;
			add=num1+num2,add;
			return add;
		}
};
int main()
{
	sum obj;
	int temp=obj.calc();
	cout<<"Sum = "<<temp;
	return 0;
}
