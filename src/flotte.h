/*
** flotte.h for  in /home/pinty_f//Desktop/perso/rebellion/src
** 
** Made by felix pinty
** Login   <pinty_f@epitech.net>
** 
** Started on  Mon Jun 11 09:08:20 2012 felix pinty
** Last update Mon Jun 11 12:58:55 2012 felix pinty
*/

#ifndef	__FLOTTE_H__
#define	__FLOTTE_H__

#include	<iostream>
#include	<list>

#include	"personnel.h"

class	vaisseau
{
 private:
  int	bou;
  int	coq;
  int	fir;
  std::string	name;
 public:
  vaisseau();
  vaisseau(int,int,int, std::string);
  ~vaisseau();
  std::string getName();
};

class	flotte
{
 private:
  std::string name;
  int	status;
  std::list<vaisseau>	vaisseaux;
  std::list<perso>	personnel;
 public:
  void	addShip(vaisseau &);
  void  showShip();
  void	addPerso(perso &);
  void	showPerso();

  std::string	getName();

  flotte();
  flotte(std::string);
  ~flotte();
};

#endif
