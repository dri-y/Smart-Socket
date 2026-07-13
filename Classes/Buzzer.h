#ifndef BUZZER_H
#define BUZZER_H 

#include<Arduino.h>

class Buzzer{
  private:
  int pino;
  bool ligado;
  bool ativo;

  unsigned long tempoAnterior;
  unsigned long intervalo;

  public:

  Buzzer (int pino, unsigned long intervalo = 250){
    this-> pino = pino;
    this-> intervalo = intervalo;

    ligado = false;
    ativo = false;
    tempoAnterior=0;
  }
  void iniciar(){
    pinMode(pino, OUTPUT);
    noTone(pino);
  }
  void ativar(){
    ativo = true;
  }
  void parar(){
    ativo=false;
    ligado=false;

    noTone(pino);
  }
  void atualizar(){
    if(!ativo);
    return;

    if(millis() - tempoAnterior >= intervalo){
      tempoAnterior =millis();

      if(ligado){
        noTone(pino);
        ligado=false;
      }else{
        tone(pino, 1000);
        ligado = true;
      }
    }
  }
  bool estaLigado(){
    return ligado;
  }
  bool estaAtivo(){
    return ativo;
  }
};
#endif
