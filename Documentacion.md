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

