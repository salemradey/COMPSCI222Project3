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

OvernightParcel::OvernightParcel (contact con, double w, double f, double c, 
                                  int track, double sw) 
  : Parcel (con, w, f, c)
  {
  setWeight(w);
  setFee(f);
  setCost(c);
  setTrackNum(track);
  setStdWeight(sw);
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