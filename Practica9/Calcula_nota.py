nota = int(input("Escriba una nota sobre 10:"))
if nota < 0 or nota > 10:
	print("El valor es incorrecto, introduzca un número del 0 al 10.")
print(calcula_nota(nota))
def calcula_nota(nota):
	if nota < 5 and nota >= 0:
		resultado = "Suspenso"
	elif nota == 5 or nota == 6:
		resultado = "Aprobado"
	elif nota == 7 or nota == 8:
		resultado = "Notable"
	elif nota == 9 or nota == 10:
		resultado = "Sobresaliente"
	else:
		resultado = "Nota inválida"
	return resultado
