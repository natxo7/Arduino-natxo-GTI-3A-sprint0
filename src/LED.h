// -*- mode: c++ -*-
//clase LED
#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// ----------------------------------------------------------
// Jordi Bataller i Mascarell
// 2019-07-07
// ----------------------------------------------------------

// ----------------------------------------------------------
// ----------------------------------------------------------
//tiempo-->esperar()-->
void esperar (long tiempo) {
  //esta funcion metera un delay
  //param:tiempo
  //no devuelve nada
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
  int numeroLED;
  bool encendido;
public:

  // .........................................................
  // .........................................................
  LED (int numero)
	: numeroLED (numero), encendido(false)
  {
	pinMode(numeroLED, OUTPUT);
	apagar ();
  }

  // .........................................................
  // .........................................................
  void encender () {
    //se utiliza para encender el led
	digitalWrite(numeroLED, HIGH);
	encendido = true;
  }

  // .........................................................
  // .........................................................
  void apagar () {
    //se utiliza para apagar el LED
	  digitalWrite(numeroLED, LOW);
	  encendido = false;
  }

  // .........................................................
  // .........................................................
  void alternar () {
    //se utliza para ir variando entre encender y apagar
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
  } // ()

  // .........................................................
  // .........................................................
  //tiempo-->brillar()-->
  void brillar (long tiempo) {
    //funcion brillar enciende el led durante un tiempo y luego lo apaga
	encender ();
	esperar(tiempo);
	apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
