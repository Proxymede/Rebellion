/*
** personnel.h for  in /home/pinty_f//Desktop/perso/rebellion
**
** Made by felix pinty
** Login   <pinty_f@epitech.net>
**
** Started on  Tue May 29 10:24:24 2012 felix pinty
** Last update Mon Jun 11 13:16:10 2012 felix pinty
*/

#ifndef	__PERSONNEL_H__
#define	__PERSONNEL_H__

#include	<iostream>
#include    <math.h>
#include    "planete.h"

class   planete;
class   flotte;

class	perso
{
 private:
  int	cbt;
  int	esp;
  int	dip;
  int	cha;
  int   dep;
  std::string name;

 public:
  std::string	getName();
  void          move(planete *, planete *);
  void          move(flotte *, planete *);

  perso();
  perso(std::string);
  perso(int,int,int,int,std::string);
  ~perso();
};

#endif
