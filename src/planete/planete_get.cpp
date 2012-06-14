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

int		planete::getPosX()
{
  return (this->posX);
}

int		planete::getPosY()
{
  return (this->posY);
}


std::list<flotte> &planete::getFlottes()
{
  return (this->flottes);
}

std::list<perso> &planete::getPerso()
{
  return (this->personnel);
}

std::string     planete::getName()
{
    return (this->name);
}
