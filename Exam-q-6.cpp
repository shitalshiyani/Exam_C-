#include<iostream>
#include<string.h>

using namespace std;

class Value
{
	public :
		int x;
		
		void Set_Data(int n)
		{
			this->x=n;
		}
		
		void Get_Data()
		{
			cout<<"X="<<this->x<<endl;
		}

		Value operator ++ (int)
		{
		Value temp;
		temp.x=this->x++;
		return temp;
		}
};

class Number
{
		public :
		int y;
		
		void disp_Data(int i)
		{
			this->y=i;
		}
		
		void display_Data()
		{
			cout<<"Y="<<this->y<<endl;
		}

		Number operator -- (int)
		{
		Number temp;
		temp.y=this->y--;
		return temp;
		}
};

main()
{
	Value v;
	
	cout<<"Increment Operator Overloading"<<endl<<endl;
	
	v.Set_Data(8);
	v.Get_Data();
	
	v.x++;
	v.Get_Data();
	
	cout<<endl;
	
	cout<<"Decrement Operator Overloading"<<endl<<endl;
	
	Number m;
	
	m.disp_Data(12);
	m.display_Data();
	
	m.y--;
	m.display_Data();
	
}
