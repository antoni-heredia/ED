#!/bin/bash
#Nombre del fichero: ejecucion_ejercicio_7_1.sh
#Funcion: El script ejecuta el programa de ordenacion para obtener datos de eficiencia
INICIO=100
FIN=20000
INCREMENTO=100
EJECUTABLE=./bin/ejercicio_7_1
SALIDA=tiempoOrdenacion.dat

i=$INICIO
echo > $SALIDA
while [ $i -lt $FIN ];do
  echo Ejecución tam = $i
  $EJECUTABLE $i 10000 >> $SALIDA
  let i+=$INCREMENTO
done
