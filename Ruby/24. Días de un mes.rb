#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Mes
# => Salida: Saber el número de días que tiene

print "Dime el número del mes: "
mes = gets.to_i
case mes
when 1, 3, 5, 7, 8, 10, 12
	puts "Tiene 31 días"
when 4, 6, 9, 11
	puts "Tiene 30 días"
else
	puts "Tiene 28 días"
end