#include "inc/fis.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void menu(){

int choice=0;
float speed, velocity, course_time =0;
float dist=0;
float kph, mps=0, modulo_vet;
double angle;
VECTOR vet;

  printf("Bem Vindo a API de Fisica, Etapa 2!\n");//printa o menu bonito
  printf("-----------Escolha Operacao--------\n");
  printf("1.Decomposicao de Vetor\n");
  printf("2.Calculador de Distancia\n");
  printf("3.Conversor de K/H para M/S\n");
  scanf("%d", &choice);

  switch(choice){

    case 1:
      init_vector(&vet);
      printf("Digite um Angulo: \n");
      scanf("%lg", &angle);
      printf("Digite Modulo:\n");
      scanf("%f", &modulo_vet);
      decomposing_force(modulo_vet, angle, &vet);
      printf("Component X: %.4lf\n", vet.x);
      printf("Component Y: %.4lf\n", vet.y);
      break;

    case 2:
      printf("Digite Velocidade: \n");
      scanf("%f", &speed);
      printf("Digite Aceleracao: \n");
      scanf("%f", &velocity);
      printf("Digite Tempo: \n");
      scanf("%f", &course_time);
      calcDis(speed, velocity, course_time);
      break;

    case 3:
      printf("Digite K/H: ");
      scanf("%f", &kph);
      kmp2mps(kph);
      break;

    case -1:
      break;

    default:
      printf("YOUR STUPID\n");
      system("clear");
      menu();

  }



}

void init_vector(VECTOR *vect)
{
    vect->x = 0.0;
    vect->y = 0.0;
}

void decomposing_force(float magnitude_vect, double angle, VECTOR *deco_vect)
{
    deco_vect->x = sin(angle) * magnitude_vect;
    deco_vect->y = cos(angle) * magnitude_vect;
}

void calcDis(float speed,float velocity,float course_time){

//  float speed, velocity, course_time =0;
    float dist = 0.0;

    dist = (speed*course_time)+(0.5*velocity*course_time*course_time);
    //dist = dist/2;
    printf("The distance was: %.3f\n",dist);

}

void kmp2mps(float kph){

    float mps = 0.0;

    mps = kph * 3.6;

    printf("%.3f meters per second\n", mps);

}
