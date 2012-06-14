//
// planete.cpp for  in /home/pinty_f//Desktop/perso/rebellion
//
// Made by felix pinty
// Login   <pinty_f@epitech.net>
//
// Started on  Thu Jun  7 20:58:22 2012 felix pinty
// Last update Tue Jun 12 16:35:41 2012 felix pinty
//

#include	"../header/planete.h"
#include	"../header/flotte.h"

planete::planete()
{
  this->name = "NULL";
}

planete::planete(std::string name, int X, int Y)
{
  this->posX = X;
  this->posY = Y;
  this->name = name;
}


planete::~planete()
{

}
