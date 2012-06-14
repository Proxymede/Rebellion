/*
** planete.h for  in /home/pinty_f//Desktop/perso/rebellion
**
** Made by felix pinty
** Login   <pinty_f@epitech.net>
**
** Started on  Thu Jun  7 20:50:13 2012 felix pinty
** Last update Tue Jun 12 16:34:59 2012 felix pinty
*/

#ifndef	__PLANETE_H__
#define	__PLANETE_H__

#include	<list>

#include	"personnel.h"
#include    "flotte.h"

class	flotte;
class   perso;

class	planete
{
 private:
  std::string		name;
  int			posX;
  int			posY;
  std::list<flotte>	flottes;
  std::list<perso>	personnel;
  //std::list		unit;
  //std::list		instalation;

  int			diplomatie;
 public:
  void addFlotte(flotte *);
  void showFlotte();

  void addPerso(perso *);
  void showPerso();

  std::string   getName();

  int	getPosX();
  int	getPosY();

  std::list<flotte>	&getFlottes();
  std::list<perso>  &getPerso();

  planete();
  planete(std::string, int, int);
  ~planete();
};

#endif
