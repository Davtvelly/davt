
#include <iostream>
using namespace std;

int main()
{
	try{
		int age = 15;
		if(age > 18)
		{
			cout<<" you are accepted ";
		}else {
			throw(age);
		}
		
	}
	catch(int my_num)
	{
		cout<<" access denied "<<endl;
		cout<< " age is "<<my_num;
	}
	return 0;
}
