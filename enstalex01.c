/* 
Program: STALEX01
By:	 Alejandro Alonso-Puig
Date:    August 30th, 2003

Program for the control of ST-Alexandrus
It makes walk forwards the robot by the movement of its legs
in groups of three, as well as to turn when an obstacle is found
by its antennas.
*/

#include	<pic.h>
#define		ValPause1	200 /* Max time current is applied to wires*/
#define		ValPause2	640 /* Pause value (relaxation) between legs movement */

#define		Izda1		RB0 /* Lef1
#define		Izda2		RA2 /* Lef2
#define		Izda3		RA3 /* Lef3
#define		Dcha1		RB1 /* Right1
#define		Dcha2		RB2 /* Right2
#define		Dcha3		RB3 /* Right3

#define		AntenaDcha	RB4 /* Right Antenna
#define		AntenaIzda	RB5 /* Left Antenna

#define		On			1
#define		Off			0


void Pausa (unsigned Periodo);

main(void)
{
	/* OUTPUTS */
	TRISB0 = 0; /* Left leg 1 */
	TRISA2 = 0; /* Left leg 2 */
	TRISA3 = 0; /* Left leg 3 */
	TRISB1 = 0; /* Right leg 1 */
	TRISB2 = 0; /* Right leg 2 */
	TRISB3 = 0; /* Right leg 3 */

	/* INPUTS */
	TRISB4 = 1; /* Right Antenna */
	TRISB5 = 1; /* Left Antenna */

	PORTA = PORTB = Off;

	for(;;) {
		if(AntenaDcha != Off) {
			/* Right Antenna found an obstacle */
			/* Alternative movement left legs */
			Dcha1 = Dcha2 = Dcha3 = Off; /*We stope right legs*/

			Izda1 = On;
			Izda2 = Izda3 = Off;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Izda1 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);

			Izda2 = On;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Izda2 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);

			Izda3 = On;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Izda3 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);
		}
		else if (AntenaIzda != Off) {
			/* Left Antenna found an obstacle */
			/* Alternative movement right legs */
			Izda1 = Izda2 = Izda3 = Off; /*We stope leftlegs*/

			Dcha1 = On;
			Dcha2 = Dcha3 = Off;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Dcha1 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);

			Dcha2 = On;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Dcha2 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);

			Dcha3 = On;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Dcha3 = Off;			/* muscle wires damage*/
			Pausa (ValPause2);
		}
		else
		{
		/* ONE STEP */
			Izda1 = Dcha2 = Izda3 = On; 
			Dcha1 = Izda2 = Dcha3 = Off;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Izda1 = Dcha2 = Izda3 = Off;	/* muscle wires damage*/
			Pausa (ValPause2*2);
				
			/* OTRO PASO */
			Izda1 = Dcha2 = Izda3 = Off; 
			Dcha1 = Izda2 = Dcha3 = On;
			Pausa (ValPause1);		/* We stop applying current for avoiding */
			Dcha1 = Izda2 = Dcha3 = Off;	/* muscle wires damage*/

			Pausa (ValPause2*2);

		}
	}
}

void Pausa (unsigned Periodo)
/* Make a pause */
{
	unsigned Delay, Del2;
	for(Delay = Periodo ; --Delay ;)
		for(Del2 = 100 ; --Del2 ;) continue;
}