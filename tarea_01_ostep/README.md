# Informe trabajo realizado en cada ítem 
## mem.c :
se  utilizó sudo sh -c 'echo 0 > 
/proc/sys/kernel/randomize_va_space'
para hacer que al ejecutar 2 valores distintos se tome la misma región 
de memoria.

## Threads.c:
se creó un archivo mycommon.c y se definieron variables 
que permitieran abrir y cerrar puertas modificando el programa original para 
que al ejecutar el programa con valores grandes el programa no fuera 
irregular y actuara normal.

## Io.c:
se creo un código que al ingresar un texto almacenado en un 
archivo txt fuera leído por el programa  y lo imprimiera al revés
