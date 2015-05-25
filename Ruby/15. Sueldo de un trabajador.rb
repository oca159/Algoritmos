#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Pago por hora, horas trabajadas
# => Salida: Sueldo

puts "Dame el pago por hora: "
p = gets.to_f
puts "Dame el número de horas trabajadas"
h = gets.to_i
puts "El sueldo es #{p*h}"