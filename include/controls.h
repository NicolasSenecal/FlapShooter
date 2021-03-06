/*
 * controls.h
 * Déclaration de la structure et des fonctions de contrôles
 *
 * Auteur : Nicolas CUSUMANO & Nicolas SENECAL
 * IMAC1 - S2 - Promotion 2020
 */

#ifndef CONTROLS_H
#define CONTROLS_H

#include <stdlib.h>
#include <stdio.h>

#include "entity.h"
#include "settings.h"
#include "tools.h"
#include "display.h"
#include "level.h"
#include "collision.h"
#include "shot.h"

typedef struct controls {
  int space, up, down, right, left;
} Controls;

/*
 * initControls
 * Initialise les valeurs d'une structure Controls
 * Retourne une structure Controls
 */
Controls initControls();

/*
 * executeControls
 * Exécute les controles du joueur
 * <c> : controles du joueur
 * <*level> : pointeur vers level
 * <cam> : Caméra
 */
void executeControls(Controls c, Level *level, Camera cam);

#endif
