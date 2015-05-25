#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Número
# => Salida: Saber si es par o impar

puts "Dame un número:"
a = gets.to_i
if a % 2 == 0
	puts "#{a} es par"
else
	puts "#{a} es impar"
end