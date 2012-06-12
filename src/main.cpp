//
// main.cpp for  in /home/pinty_f//Desktop/perso/rebellion
// 
// Made by felix pinty
// Login   <pinty_f@epitech.net>
// 
// Started on  Tue May 29 10:31:46 2012 felix pinty
// Last update Mon Jun 11 16:11:46 2012 felix pinty
//

#include	"planete.h"

int	main()
{
  planete	hoth("Hoth", 30);
  flotte	flotille;
  flotte	starfleat("Starfleat");

  perso		Talon("Talon");
  perso		Wedge("Wedge");

  perso		Tycho("Tycho");
  perso		Dash("Dash");

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
  flotille.addPerso(Talon);
  starfleat.addPerso(Wedge);
  hoth.addPerso(Dash);
  hoth.addPerso(Tycho);;
  flotille.showShip();
  flotille.showPerso();
  starfleat.showPerso();
  hoth.showPerso();
  hoth.showFlotte();
}
