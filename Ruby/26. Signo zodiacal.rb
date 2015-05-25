#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Fecha de nacimiento (mes, dia)
# => Salida: Signo zodiacal

print "Dame el día: "
dia = gets.to_i
print "Dame el mes: "
mes = gets.to_i
case mes
when 1
	puts dia < 20 ? "Capricornio" : "Acuario"
when 2
	puts dia < 19 ? "Acuario" : "Piscis"
when 3
	puts dia < 21 ? "Piscis" : "Aries"
when 4
	puts dia < 21 ? "Aries" : "Tauro"
when 5
	puts dia < 21 ? "Tauro" : "Géminis"
when 6
	puts dia < 21 ? "Geminis" : "Cáncer"
when 7
	puts dia < 21 ? "Cáncer" : "Leo"
when 8
	puts dia < 22 ? "Leo" : "Virgo"
when 9
	puts dia < 23 ? "Virgo" : "Libra"
when 10
	puts dia < 24 ? "Libra" : "Escorpio"
when 11
	puts dia < 24 ? "Escorpio" : "Sagitario"
when 12
	puts dia < 22 ? "Sagitario" : "Capricornio"
else 
	puts "El número de mes es incorrecto"
end