#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Calificaciones
# => Salida: Equivalencias

print "Ingresa la calificación: "
c = gets.to_i
case c
when 10
	puts "Excelente"
when 9
	puts "Muy bien"
when 8
	puts "Bien"
when 7
	puts "Regular"
when 6
	puts "Suficiente"
when 0..5
	puts "Reprobado"
end
