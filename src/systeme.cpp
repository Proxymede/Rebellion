//
// systeme.cpp for  in /home/pinty_f//Desktop/perso/rebellion/src
// 
// Made by felix pinty
// Login   <pinty_f@epitech.net>
// 
// Started on  Mon Jun 11 15:03:00 2012 felix pinty
// Last update Mon Jun 11 16:11:43 2012 felix pinty
//


systeme::systeme()
{
  this->name = "NULL";
}

systeme::systeme(std::string name)
{
  this->name = name;
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

systeme::~systeme()
{
}
