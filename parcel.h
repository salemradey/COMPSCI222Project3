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
  Parcel(contact, double, double, double); //constructor
  double calculateCost();
  
  void setWeight(double);
  double getWeight();
  
  void setFee(double);
  double getFee();
  
  void setCost(double);
  double getCost();
  
  void setReciever(contact);
  contact getReciever();
  
  void setSender(contact);
  contact getSender();
  
private:
  struct sender;
  struct reciever;
  double weight;
  double fee;                                       //basic fee
  double cost;
};

#endif
