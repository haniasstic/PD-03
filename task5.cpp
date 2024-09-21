#include<iostream>
using namespace std;
main()
{ 
	string name;
	int days;
	int weight;
	cout << "Enter name of the person" << endl;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: "<< endl;
	cin >> weight; 
	days= weight*15;
	cout << name << " will loss " <<  weight << " kgs weight in " <<  days <<  " days by doctor's suggestion "  << endl;
}
	