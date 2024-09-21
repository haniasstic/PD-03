#include<iostream>
using namespace std;
main()
{ 
	int vi,a,t,vf;
	cout << "Enter initial velocity(m/s) of car  " << endl;
	cin >> vi;
	cout << "Enter acceration(m/s^2) of car: "<< endl;
	cin >> a;
      	cout << "Enter time(seconds) in which car covered displacement" << endl;
	cin >> t;
	vf= a*t/vi;
	cout << " The final velocity of car is: " << vf << endl;
	
    	
}
	