//
// flotte.cpp for  in /home/pinty_f//Desktop/perso/rebellion/src
// 
// Made by felix pinty
// Login   <pinty_f@epitech.net>
// 
// Started on  Mon Jun 11 09:29:30 2012 felix pinty
// Last update Tue Jun 12 16:26:10 2012 felix pinty
//

#include	<list>
#include	<math.h>
#include	"flotte.h"

vaisseau::vaisseau()
{
}

vaisseau::vaisseau(int bou, int coq, int fir, std::string name)
{
  this->bou = bou;
  this->coq = coq;
  this->fir = fir;
  this->name = name;
  std::cout << "The " << name << " is ready to serv!" << std::endl;
}

vaisseau::~vaisseau()
{
  std::cout << "The " << name << " as been destroy!" << std::endl;
}

std::string	vaisseau::getName()
{
  return (this->name);
}

flotte::flotte()
{
  this->name = "flotte 01";
  this->dep = 0;
}

flotte::~flotte()
{
}

void	flotte::addShip(vaisseau & add)
{
  this->vaisseaux.push_back(add);
  std::cout << "The " << add.getName() << " as been add to " << this->name << "." << std::endl;
}

void	flotte::showShip()
{
  std::list<vaisseau>::iterator it;

  it = this->vaisseaux.begin();
  for (this->vaisseaux.begin(); it != this->vaisseaux.end(); ++it)
    {
      std::cout << it->getName() << std::endl;
    }
}

void	flotte::addPerso(perso & add)
{
  this->personnel.push_back(add);
  std::cout << "The " << add.getName() << " as been add to " << this->name << "." << std::endl;
}

void	flotte::showPerso()
{
  std::list<perso>::iterator it;

  it = this->personnel.begin();
  for (this->personnel.begin(); it != this->personnel.end(); ++it)
    {
      std::cout << it->getName() << std::endl;
    }
}
flotte::flotte(std::string name)
{
  this->name = name;
}

std::string	flotte::getName()
{
  this->dep = 0;
  return (this->name);
}

void		flotte::move(planete &src, planete &dest)
{
  std::list<flotte>::iterator it;

  if (this->dep != 0)
    {
      std::cout << "Flotte deja en mouvement" << this->dep << " jour restant." << std::endl;
      return;
    }
  else
    {
      it = src.flottes.begin();
      for (src.flottes.begin(); it != src.flottes.end(); ++it)
	{
	  if ()	  
	}
      this->dep = (int)sqrt(pow(src.getPosX() - dest.getPosX(), 2) + pow(src.getPosY() - dest.getPosY(), 2));
      std::cout << "Flotte en mouvement. " << this->dep << " jour de voyage." << std::endl;
    }
}
