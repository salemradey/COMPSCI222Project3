#ifndef GROUNDPARCEL_H
#define GROUNDPARCEL_H
/*
//Name: Salem Radey + Joseph Hammond
//Date: 11/20/2019
//Project 3 - Version: 1.0
//GroundParcel.h
*/
#include "parcel.h"

class GroundParcel : public Parcel
{
public:
  GroundParcel(contact, double, double, double);
  double calculateCost();
  
};

#endif