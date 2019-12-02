/*
* Parcel.cpp
* Written by : Salem Radey + Joseph Hammond
* Written for: COMPSCI 222 Project 3 part 1
* Created on : 11/20/19	
*/


#include <iostream>
#include "parcel.h"
#include "contact.h"
using namespace std;

Parcel::Parcel(contact con, double w, double f , double c)
{
  setWeight(w);
  setFee(f);
  setCost(c);
}

double Parcel::calculateCost()
{
  return (0);
}

void Parcel::setWeight(double w)
{
  weight = w;
}

double Parcel::getWeight()
{
  return (weight);
}

void Parcel::setFee(double f)
{
  fee = f;
}

double Parcel::getFee()
{
  return (fee);
}

void Parcel::setCost(double c)
{
  cost = c;
}

double Parcel::getCost()
{
  return (cost);
}