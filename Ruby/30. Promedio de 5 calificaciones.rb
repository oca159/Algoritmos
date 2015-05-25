#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: 5 calificaciones
# => Salida: Promedio

acum = 0
5.times do
	print "Dame una calificación: "
	acum += gets.to_i
end
puts acum/5.0