#include<iostream>
using namespace std;
main()
{
	int age,moves,x;
	cout << " Enter your age:  " << endl;
	cin >> age;
	cout << " Enter number of times you've moved: " << endl;	
	cin >> moves;
	moves=moves+1;
	x= age/moves;
	cout << " The average a person lives in a same house is: " << x << endl;
}
