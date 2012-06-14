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

vaisseau::vaisseau()
{
}

vaisseau::vaisseau(int bou, int coq, int fir, std::string name)
{
  this->bou = bou;
  this->coq = coq;
  this->fir = fir;
  this->name = name;
  //std::cout << "The " << name << " is ready to serv!" << std::endl;
}

vaisseau::~vaisseau()
{
  //  std::cout << "The " << name << " as been destroy!" << std::endl;
}

flotte::flotte()
{
  this->name = "flotte 01";
  this->dep = 0;
}

flotte::~flotte()
{
}

flotte::flotte(std::string name, planete *home)
{
  this->name = name;
  this->dep = 0;
  this->posX = home->getPosX();
  this->posY = home->getPosY();
}
