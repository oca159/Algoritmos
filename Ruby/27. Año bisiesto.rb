#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Año
# => Salida: Saber si es bisiesto

print "Dame el año: "
a = gets.to_i
if a % 400 == 0
	puts "Es bisiesto"
elsif a % 4 == 0
	puts "Es bisiesto"
else
	puts "No es bisiesto"
end