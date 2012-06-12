//
// systeme.cpp for  in /home/pinty_f//Desktop/perso/rebellion/src
// 
// Made by felix pinty
// Login   <pinty_f@epitech.net>
// 
// Started on  Mon Jun 11 15:03:00 2012 felix pinty
// Last update Tue Jun 12 16:26:12 2012 felix pinty
//

#include	"systeme.h"


systeme::systeme()
{
  this->name = "NULL";
}

systeme::systeme(std::string name)
{
  this->name = name;
}

void	systeme::addSysteme(planete & add)
{
  this->planete.push_back(add);
  std::cout << "The " << add.getName() << " as been add to " << this->name << "." << std::endl;
}

void	systeme::showSysteme()
{
  std::list<planete>::iterator it;

  it = this->planetes.begin();
  for (this->planetes.begin(); it != this->planetes.end(); ++it)
    {
      std::cout << it->getName() << std::endl;
    }
}

systeme::~systeme()
{
}
