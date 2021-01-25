#include "system.h"

WINDOW* wmap = NULL;


char map[40][100] = {
	"#---------#---------^---------^---------^---------^---------^---------^---------#---------#",
	"|  BEBAS  |  PROP 5 |  KESEM  |  PROP 5 |  WISATA |  PROP 5 |  PROP 5 |  PROP 5 |  MASUK  |",
	"|         |         |         |         |         |         |         |         |         |",
	"|  PARKIR | $22.000 |  PATAN  | $22.000 | $20.000 | $26.000 | $26.000 | $15.000 | PENJARA |",
	"#---------#---------^---------^---------^---------^---------^---------^---------#---------#",
	"|  PROP 4 |                                                                     |  WISATA |",
	"|         |                                                                     |         |",
	"| $20.000 |                                                                     | $30.000 |",
	"<--------->                                                                     <--------->",
	"|  WISATA |                                                                     |  PROP 6 |",
	"|         |                                                                     |         |",
	"| $18.000 |                                                                     | $30.000 |",
	"<--------->                                                                     <--------->",
	"|  PROP 4 |                                                                     |  PROP 6 |",
	"|         |                                                                     |         |",
	"|  UMUM   |                                                                     | $35.000 |",
	"<--------->                                                                     <--------->",
	"|  KESEM  |                                                                     |  KESEM  |",
	"|         |                                                                     |         |",
	"|  PATAN  |                                                                     |  PATAN  |",
	"<--------->                                                                     <--------->",
	"|  PROP 3 |                     #------------------------#                      |  PROP 7 |",
	"|         |                     |                        |                      |         |",
	"| $20.000 |                     |          KARTU         |                      | $20.000 |",
	"<--------->                     |                        |                      <--------->",
	"|  PROP 3 |                     |       KESEMPATAN       |                      |PJK MASUK|",
	"|         |                     |                        |                      |         |",
	"| $16.000 |                     #------------------------#                      | $14.000 |",
	"<--------->                                                                     <--------->",
	"|PJK MASUK|                                                                     |  PROP 7 |",
	"|         |                                                                     |         |",
	"| $14.000 |                                                                     | $35.000 |",
	"#---------#---------^---------^---------^---------^---------^---------^---------#---------#",
	"|  HANYA  |  PROP 2 |  PROP 2 |  PROP 2 |  WISATA |  PROP 1 |  KESEM  |  PROP I |  START  |",
	"|         |         |         |         |         |         |         |         |  :*@!~  |",
	"|  LEWAT  | $12.000 | $10.000 | $10.000 | $20.000 |  $6.000 |  PATAN  |  $6.000 |+$20.000 |",
	"#---------#---------^---------^---------^---------^---------^---------^---------#---------#"
	};

int board[32] = {
	1,	// start
	6,	// properti
	5,	// kesempatan
	6,	// properti
	6,	// properti wisata
	6,	// properti
	6,	// properti
	6,	// properti
	3,	// hanya lewat
	4,	// pajak
	6,	// properti
	6,	// properti
	5,	// kesempatan
	6,	// properti
	6,	// properti wisata
	6,	// properti
	2,	// bebas parkir / pintu kemana saja
	6,	// properti
	5,	// kesempatan
	6,	// properti
	6,	// properti wisata
	6,	// properti
	6,	// properti
	6,	// properti
	0,	// masuk penjara
	6,	// properti wisata
	6,	// properti
	6,	// properti 
	5,	// kesempatan
	6,	// properti
	4,	// pajak
	6,	// properti
};

// modul untuk menampilkan papan monopoly
void DrawMap(){
	touchwin(wmap);

	for(int i=0; i<37; i++){
        waddstr(wmap, map[i]);
        waddch(wmap,'\n');
    }

	wrefresh(wmap);
}


