//
// planete.cpp for  in /home/pinty_f//Desktop/perso/rebellion
// 
// Made by felix pinty
// Login   <pinty_f@epitech.net>
// 
// Started on  Thu Jun  7 20:58:22 2012 felix pinty
// Last update Mon Jun 11 14:39:58 2012 felix pinty
//

#include	"planete.h"

planete::planete()
{
  this->name = "NULL";
}

planete::planete(std::string name, int DUG)
{
  this->DUG = DUG;
  this->name = name;
}

void	planete::addFlotte(flotte & add)
{
  this->flottes.push_back(add);
  std::cout << "The " << add.getName() << " as been add to " << this->name << "." << std::endl;
}

void	planete::showFlotte()
{
  std::list<flotte>::iterator it;

  it = this->flottes.begin();
  for (this->flottes.begin(); it != this->flottes.end(); ++it)
    {
      std::cout << it->getName() << std::endl;
    }
}

void	planete::addPerso(perso & add)
{
  this->personnel.push_back(add);
  std::cout << "The " << add.getName() << " as been add to " << this->name << "." << std::endl;
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

planete::~planete()
{
}