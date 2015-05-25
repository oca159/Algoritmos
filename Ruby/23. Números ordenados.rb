#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Tres números
# => Salida: Saber si estan ordenados

print "Dame el primer número: "
a = gets.to_i
print "Dame el segundo número: "
b = gets.to_i
print "Dame el tercer número: "
c = gets.to_i
if (a < b) && (b < c)
	puts "Están ordenados"
else
	puts "No están ordenados"
end