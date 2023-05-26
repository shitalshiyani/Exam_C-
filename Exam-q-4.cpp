#include<iostream>
#include<string.h>

using namespace std;

main()
{
	int age;
	
		try 
		{
			if (age<18)
			{
				throw age;
			}
			else
			{
				cout<<"Age="<<age<<endl;
			}
		}
		catch (char n)
		{
			cout<<"A person cannot be able to vote if his/her age is less than 18";
		}
		
}
