#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Número
# => Salida: Saber si es positivo o negativo

puts "Dame un número"
a = gets.to_i
if a >= 0
 	puts "#{a} Es positivo"
else
	puts "#{a} Es negativo"
end 