
#include <iostream>
using namespace std;


	template<class data>
	
	data sum(data a, data b)
	{
	return a + b;
    }
    
    int main()
    {
		int x = 20;
		int y = 12;
		cout<<" the sum of x and y : "<<sum(x,y);
		return 0;
	}
