/*
* OvernightParcel.cpp
* Written by : Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 part 1
* Created on : 11/20/19	
*/


#include <iostream>
#include "parcel.h"
#include "OvernightParcel.h"
using namespace std;

OvernightParcel::OvernightParcel (contact send, double w, double f, double c, 
                                  int track, double sw) 
  : Parcel (send, w, f, c, track, sw)
  {
  setWeight(w);
  setFee(f);
  setCost(c);
  setTrackNum(track);
  setStdWeight(sw);
  }
  
OvernightParcel::OvernightParcel()
{
    
}

double OvernightParcel::calculateCost()
{
  if (getWeight() < getStdWeight())
    {
      return (getFee());
    }
  if (getWeight()>= getStdWeight())
    {
      int newCost;
      newCost = (getWeight()-getStdWeight()) * getCost();
      return (newCost);
    }      
}

void OvernightParcel::setTrackNum(int track)
{
  trackNum = track;
}

int OvernightParcel::getTrackNum()
{
  return (trackNum);
}

void OvernightParcel::setStdWeight(double sw)
{
  stdWeight = sw;
}

double OvernightParcel::getStdWeight()
{
  return (stdWeight);
}