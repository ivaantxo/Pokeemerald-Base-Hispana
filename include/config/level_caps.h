#ifndef GUARD_CONFIG_LEVEL_CAP_H
#define GUARD_CONFIG_LEVEL_CAP_H

// Constantes
#define EXP_CAP_NONE                    0 // Comportamiento regular, no se aplican límites de nivel
#define EXP_CAP_HARD                    1 // Los Pokémon con un nivel >= el límite de nivel no pueden ganar experiencia
#define EXP_CAP_SOFT                    2 // Los Pokémon con un nivel >= el límite de nivel ganarán experiencia reducida

#define LEVEL_CAP_NONE                  0 // Sin límite de nivel, solo aplicable si B_EXP_CAP_TYPE es EXP_CAP_NONE
#define LEVEL_CAP_FLAG_LIST             1 // El límite de nivel se elige de acuerdo con la primera flag no establecida en `sLevelCapFlagMap`
#define LEVEL_CAP_VARIABLE              2 // El límite de nivel se elige de acuerdo con el contenido de la variable de evento especificada por B_LEVEL_CAP_VARIABLE

// Configuraciones
#define B_EXP_CAP_TYPE                  EXP_CAP_NONE   // [EXP_CAP_NONE, EXP_CAP_HARD, EXP_CAP_SOFT] elige el tipo de límite de nivel a aplicar
#define B_LEVEL_CAP_TYPE                LEVEL_CAP_NONE // [LEVEL_CAP_NONE, LEVEL_CAP_FLAG_LIST, LEVEL_CAP_VARIABLE] elige el método para derivar el límite de nivel
#define B_LEVEL_CAP_VARIABLE            0 // variable de evento utilizada para derivar el límite de nivel si B_LEVEL_CAP_TYPE está configurado en LEVEL_CAP_VARIABLE

#define B_RARE_CANDY_CAP                FALSE // Si se establece en TRUE, los Caramelos Raros no se pueden usar para superar el límite de nivel
#define B_LEVEL_CAP_EXP_UP              FALSE // Si se establece en TRUE, los Pokémon por debajo del límite de nivel recibirán más experiencia

#endif /* GUARD_CONFIG_LEVEL_CAP_H */
