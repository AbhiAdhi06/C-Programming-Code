//#include <bits/stdc++.h> //All Liberary Is Automatically Inserted
#include <iostream>
using namespace std;

	class a
	{
		public:
		string myname;
		void printname()
		{
			cout << "My Name Is: " << myname;
		}
	};
	class car{
		public:
			void Ford()
			{
			string ford = "Ford\n";
			cout << ford <<endl;
			}
			void tesla()
			{
			string tesla;
			cin >> tesla;
			cout << tesla;
			}
	};
	
int main()
{
	a obj1;
	obj1.myname = "Adhikari";
	obj1.printname();
	car object;
	object.Ford();
	object.tesla();
	return 0;
}