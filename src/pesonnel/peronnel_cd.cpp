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
#include	"../header/personnel.h"


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

perso::~perso()
{
}
