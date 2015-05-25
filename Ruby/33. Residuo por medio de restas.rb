#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Dos números
# => Salida: Residuo por medio de restas

print "Dame el primer número: "
a = gets.to_i
print "Dame el segundo número: "
b = gets.to_i
while a/b >= 1
	a -= b
end
puts a