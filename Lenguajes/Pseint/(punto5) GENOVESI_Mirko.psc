Algoritmo Punto5
	Escribir 'VRMS:'
	Leer VRMS
	Escribir 'VPhi(Deg):'
	Leer VPhi
	Escribir 'IRMS:'
	Leer IRMS
	Escribir 'IPhi(Deg)'
	Leer IPhi
	Z <- (VRMS*(RC(2)))/(IRMS*(RC(2)))
	Phi <- (VPhi-IPhi)
	R <- Z*cos(Phi*(PI/180))
	I <- Z*sen(Phi*(PI/180))
	Si I<>0 Entonces
		Escribir 'Frequency:'
		Leer F
		Mientras F<=0 Hacer
			Escribir 'Introdujo un valor incorrecto de frecuencia, el valor debe ser mayor a 0, introduzca un valor válido de frecuencia:'
			Leer F
		FinMientras
		Si I<0 Entonces
			Escribir 'Impedancia = ',R,'-J',-I
			C <- 1/(2*PI*F*I)
			Escribir 'Capacitor = ',C,'F'
		SiNo
			Escribir 'Impedancia = ',R,'+J',I
			L <- I/(2*PI*F)
			Escribir 'Inductor = ',L,'H'
		FinSi
	SiNo
		Escribir 'Corriente y Tensión en fase, R = ',R
	FinSi
FinAlgoritmo
