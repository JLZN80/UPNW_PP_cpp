Algoritmo MayorAMenor
	
	Definir V1, V2, V3 Como Real
	Definir Min, Max Como Caracter
	
	Escribir "Ingresa el Valor V1: "
	leer V1
	
	Escribir "Ingresa el Valor V2: "
	leer V2
	
	Escribir "Ingresa el Valor V3: "
	leer V3
	
	// EL NUMERO MENOR
	Si V1 < V2 Entonces
		si V1 < V3 Entonces
			Min <- "V1 es MINIMO"
			MinV <- V1
		SiNo
			Min <- "V3 es MINIMO"
			MinV <- V3
		FinSi
	SiNo
		si V2 < V3 Entonces
			Min <- "V2 es MINIMO"
			MinV <- V2
		SiNo
			Min <- "V3 es MINIMO"
			MinV <- V3
		FinSi
	FinSi
	
	// EL NUMERO MAYOR
	Si V1 > V2 Entonces
		si V1 > V3 Entonces
			Max <- "V1 es MAYOR"
			MaxV <- V1
		SiNo
			Max <- "V3 es MAYOR"
			MaxV <- V3
		FinSi
	SiNo
		si V2 > V3 Entonces
			Max <- "V2 es MAYOR"
			MaxV <- V2
		SiNo
			Max <- "V3 es MAYOR"
			MaxV <- V3
		FinSi
	FinSi
	
	Escribir "Los Resultados son: ", Min, "( ", Minv, " ) y ", Max, "( ",MaxV, " )"
	
FinAlgoritmo
