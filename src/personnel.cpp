//
// personnel.cpp for  in /home/pinty_f//Desktop/perso/rebellion
//
// Made by felix pinty
// Login   <pinty_f@epitech.net>
//
// Started on  Tue May 29 10:27:43 2012 felix pinty
// Last update Mon Jun 11 13:15:51 2012 felix pinty
//

#include    <list>
#include	"personnel.h"

perso::perso(int cbt, int esp, int dip, int cha, std::string name)
{
  this-> cbt = cbt;
  this-> esp = esp;
  this-> dip = dip;
  this-> cha = cha;
  this-> name = name;
  this-> dep = 0;
  std::cout << this->name << " on duty!" << std::endl;
}

perso::perso()
{
  this-> cbt = 0;
  this-> esp = 0;
  this-> dip = 0;
  this-> cha = 0;
  this-> dep = 0;
  this-> name = "NULL";
  std::cout << this->name << " on duty!" << std::endl;
}

perso::perso(std::string name)
{
  this-> cbt = 0;
  this-> esp = 0;
  this-> dip = 0;
  this-> cha = 0;
  this-> dep = 0;
  this-> name = name;
  std::cout << this->name << " on duty!" << std::endl;
}

void        perso::move(planete *src, planete *dest)
{
    std::list<perso>::iterator it;

    it = src->getPerso().begin();
    for (src->getPerso().begin(); it != src->getPerso().end(); ++it)
    {
        if (this->getName() == it->getName())
        {
        if (this->dep != 0)
            {
            std::cout << "Personnel deja en mouvement " << this->dep << " jour restant." << std::endl;
            return;
            }
        this->dep = sqrt(pow(src->getPosX() - dest->getPosX(), 2) + pow(src->getPosY() - dest->getPosY(), 2));
        std::cout << this->getName() << " en mouvement. " << this->dep << " jour de voyage." << std::endl;
        it = src->getPerso().erase(it);
        dest->addPerso(this);
        return;
        }
    }
    std::cout << "Personnage inexistante." << std::endl;
}

void        perso::move(flotte *src, planete *dest)
{
    std::list<perso>::iterator it;

    it = src->getPerso().begin();
    for (src->getPerso().begin(); it != src->getPerso().end(); ++it)
    {
        if (this->getName() == it->getName())
        {
        if (this->dep != 0)
            {
            std::cout << "Personnel deja en mouvement " << this->dep << " jour restant." << std::endl;
            return;
            }
        if (src->getDep() != 0)
            {
            std::cout << "Flotte deja en mouvement " << src->getDep() << " jour restant." << std::endl;
            return;
            }
        this->dep = sqrt(pow(src->getPosX() - dest->getPosX(), 2) + pow(src->getPosY() - dest->getPosY(), 2));
        std::cout << this->getName() << " en mouvement. " << this->dep << " jour de voyage." << std::endl;
        it = src->getPerso().erase(it);
        dest->addPerso(this);
        return;
        }
    }
    std::cout << "Personnage inexistante." << std::endl;
}

perso::~perso()
{
}

std::string	perso::getName()
{
  return (this->name);
}
