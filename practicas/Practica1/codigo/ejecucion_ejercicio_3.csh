#!/bin/csh
@ inicio = 100
@ fin = 60000
@ incremento = 1000
set ejecutable = bin/ejercicio_desc
set salida = tiempo_ejercicio_3.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
end
echo "fin"