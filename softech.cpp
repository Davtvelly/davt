#include <iostream>
#include <string.h>
using namespace std;

class Insert
{
	public:
	int num;
	 void dosomething()
	
	{
		
	cout<<"    Enter your selection based on the list: ";
	cin>>num;
          
	
	if(num == 1)
	      {	
	cout<<"    \nYou have selected INSERT button\n"
	      "    Record and audio then converted to readable text\n"
		  "    upload any document then the system reads it for you\n"
		  "    Write a document so that it can be read for you\n";
	      }
	}
};
	
	class Search: public Insert
    {
		public:
		void PrintIt()
		{
			if(num == 2)
			{
		cout<<" you have selected SEARCH button\n"
		      " Ask question on the topic of the study \n"
		      " link to Website and Youtube channel for search result\n"
		      " Answers inform of text or an audio output\n";
		    }
		}
	}; 
	
	class View: public Search
	
	{
		public:
		 void printValue()
		{
			if(num == 3)
			{
		cout<<" You have selected VIEW button\n"
		      " Show rulers, set indents, set reading speed	\n"
		      " show orrientation either portrait or land scape\n";
		    }
		}
	};
		      	
		      
int main()
{
	cout<<"               SOFTECH SOFTWARE, The ARTIFICIAL TEACHER \n"
	      "               .................\n"
	      "        \nLearn Smart Be On Top Of The Game with AI"<<endl;
	      
	cout<<"        \nInsert  Search   View   Tools  Audio-input "
	      "        Audio-output\n";
	      
	cout<<"       \n1. INSERT\n "
	      "       \n2. SEARCH\n "
	      "       \n3. VIEW\n   "
	      "       \n4. TOOLS\n  "
	      "       \n5. AUDIO-INPUT\n "
	      "       \n6. AUDIO-OUTPUT \n ";
	      
	      View output;
	      output.dosomething();
	      output.PrintIt();
	      output.printValue();
	
	      return 0;
	  }
	       
	
