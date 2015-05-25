#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Cifra
# => Salida: Cifra redondeada

print "Millares: "
m = gets.to_i
print "Centenas: "
c = gets.to_i
print "Decenas: "
d = gets.to_i
print "Unidades: "
u = gets.to_i
if d >= 5
	d = 0
	u = 0
	c += 1
	if c > 9
		c = 0
		m += 1
	end
end
puts "Cifra redondeada #{m}#{c}#{d}#{u}"