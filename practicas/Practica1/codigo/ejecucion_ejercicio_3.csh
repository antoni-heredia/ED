#!/bin/csh
@ inicio = 10000
@ fin = 500000
@ incremento = 500
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