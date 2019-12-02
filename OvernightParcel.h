  
/*
* implementation.cpp
* Written by : Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 part 1
* Created on : 11/20/19	
*/

#include "parcel.h"

class OvernightParcel : public Parcel
{
public:
  OvernightParcel(contact, double, double, double, int, double); //constructor
  double calculateCost();                                            //redefining base class's calculateCost()
  
  void setTrackNum(int);
  int getTrackNum();
  
  void setStdWeight(double);
  double getStdWeight();
  

private:
  int trackNum;                                                       //tracking number
  double stdWeight = 80;                                                   //standard weight = 80 oz
  
};