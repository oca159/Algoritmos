#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Dos números
# => Salida: Saber si el segundo es múltiplo del primero

puts "Dame dos números:"
a = gets.to_i
b = gets.to_i
puts "#{b} es múltiplo de #{a}" if b % a == 0