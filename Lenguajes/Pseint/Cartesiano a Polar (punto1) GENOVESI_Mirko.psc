Algoritmo sin_titulo
	Escribir 'Introduzca su n�mero real'
	Leer realidad
	Escribir 'Introduzca la parte imaginaria'
	Leer imaginario
	modulo <- realidad+imaginario
	angulo <- (180/PI)*ATAN(imaginario/realidad)
	Si realidad > 0 Entonces
		Si !(imaginario > 0) Entonces
			angulo = angulo + 360
		FinSi
	SiNo
		angulo = angulo + 180
	FinSi
	Escribir 'Su n�mero en polar es (raiz de',modulo,')e^J',angulo
FinAlgoritmo
