#!/bin/bash
#Nombre del fichero: ejecucion_ejercicio_7_1.sh
#Funcion: El script ejecuta el programa de ordenacion para obtener datos de eficiencia
INICIO=10000
FIN=20000000
INCREMENTO=500000
EJECUTABLE=./bin/ejercicio_7_3
SALIDA=tiempoMergesort.dat

make
i=$INICIO
echo > $SALIDA
while [ $i -lt $FIN ];do
  echo Ejecución tam = $i
  $EJECUTABLE $i  >> $SALIDA
  let i+=$INCREMENTO
done
