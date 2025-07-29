# Trabajo de mitad de cursada

## Programacion de videojuegos Principiantes con Unreal Engine

### Tematica

Para el trabajo practico, tanto de mitad como final de curso, se presentará un third person shooter con mecanicas de plataformero 3D.
Se tratará de un arqueologo atrapado en un templo, el cual tendra que resolver puzzles y recolectar ciertos elementos para poder salir a tiempo. Se tendrá
enemigos que dificultarán la tarea.

### Primera entrega

Para esta entrega, se tiene como recolectables las monedas, las cual hay que juntarlas todas para poder ganar (No hay timer por el momento). La mecanica de recoleccion de puzzles se planea agregar para la entrega final.

Las monedas a recolectar, suelen estar rodeadas de pinches, que restan vida al jugador mientras este los esté pisando.

Como enemigos,de momeno solo se tienen 3 tipos (torreta, bad guy y bad fella), todos con la misma mecanica de dispararle al enemigo (algunos con un disparo que mira hacia el jugador, otros siempre disparan hacia adelante).

Se disparan distintos tipos de projectiles (bala, balaza y misil) que restan distintos niveles de vida al jugador.

Por otro lado, se tiene un Curador, que puede usarse para recuperar vida un maximo de 10 veces. La vida maxima del jugador es de 100, y cada vez que el curador actua, devuelve 20 de vida.

El jugador (peoncito), de momento, solo tiene la accion de disparar hasta 5 veces (click izquierdo) y recargar (click derecho). Para moverse se usa las teclas WASD.

#### Condicion de Victioria

Al agarrar las monedas, el jugador suma 2 puntos. Al sumar 20 puntos, que actualmente se da con el total de monedas, se gana el nivel. Se muestra un nuevo nivel que muestra un cartel de victoria.

#### Condicion de Derrota

El jugador recibe disparos de los distintos enemigos. Cuando la vida del jugador llega a cero, se pierde el nivel. Se muestra un nuevo nivel que muestra un cartel de derrota.

#### Enlace del video

https://youtu.be/Nrg6rtyZt4A


### Entrega final

Sobre lo entregado anteriormente, se agregaron texturas y materiales a todo lo presente en el nivel
Estos elementos van desde el personaje jugable, como las torretas, monedas, curador, y demas elementos que integran la escena
Todos los materiales y actores hacen alucion a un templo antiguo de origen maya

Se agregaron sonidos para interaciones como:
- cuando el jugador recibe daño (cambia segun quien aplica el daño)
- cuando el jugador dispara
- cuando el jugador recarga
- cuando algun enemigo dipara un "misil"
- cuando el curador cura al jugador

Se añadio una interfaz grafica para el nivel, el cual indica la vida del jugador,
asi como tambien el puntaje que lleva por recolectar las monedas

Se tiene tambien un menu de inicio para comenzar a jugar, asi como tambien
la opcion de volver a jugar si uno haya ganado o perdido

Finalmente, cabe mencionar que se agrego musica que va acorde con el ambiente que se quiere transmitir

#### Enlace del video

https://www.youtube.com/watch?v=CPNffUQLMrc


# Trabajo de final de cursada

## Programacion de videojuegos Avanzada con Unreal Engine

### Tematica

Para el trabajo practico, se realizo la entrega de dificultad media, y siguiendo la tematica del curso principiante, se realizo un third person shooter con mecanicas de plataformero 3D.
Se tratará de un arqueologo que se encuentra en unas ruinas mayas, el cual tendra que resolver recolectar ciertos elementos para poder sobrevivir, meintras se enfrenta a diversos enemigos que dificultarán la tarea.

### Clases

Se desarrollaron tres clases base de la cual se heredan los comportamientos principales

-MyCharacter: proporcionara el movimiento de nuestro personaje
-BaseBullet: proporcionara la velocidad y otros parametros de las distintas balas
-BaseEnemy: porporcionara la vida por defecto de nuestros enemigos fijos (torretas y torres)

### Ambientacion

Para el nivel se empleo musica, distintas texturas, y tambien se hizo uso de los modos de landscape y foliage

### Menu

Se tiene un menu de inicio donde se puede comenzar el juego o salir del mismo. Dicho menu esta presente tambien al ganar o perder el juego. Durante el juego, se puede pausar con Shft+z, o reiniciar el nivel con Shft+r

### Sistema de particulas

Se crearon 3 sistemas de particulas

Uno que muestra al inicio donde se encuentra el curador
Otro que aparece cada vez que nos cura dicho curador
Y un ultimo que se muestra cuando aparece en el mapa un cierto tipo de enemigo (golem)

### Enemigos

EL juego posee distintas clases de enemigos

Por un lado torres y torretas que disparan distintos projectiles dirigidos al jugador. Ambos enemigos giran segun la posicion del jugador

Por otro lado se tiene a los "golems", enemigos que aparece cada cierto tiempo en el mapa y que siguen la posicion del jugador mediante IA (implementada en el Blueprint). No puede haber mas de 3 en el mapa, y al tocar al jugador, cambian de animacion y le infrinjen daño

#### Condicion de Victioria

Al agarrar las monedas, el jugador suma 2 puntos. Al sumar 64 puntos, que actualmente se da con el total de monedas, se gana el nivel. Para lograrlo, al sumar 60 puntos, se activa la plataforma desde el techo del templo, permitiendo al jugador recolectar las modnedas que quedan.Al recolecar toas las monedas se muestra un nuevo nivel que muestra un cartel de victoria.

#### Condicion de Derrota

El jugador recibe disparos de los distintos enemigos, asi commo tambien daño de los golems cuando lo tocan. Cuando la vida del jugador llega a cero, se pierde el nivel. Se muestra un nuevo nivel que muestra un cartel de derrota.

#### Enlace del video

https://youtu.be/c8UGdit6-d8