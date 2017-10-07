#!/bin/csh
@ inicio = 100
@ fin = 30000
@ incremento = 500
set ejecutable = bin/ejercicio_1
set salida = tiempos_ordenacion_burbuja.dat

@ i = $inicio
echo > $salida
while ( $i <= $fin )
  echo Ejecución tam = $i
  echo `./{$ejecutable} $i $i` >> $salida
  @ i += $incremento
end
echo "fin"