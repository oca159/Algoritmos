#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: 5 califaciones
# => Salida: Promedio

puts "Dame 5 calificaciones: "
a = 0
5.times do
	a += gets.to_f
end
puts "El promedio es #{a/5}"