/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julio Lopez
 */

#include "std_lib_facilities.h"	

int main(){
	int i = 0;
	cout << "Enter your integer: ";
	cin >> i;
	if (!cin) error("Please enter an integer");
	string s = "odd";
	if (!(i%2)) s = "even";
	cout << i << " is an " << s << " number\n";
    return 0;
}

