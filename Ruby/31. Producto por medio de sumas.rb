#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Dos números
# => Salida: Producto por medio de sumas

acum = 0
print "Dame el primer número: "
a = gets.to_i
print "Dame el segundo número: "
b = gets.to_i
b.times do
	acum += a
end
puts acum

