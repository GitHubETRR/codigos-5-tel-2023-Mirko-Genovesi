Algoritmo sin_titulo
	Escribir 'Muy buenas! Bienvenido a la mejor calculadora de vectores del mundo'
	Escribir 'Parte real del primer número:'
	Leer realidad1
	Escribir 'Parte imaginaria del primer número:'
	Leer imaginario1
	Escribir 'Parte real del segundo número:'
	Leer realidad2
	Escribir 'Parte imaginaria del segundo número'
	Leer imaginario2
	Escribir '¿Desea expresar el resultado en cartesiano (1) o en polar (0)?'
	Leer resultado
	realidadfinal <- realidad1+realidad2
	imaginariofinal <- imaginario1+imaginario2
	Si resultado=1 Entonces
		Si imaginariofinal>0 Entonces
			Escribir 'Su resultado es:',realidadfinal,'+J',imaginariofinal
		SiNo
			Escribir 'Su resultado es:',realidadfinal,'-J',imaginariofinal*(-1)
		FinSi
	SiNo
		modulo <- realidadfinal+imaginariofinal
		angulo <- (180/PI)*ATAN(imaginariofinal/realidadfinal)
		Si realidadfinal>0 Entonces
			Si !(imaginariofinal>0) Entonces
				angulo <- angulo+360
			FinSi
		SiNo
			angulo <- angulo+180
		FinSi
		Escribir 'Su número en polar es (raiz de',modulo,')e^J',angulo
	FinSi
FinAlgoritmo
