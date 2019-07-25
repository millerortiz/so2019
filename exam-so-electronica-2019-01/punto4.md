# RESPUESTAS PUNTO 4:
 
# 1):
Primero ejecutamos  los dos procesos ./process-h.py -l 5:100, 5:100 -c con la bandera -c por el cual nos dimos cuenta que la cpu en el “PID 0” comenzó a ejecutarse con un tiempo del 5, mientras que en el “PID 1” la cpu está listo para ejecutarse, pero tuvo que esperar hasta que terminará de ejecutarse en el PID 0.
En el tiempo 6  da por hecho la ejecución en el PID 0 y comienza a ejecutarse la cpu en el PID 1 con un porcentaje de tiempo de otros 5, mientras que el PID 0 en ese tiempo permanece en estado hecho. 
El porcentaje de tiempo de ejecución de la cpu en total fue de 10. 

# 2:
./process-run.py -l  4:100,1:0 El tiempo de ejecución de la primera es 4 y de el segundo el tiempo de ejecución es 1 y luego pasa de estado ejecución a estado en espera con un tiempo de 4 hasta que ambos en el tiempo 10 aparecen en estado hecho.
El tiempo que tardan en que tardan en completar ambos procesos es 10.
