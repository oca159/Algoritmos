#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Número
# => Salida: Saber si es par o impar

print "Dame un número: "
a = gets.to_i
puts a % 2 == 0 ? "Es par" : "Es impar"