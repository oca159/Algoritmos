#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: 3 números
# => Salida: El número mayor de ellos

a = 0
puts "Dame 3 números: "
3.times do
	b = gets.to_i
	a = b if b > a
end
puts "El mayor es #{a}" 