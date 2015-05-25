#!/usr/bin/env ruby
#coding: UTF-8

nodos = gets.to_i
arcos = gets.to_i
matriz = Array.new(nodos) {Array.new(nodos) {0}} #Matriz llena de ceros
permutaciones = []
arcos.times do
	x, y, valor = gets.split
	permutaciones.push x.upcase, y.upcase
	x = (x.upcase.ord - 65)
	y = (y.upcase.ord - 65)
	valor = valor.to_i
	matriz[x][y] = valor
	matriz[y][x] = valor
end
#Para crear una matriz con las permutaciones
permutaciones =  permutaciones.uniq!.permutation.to_a
permutaciones.each {|i| i.push i[0]}
mascorto = 2e10
indice = 0
for i in permutaciones
	cad = "El camino #{indice} \t"
	costo = 0
	b = true
	for j in 0...(i.length-1)
		x = i[j].ord - 65 
		y = (i[j+1]).ord - 65
		cad += (i[j] + ", ")
		costo += matriz[x][y]
		b = false if matriz[x][y] == 0
	end
	cad += i.last + " " + costo.to_s
	puts cad 
	mascorto, $camino_corto = costo, cad if (mascorto > costo and b)
	indice += 1
end
puts $camino_corto + " es el más corto"