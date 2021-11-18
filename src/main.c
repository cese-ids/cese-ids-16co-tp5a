/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/

int main(int argc, char *argv[]) {
    char cadena[128];

    if (LuisStoraccio(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (AlexanderSantos(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (AndreaGarcia(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
    if (AlejandroVirgillo(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (GonzaloVila(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (MartinJuarez(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }    
    
    if (LautaroVera(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (EmilianoRodriguez(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
<<<<<<< HEAD
    if (GuillermoCastiglioni(cadena, sizeof(cadena))) {
=======
        if (JorgeGabrielSchmidt(cadena, sizeof(cadena))) {
>>>>>>> d7be708239b181d64e1cabd717cdd03597d664d0
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

<<<<<<< HEAD
    if (MarianoFinochietto(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (RicardoAlvarez(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
    if (EzequielAcerbo(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena); 
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (FedericoFarfan(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
     
=======
>>>>>>> d7be708239b181d64e1cabd717cdd03597d664d0
    return 0;
}
