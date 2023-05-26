#include<iostream>
#include<string.h>

using namespace std;

class Hotel
{
	public :
		int id;
		char staff_name[50];
		int staff_count;
		
		void Set_Data()
		{
			this->id=id;
			strcpy(this->staff_name,staff_name);
			this->staff_count=staff_count;
		
		
			cout<<"Enter Hotel Id=";
			cin>>id;
			cout<<"Enter Staff Name=";
			cin>>staff_name;
			cout<<"Enter Staff Count=";
			cin>>staff_count;
			cout<<endl;
			
	    }
	    
	    void Get_Data()
	    {
	    	cout<<"Hotel Id="<<id<<endl<<"Staff Name="<<staff_name<<endl<<"Staff Count="<<staff_count<<endl;
		}
		
			
};

main()
{
	Hotel h;
	
	h.Set_Data();
	h.Get_Data();
	
}
