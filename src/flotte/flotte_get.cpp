//
// flotte.cpp for  in /home/pinty_f//Desktop/perso/rebellion/src
//
// Made by felix pinty
// Login   <pinty_f@epitech.net>
//
// Started on  Mon Jun 11 09:29:30 2012 felix pinty
// Last update Wed Jun 13 12:07:46 2012 felix pinty
//

#include	<list>
#include	<math.h>
#include	"../header/flotte.h"


std::string	vaisseau::getName()
{
  return (this->name);
}

std::string	flotte::getName()
{
    return (this->name);
}

int     flotte::getDep()
{
 return (this->dep);
}

int         flotte::getPosX()
{
 return (this->posX);
}

int         flotte::getPosY()
{
 return (this->posY);
}

std::list<perso>    &flotte::getPerso()
{
    return(this->personnel);
}
