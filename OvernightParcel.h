/*
* OvernightParcel.h
* Written by : Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 part 1
* Created on : 11/20/19	
*/
#ifndef OVERNIGHTPARCEL_H
#define OVERNIGHTPARCEL_H

#include "parcel.h"

class OvernightParcel : public Parcel
{
public:
  OvernightParcel(contact, double, double, double, int, double); //constructor
  OvernightParcel(); //constructor without parameters.
  double calculateCost();                                            //redefining base class's calculateCost()
  
  void setTrackNum(int);
  int getTrackNum();
  
  void setStdWeight(double);
  double getStdWeight();
  

private:
  int trackNum;                                                       //tracking number
  double stdWeight = 80;                                                   //standard weight = 80 oz
  
};
#endif