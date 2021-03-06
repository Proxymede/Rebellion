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

void	planete::addFlotte(flotte *add)
{
  this->flottes.push_back(*add);
  std::cout << "The " << add->getName() << " as been add to " << this->name << "." << std::endl;
}

void	planete::showFlotte()
{
  std::list<flotte>::iterator it;

  it = this->flottes.begin();
  std::cout<<"Fleat on " << this->name << " :" << std::endl;
  for (this->flottes.begin(); it != this->flottes.end(); ++it)
    {
      std::cout << "\t" << it->getName() << std::endl;
    }
}

void	planete::addPerso(perso *add)
{
  this->personnel.push_back(*add);
  std::cout << "The " << add->getName() << " as been add to " << this->name << "." << std::endl;
}

void	planete::showPerso()
{
  std::list<perso>::iterator it;

  it = this->personnel.begin();
  for (this->personnel.begin(); it != this->personnel.end(); ++it)
    {
      std::cout << it->getName() << std::endl;
    }
}
