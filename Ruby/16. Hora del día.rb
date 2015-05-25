#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Hora en notación 24 hrs
# => Salida: Hora en notación de 12 hrs


puts "Dame la hora del día"
h = gets.to_i
if h > 12
	puts "#{h-12} pm"
else
	puts "#{h} am"
end 