#!/usr/bin/env ruby
# coding: UTF-8

# => Autor: Osvaldo Cordova Aburto
# => Fecha: 21/05/2015
# => Analisis
# => Entrada: Precio del producto
# => Salida: %75 por ciento si es mayor a 500 sino %80 de descuento

puts "Dame el precio del producto:"
p = gets.to_i
puts "El precio con descuento es #{p}" + (p > 500 ? (p*0.75): (p*0.80)).to_s