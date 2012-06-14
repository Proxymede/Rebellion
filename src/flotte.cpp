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

void	flotte::addShip(vaisseau *add)
{
  this->vaisseaux.push_back(*add);
  std::cout << "The " << add->getName() << " as been add to " << this->name << "." << std::endl;
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

void	flotte::addPerso(perso *add)
{
  this->personnel.push_back(*add);
  std::cout << "The " << add->getName() << " as been add to " << this->name << "." << std::endl;
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
flotte::flotte(std::string name, planete *home)
{
  this->name = name;
  this->dep = 0;
  this->posX = home->getPosX();
  this->posY = home->getPosY();
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

void		flotte::move(planete *src, planete *dest)
{
    std::list<flotte>::iterator it;

    it = src->getFlottes().begin();
    for (src->getFlottes().begin(); it != src->getFlottes().end(); ++it)
    {
    if (this->getName() == it->getName())
        {
            if (this->dep != 0)
            {
            std::cout << "Flotte deja en mouvement " << this->dep << " jour restant." << std::endl;
            return;
            }
        this->dep = sqrt(pow(src->getPosX() - dest->getPosX(), 2) + pow(src->getPosY() - dest->getPosY(), 2));
        std::cout << this->getName() << " en mouvement. " << this->dep << " jour de voyage." << std::endl;
        it = src->getFlottes().erase(it);
        dest->addFlotte(this);
        return;
        }
    }
    std::cout << "Flotte inexistante." << std::endl;
}
