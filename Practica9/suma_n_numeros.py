retry = 1

while retry >= 1:
    valor = int(input("Escriba un valor."))
    if valor < 0:
        retry = retry + 1
    else:
        retry = 0
print(suma_n_primeros_nums(valor))

def suma_n_primeros_nums(valor):
	i = 0
	total = 0
	while i <= valor:
		total = total + i
		i = i + 1
	return total
