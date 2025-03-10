def numeros_pares(numero):
	i = numero
	while i >= 1:
		if i % 2 == 0:
			print(i)
		i = i - 1

numero = int(input("Escriba un valor: "))
numeros_pares(numero)
