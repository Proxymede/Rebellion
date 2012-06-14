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
    perso   *talon = new perso("Talon");
    planete	*hoth = new planete("Hoth", 30, 30);
    planete	*tatoinne = new planete("tatoinne", 0, 90);
    flotte	*flotille = new flotte("501'ene", tatoinne);
    flotte	*starfleat = new flotte("Starfleat", tatoinne);
    vaisseau	*fregateM = new vaisseau(0 , 0, 0, "Fregate medicale");
    vaisseau	*fregateA = new vaisseau(0 , 0, 0, "Fregate d'assault");

    vaisseau	*starimp = new vaisseau(0 , 0, 0, "Stardestroyer de classe imperial");
    vaisseau	*starvic = new vaisseau(0 , 0, 0, "Stardestroyer de classe victoire");

  hoth->addFlotte(flotille);
  hoth->addFlotte(starfleat);
  starfleat->addPerso(talon);

  flotille->addShip(fregateM);
  flotille->addShip(fregateA);
  starfleat->addShip(starimp);
  starfleat->addShip(starvic);

talon->move(starfleat, tatoinne);
talon->move(hoth, tatoinne);
}
