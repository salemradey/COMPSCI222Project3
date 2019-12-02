/*
//Name: Salem Radey + Joseph Hammond
//Date: 11/20/2019
//Project 3 - Version: 1.0
//GroundParcel.cpp
*/

#include <iostream>
#include "GroundParcel.h"
#include "parcel.h"
using namespace std;

GroundParcel::GroundParcel (contact con, double weight, double fee, double c)
  : Parcel(con,weight,fee,c)
  {
    setWeight(weight);
    setFee(fee);
    setCost(c);
  }

double GroundParcel::calculateCost()
{
  return (getWeight()*getCost()) + getFee();
}