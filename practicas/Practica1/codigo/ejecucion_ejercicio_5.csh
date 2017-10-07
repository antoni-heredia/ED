#!/bin/csh
@ inicio = 100
@ fin = 30000
@ incremento = 500
set ejecutable = bin/ejercicio_5
set salida = tiempos_ejercicio_5.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i` >> $salida
  @ i += $incremento
end
echo "fin"