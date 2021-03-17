#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main() {
 
 vector<int> my_vector;
 my_vector.push_back(10);
 my_vector.push_back(20);
 my_vector.push_back(30);
 
 for(int i=0;i<3;i++)
 {
	 cout<<my_vector;
 }
 return 0;
}
