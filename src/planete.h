/*
** planete.h for  in /home/pinty_f//Desktop/perso/rebellion
** 
** Made by felix pinty
** Login   <pinty_f@epitech.net>
** 
** Started on  Thu Jun  7 20:50:13 2012 felix pinty
** Last update Mon Jun 11 14:38:12 2012 felix pinty
*/

#ifndef	__PLANETE_H__
#define	__PLANETE_H__

#include	"personnel.h"
#include	"flotte.h"
#include	<list>

class	planete
{
 private:
  std::string		name;
  int			DUG;
  std::list<flotte>	flottes;
  std::list<perso>	personnel;
  // std::list		unit;
  //std::list		instalation;

  int			diplomatie;
 public:
  void addFlotte(flotte &);
  void showFlotte();
  void addPerso(perso &);
  void showPerso();
  planete();
  planete(std::string);
  ~planete();
};

#endif
