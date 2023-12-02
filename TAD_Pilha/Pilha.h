#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>

#define MAX 400

typedef struct pilha Pilha;

Pilha* iniciar_pilha();

bool empilhar(int elem, Pilha *pilha);
bool desempilhar(Pilha *pilha);
bool esta_cheia(Pilha *pilha);
bool esta_vazia(Pilha *pilha);