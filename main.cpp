/*
* main.cpp
* Written by: Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 Part 1
* Created on: 11/20/19
*/

#include <string>
#include <vector>
#include <iostream>
#include "parcel.h"
#include "GroundParcel.h"
#include "OvernightParcel.h"
#include "contact.h"
using namespace std;

int main()
{
    string whileL;
    vector<GroundParcel> gp;
    vector<OvernightParcel> op;
    double w;
    double f = 3;  //basic fee is 3$
    double c;
    
    contact sender;
    contact reciever;

    cout<<"Main Menu - Select your command (1-3):"<<endl;
    cout<<"1. Create Overnight Parcel"<<endl;
    cout<<"2. Create Ground Parcel"<<endl;
    cout<<"3. Quit Program"<<endl;
    cin>>whileL;

    while(whileL == "1")  // Overnight Parcel creation
	{
	    OvernightParcel o1;
	    cout<<"Creating an Overnight Parcel..."<<endl;
	    cout<<"Enter sender's name: ";
	    cin.ignore();
	    getline(cin, sender.name);
	
	    
	    cout<<"Enter sender's address: ";
	    getline(cin, sender.address);
	    
	    cout<<"Enter sender's zipcode: ";
	    cin>>sender.zipcode;
	    
        cout<<"Enter recipient's name: ";
        cin.ignore();
        getline(cin, reciever.name);
        
        cout<<"Enter recipient's address: ";
        getline(cin, reciever.address);
        
        cout<<"Enter recipient's zipcode: ";
        cin>>reciever.zipcode;
        
        cout<<"Package's weight in ounces: ";
        cin>>w;
        o1.setSender(sender);
        o1.setReceiver(reciever);
        op.pushback(o1);
        
	}
	
	while(whileL == "2")  //Ground Parcel creation
	{
	    string input;
	    cout<<"Creating a Ground Parcel..."<<endl;
	    cout<<"Please enter name: "<<endl;
	    cin>>input;
	    //cout<<" "<<ground.getName();
	    return 0;
	}
	
	while (whileL == "3")  //End Program
	{
	    cout<<"Goodbye!";
	    return 0;
	}

}
