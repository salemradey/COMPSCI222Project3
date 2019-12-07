/*
* parcel.h
* Written by : Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 part 1
* Created on : 11/20/19	
*/


#ifndef PARCEL_H
#define PARCEL_H

#include "contact.h"

class Parcel
{
public:
  Parcel(contact, contact, double, double, double); //constructor for Parcel.cpp
  Parcel(contact, double, double, double, int, double); //constructor for OvernightParcel
  Parcel(contact, double, double, double); //constructor for GroundParcel
  Parcel(); //constructor for Parcel.cpp. If not, compiler errors out.
  double calculateCost();
  
  void setWeight(double);
  double getWeight();
  
  void setFee(double);
  double getFee();
  
  void setCost(double);
  double getCost();
  
  void setReceiver(contact);
  contact getReceiver();
  
  void setSender(contact);
  contact getSender();
  
private:
  contact sender; //Previously set as "struct sender"
  contact receiver; //Previously set as "struct receiver"
  double weight;
  double fee;                                       //basic fee
  double cost;
};

#endif