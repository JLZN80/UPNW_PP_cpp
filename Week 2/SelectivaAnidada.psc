Algoritmo SelectivaAnidada
	// Caso en donde segun la cantidad de articulos 
	// me de un descuento en monto a pagar
	// Si los Articulos son A=10 10%, A=7 6%, A=3 1%, 0% 
	
	Definir Cantidad Como Entero
	Definir Monto, PctDescuento, MontoFinal Como Real
	
	Escribir "Dame el Monto de Compra"
	Leer Monto
	
	Escribir "Dame la Cantidad de Articulos"
	Leer Cantidad
	
	// Inicializar las Variables que se llenan dentro de Condicionales..
	PctDescuento <- 0
	
	Si (Cantidad > 7) Y (Cantidad <= 10) Entonces
		PctDescuento <- 0.10
	SiNo
		Si Cantidad == 7 Entonces
			PctDescuento <- 0.07
		SiNo
			si Cantidad == 3 Entonces
				PctDescuento <- 0.01
			FinSi
		FinSi
	FinSi
	
	MontoFinal <- Monto * (1 - PctDescuento)
	
	Escribir "El Monto a Pagar Final es: ", MontoFinal
	
FinAlgoritmo
