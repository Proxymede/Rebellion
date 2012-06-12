/*
** systeme.h for  in /home/pinty_f//Desktop/perso/rebellion/src
** 
** Made by felix pinty
** Login   <pinty_f@epitech.net>
** 
** Started on  Mon Jun 11 15:03:02 2012 felix pinty
** Last update Mon Jun 11 16:11:40 2012 felix pinty
*/

#ifndef	__SYSTEME_H__
#edfine	__SYSTEME_H__

class	systeme
{
 private:
  std::string		name;
  std::list<planete>	planetes;
 public:
  void	addPlanete(planete &);
  void	showPlanete();
};

#endif
