#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

float pb,per,pm,inter,total,nb = 1;
int n=0;
int main(){	
	cout << "Enter initial loan: ";
	cin >> pb;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pm;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	while (nb != 0){
	n++;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n;
	cout << setw(13) << left << pb;
	inter = (pb*per)/100;
	cout << setw(13) << left << inter;
	total = pb+inter;
	cout << setw(13) << left << total;
	if(pm <= total){
	cout << setw(13) << left << pm ;
}else{ 
	pm=total;
	cout << setw(13) << left << pm ;
}
	nb = total-pm;
	cout << setw(13) << left << nb;
	pb=nb;
	cout << "\n";	
	}
	return 0;
}
