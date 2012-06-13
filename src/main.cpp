//
// main.cpp for  in /home/pinty_f//Desktop/perso/rebellion
//
// Made by felix pinty
// Login   <pinty_f@epitech.net>
//
// Started on  Tue May 29 10:31:46 2012 felix pinty
// Last update Tue Jun 12 21:30:52 2012 felix pinty
//

#include	"systeme.h"
#include	"planete.h"
#include	"flotte.h"


int	main(void)
{
  planete	hoth("Hoth", 30, 30);
  planete	tatoinne("tatoinne", 0, 90);
  flotte	flotille("501'ene");
  flotte	starfleat("Starfleat");
  vaisseau	fregateM(0 , 0, 0, "Fregate medicale");
  vaisseau	fregateA(0 , 0, 0, "Fregate d'assault");

  vaisseau	starimp(0 , 0, 0, "Stardestroyer de classe imperial");
  vaisseau	starvic(0 , 0, 0, "Stardestroyer de classe victoire");

  hoth.addFlotte(flotille);
  hoth.addFlotte(starfleat);
  flotille.addShip(fregateM);
  flotille.addShip(fregateA);
  starfleat.addShip(starimp);
  starfleat.addShip(starvic);

  hoth.showFlotte();
  tatoinne.showFlotte();

  flotille.move(hoth, tatoinne);

  hoth.showFlotte();
  tatoinne.showFlotte();

  flotille.move(hoth, tatoinne);

 /* std::cout<<std::endl<<std::endl;
  hoth.showFlotte();
  tatoinne.showFlotte();
  std::cout<<std::endl<<std::endl;*/
  return (42);
}
