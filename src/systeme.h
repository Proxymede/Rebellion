/*
** systeme.h for  in /home/pinty_f//Desktop/perso/rebellion/src
** 
** Made by felix pinty
** Login   <pinty_f@epitech.net>
** 
** Started on  Mon Jun 11 15:03:02 2012 felix pinty
** Last update Tue Jun 12 15:00:09 2012 felix pinty
*/

#ifndef	__SYSTEME_H__
#define	__SYSTEME_H__


#include	"planete.h"

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
