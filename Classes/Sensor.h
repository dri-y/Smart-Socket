#ifndef SENSOR_H
#define SENSOR_H


class Sensor{

private:

    int trigger;
    int echo;
    float distancia;
    float limite;

public:

    Sensor(int trig, int ech, float lim = 20)
    {
        trigger = trig;
        echo = ech;
        limite = lim;
        distancia = 0;
    }


    void iniciar(){

        pinMode(trigger, OUTPUT);
        pinMode(echo, INPUT);

    }


    void atualizar(){

        digitalWrite(trigger, LOW);
        delayMicroseconds(2);

        digitalWrite(trigger, HIGH);
        delayMicroseconds(10);

        digitalWrite(trigger, LOW);


        long tempo = pulseIn(echo, HIGH);

        distancia = tempo * 0.0343 / 2;

    }


    float getDistancia(){

        return distancia;

    }


    bool detectouPessoa(){

        return distancia <= limite;

    }

};
#endif 
