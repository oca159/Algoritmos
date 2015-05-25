#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Número
# => Salida: Suma de sus dígitos

a = 0
print "Dame un número: "
gets.chomp.each_char {|x| a += x.to_i}
puts a