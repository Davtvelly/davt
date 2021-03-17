#include <iostream>
using namespace std;

class Rectangle
{
	private:
	short length;
	short width;
	short angule_at_diagonal_intersect;
	short apex_angule;
	short num_of_sides;
	
	public:
	void dimentions(short num_of_sides, short length, short width, 
	short angule_at_diagonal_intersect, short apex_angule)
	{
		this->num_of_sides = num_of_sides;
		this->length = length;
		this->width = width;
		this->angule_at_diagonal_intersect = angule_at_diagonal_intersect;
		this->apex_angule = apex_angule;
	}
	friend void printdimention(Rectangle &rectangle);
};

void printdimention(Rectangle &rectangle)
{
	cout<<"\n         TEST FOR SQUARE\n";
	cout<<"            ==============\n";
	      
	try{
	cout<<"\n          Number of sides: ";
	cin>>rectangle.num_of_sides;	
	cout<<" \n         length of square: ";
	cin>>rectangle.length;
	cout<<"            width of square: ";
	cin>>rectangle.width;
	cout<<"\n         angule at the intersect of diagonals: ";
	cin>>rectangle.angule_at_diagonal_intersect;
	cout<<"\n         apex angule: ";
	cin>>rectangle.apex_angule;
	
	 if(rectangle.length == rectangle.width && rectangle.apex_angule == 90
	 && rectangle.angule_at_diagonal_intersect == 90 
	 && rectangle.num_of_sides == 4)
	 
	  { cout<<"\n      congratulations!!the shape is a square ";}
	  else { throw (rectangle.apex_angule);}
     }
	
	catch(short my_error)
	{ cout<<" \n         Oops!! The shape is undefined, please check well";
	  cout<<" \n         Error code number..... "<<my_error;
	
	} 
}

int main()
{
	cout<<"           IDENTIFYING SHAPES USING C++ NEURON\n";
	cout<<"          =======================================\n\n";
	Rectangle features;
	printdimention(features);
	
	return 0;
}
	 
	

	
