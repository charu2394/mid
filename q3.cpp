#include<iostream>

using namespace std;

/** creating class rect**/
class rect
{
	/** initializing data members **/
	int length;
	int breadth;
	
	public:
	/** constuctor**/
	rectangle(){
	

	/** creating area function **/
	void area()
	{
		cout<<"area is:"<< length*breadth;
	}
	
	/** initializing perimeter function**/
	void perimeter()
	{
		cout<<2*(length + breadth);
	}
	}
	
};

int main()
{
	/**initializing variables**/
	int len;
	int b;
	
	cin>>len>>b;
	
	/**function calling**/
	rectangle rec(len,b);
	
	/**print area and parameter as result**/
	cout<< rec.area()<<endl;
	cout<<rec.perimeter()<<endl;
}
