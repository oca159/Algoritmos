#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Número
# => Salida: Imprimir si es positivo, negativo o cero

print "Dame un número: "
a = gets.to_i
if a < 0
	puts "El número #{a} es negativo"
elsif a == 0
	puts "El número #{a} es cero"
else
	puts "El número #{a} es positivo"
end