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

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}


bool LuisDavidDiazCharris(char * cadena, size_t espacio) {
     const struct alumno_s alumno = {
        .apellidos = "Diaz Charris",
        .nombres = "Luis David",
        .documento = "1.043.875.625",
    };
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool LuisStoraccio(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "Storaccio",
        .nombres = "Luis Sebastián",
        .documento = "34.692.133",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GonzaloVila(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "Vila",
        .nombres = "Gonzalo Manuel",
        .documento = "31.061.045",
     };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AlexanderSantos(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "SANTOS REYES",
        .nombres = "Alexander Jesus",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AndreaGarcia(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "GARCÍA",
        .nombres = "Andrea Estefanía",
        .documento = "0103996112",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AlejandroVirgillo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VIRGILLO",
        .nombres = "Alejandro Daniel",
        .documento = "38.996.297",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MartinJuarez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "JUAREZ",
        .nombres = "Martin Gustavo",
        .documento = "28.223.959",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}       

bool LautaroVera(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VERA",
        .nombres = "Lautaro Juan Bautista",
        .documento = "37.585.785",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}   

bool MarianoFinochietto(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "FINOCHIETTO",
        .nombres = "Jose Mariano",
        .documento = "34.851.197",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EmilianoRodriguez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "RODRIGUEZ",
        .nombres = "Emiliano Eduardo",
        .documento = "32.931.929",
    };
    
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EzequielAcerbo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "Acerbo",
        .nombres = "Ezequiel",
        .documento = "28895215",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool RicardoAlvarez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ALVAREZ RUCH",
        .nombres = "Ricardo Arturo",
        .documento = "95.786.583",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool FedericoFarfan(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "FARFAN",
        .nombres = "ROBERTO FEDERICO",
        .documento = "28.543.836",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GuillermoCastiglioni(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "CASTIGLIONI",
        .nombres = "Guillermo Luis",
        .documento = "31.195.851",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JorgeGabrielSchmidt(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "SCHMIDT",
        .nombres = "Jorge Gabriel",
        .documento = "31.954.173",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}



bool HectorRizo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "RIZO",
        .nombres = "Hector Ramon",
        .documento = "25.522.523",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
/*=====[Implementations of private functions]================================*/
=======
>>>>>>> 9491e267d4a22158c17bc5e21410fff829002d44
/*=====[Implementations of private functions]================================*/

