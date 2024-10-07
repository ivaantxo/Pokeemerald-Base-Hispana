## Pokeemerald Base Hispana o PBH
Somos un proyecto de decompilación de Pokémon Esmeralda, basado en pokeemerald-expansion de RHH, que está pensado para ser usado como base para la comunidad hispana. Para ello, hemos traducido completamente el juego original, hemos añadido mecánicas exclusivas y configurables, y hemos limpiado buena parte de funciones y gráficos que no se usaban en el repositorio original, para facilitar la creación de un hackrom.

## ¿Qué es Pokeemerald Base Hispana?
Pokeemerald Base Hispana o PBH es un proyecto creado por un grupo de romhackers hispanohablantes, cuyo objetivo principal es proporcionar a la comunidad de rom hacking hispana una base sólida y accesible en su idioma nativo.

Nos enfocamos en la traducción completa del contenido, incluyendo habilidades, movimientos, descripciones, interfaces y mucho más. Esto facilita que tanto pequeños como grandes proyectos puedan contar con una base completamente traducida desde la cual desarrollar sus ideas.

Además, mantenemos un soporte activo, lo que significa que cada vez que se lancen actualizaciones del proyecto original de RHH, nosotros adaptaremos y actualizaremos nuestra versión.

También contamos con un índice de aportes únicos que explicaremos a continuación.

## Características Adicionales
Además de los contenidos proporcionados por el equipo de RHH, PBH incluye sus propias adiciones y mejoras, entre las cuales destacan:

- Tutoriales: Instrucciones detalladas que pueden ayudar en el desarrollo de diversos aspectos del juego, como la carga de backgrounds, sprites... con ejemplos explicativos como puede ser un minijuego básico para entender la carga de sprites y backgrounds. Los podemos encontrar para activar o desactivar en include/config/tutoriales.h

![tutorial_zubat](https://i.ibb.co/tLzDyyM/imagen-2024-09-30-201320662.png)
![tuto1](https://i.ibb.co/CKVn7WY/imagen-2024-09-30-201410545.png)
![tuto2](https://i.ibb.co/6DR8WLx/imagen-2024-09-30-201514267.png)

- Rama de iconos: Los iconos de los Pokémon han sido sustituidos por sus sprites para el OW. Esto tiene muchas ventajas: Se reduce el número de paletas que hay que editar de un Pokémon, los iconos adoptan la paleta shiny automáticamente, se tiene que editar menos gráficos de cualquier Pokémon... Además, contamos con versiones de 64x64 para followers grandes para el OW. Estos son configurables con OW_LARGE_OW_SUPPORT, aunque en cualquier caso, todos los sprites para el OW de los Pokémon serán 32x32.

![Iconos_huevos](https://i.ibb.co/dbZ9qsr/imagen-2024-09-30-201211859.png)
![Iconos](https://i.ibb.co/jbM4KPD/imagen-2024-09-30-201132866.png)

- Sprites de Overworld: Los sprites están completamente indexados y actualizados para su uso.

- Paletas únicas para los sprites basadas en la personalidad del Pokémon.

![paleta1](https://i.ibb.co/d5XzKCd/imagen-2024-10-02-230856069.png)
![paleta2](https://i.ibb.co/7JyNVJQ/imagen-2024-10-02-230944120.png)
![paleta3](https://i.ibb.co/RjZ7Gfq/imagen-2024-10-02-231120268.png)

- Nuevas configs, que podrás encontrar para activar o desactivarlas en include/config/pbh.h:
    - PBH_PALETAS_UNICAS -> Las paletas de los Pokémon varían según su personalidad, y esto se ve reflejado tanto en sus sprites de combate como en sus minisprites para el OW.
    - PBH_ALMACENAMIENTO_RAPIDO -> El almacenamiento Pokémon va mucho más rápido.
    - PBH_HUEVOS_COLOR_TIPO -> Con esta config activada la paleta de los huevos corresponde con los tipos del Pokémon que haya dentro.

- Mejoras en el sistema del código:
    - Limpieza de gráficos y funciones no utilizadas.
    - Sistema para ajustar el ancho de cada carácter de las fuentes.
    - Nuevo sistema de paletas para los árboles de bayas.

- Sistema de Minería estilo DPPt por Caco:

![mineria](https://i.ibb.co/1KBmL6G/mineria.gif)


## Planes a futuro
A futuro, seguiremos añadiendo y actualizando los tutoriales para ofrecer una amplia variedad de recursos a disposición de la comunidad.

- Tenemos planteado crear una rama nueva que será sin mapas para que podais empezara  mapear vuestra región propia sin necesidad de eliminar los anteriores.

- En el futuro, seguiremos añadiendo contenido como battle backgrounds de generaciones posteriores, sprites de batalla o de OW de entrenadores de nuevas generaciones, animaciones para entrenadores...

- Poco a poco, iremos mejorando los sprites del OW de los Pokémon que tengan pequeños fallos al ser indexados a una paleta que no es la suya original. Se aceptan todo tipo de ayudas en este aspecto, así como para añadir segundos frames para Pokémon que no los tengan.

## Créditos
El desarrollo de este proyecto no sería posible sin la base proporcionada por el equipo de RHH. Queremos dar un agradecimiento especial a todos los colaboradores originales:

- [Equipo de RHH](https://github.com/rh-hideout/pokeemerald-expansion)

Respecto a nuevas funciones encontramos:

- Por las traducciones:
    - [Dizzyegg](https://github.com/DizzyEggg/pokeemerald/tree/spanish)
    - [Team_Hoenn](https://github.com/Xhyzi/pokeemerald/tree/pokeemerald-expansion-es)

- Por sistema de paletas únicas:
    - [CitrusBolt](https://github.com/citrusbolt)

- Por el sistema de iconos:
    - [Merrp](https://github.com/aarant/pokeemerald)

- Por los iconos de tipos:
    - ChefSrGio

- Minisprites de Pokémon para el OW:
    - LarryTurbo
    - DarkusShadow
    - Phyromatical

(Añadir más colaboradores si es necesario)

## Autores de Pokeemerald Base Hispana
- [Caco](https://whackahack.com/foro/members/caco5400.38304/)

- [Ivantxo](https://whackahack.com/foro/members/ivaantxo.50482/)

- [Erkey830](https://whackahack.com/foro/members/erkey830.48709/)

## ¿Te gustaría contribuir?
Si tienes ideas o quieres colaborar con nosotros, no dudes en ponerte en contacto a través del discord de Whack a Hack!, en la sección de decompilación.
