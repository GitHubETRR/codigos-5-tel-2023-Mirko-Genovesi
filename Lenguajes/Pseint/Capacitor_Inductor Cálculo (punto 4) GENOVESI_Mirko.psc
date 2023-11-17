Algoritmo sin_titulo
	Escribir 'Parte Real:'
	Leer R
	Escribir 'Parte Imaginaria:'
	Leer I
	Si I<>0 Entonces
		Escribir 'Frecuencia:'
		Leer F
		Mientras F<=0 Hacer
			Escribir 'Introdujo un valor incorrecto de frecuencia, el valor debe ser mayor a 0, introduzca un valor válido de frecuencia:'
			Leer F
		FinMientras
		Si I<0 Entonces
			C <- 1/(I*2*PI*F)
			Escribir 'Su resistencia es de ',R,'ohms, y su capacitor es de ',C,'F'
		SiNo
			H <- I/(2*PI*F)
			Escribir 'Su resistencia es de ',R,'ohms, y su inductor es de ',H,'H'
		FinSi
	SiNo
		Escribir 'Su resistencia es de ',R,' ohms'
	FinSi
FinAlgoritmo
