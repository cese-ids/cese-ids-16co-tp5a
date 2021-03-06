/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool LuisDavidDiazCharris(char * cadena, size_t espacio);

bool LuisStoraccio(char * cadena, size_t espacio);

bool RicardoAlvarez(char * cadena, size_t espacio);

bool GonzaloVila(char * cadena, size_t espacio);

bool AlexanderSantos(char * cadena, size_t espacio);

bool AndreaGarcia(char * cadena, size_t espacio);

bool AlejandroVirgillo(char * cadena, size_t espacio);

bool MartinJuarez(char * cadena, size_t espacio);

bool LautaroVera(char * cadena, size_t espacio);

bool EstebanVolentini(char * cadena, size_t espacio);

bool MarianoFinochietto(char * cadena, size_t espacio);

bool EmilianoRodriguez(char * cadena, size_t espacio);

bool EzequielAcerbo(char * cadena, size_t espacio);

bool FedericoFarfan(char * cadena, size_t espacio);

bool GuillermoCastiglioni(char * cadena, size_t espacio);

bool JorgeGabrielSchmidt(char * cadena, size_t espacio);

bool HectorRizo (char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
