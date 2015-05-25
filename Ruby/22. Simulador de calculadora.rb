#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Dos números y operador
# => Salida: Resultado de la operación

print "Dame el primer número: "
a = gets.to_i
print "Dame el segundo número: "
b = gets.to_i
print "Dame el operador: "
op = gets.chomp
case op
when "+"
	puts "#{a+b}"
when "-"
	puts "#{a-b}"
when "*"
	puts "#{a*b}"
when "/"
	begin
		puts "#{a/b}"
	rescue ZeroDivisionError
		puts "No se puede dividir entre cero"
	end
end
