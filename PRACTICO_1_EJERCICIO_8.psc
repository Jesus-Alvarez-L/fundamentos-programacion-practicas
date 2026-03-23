Algoritmo DescuentoCompra
	
    Definir monto, total Como Real
	
    Escribir "Ingrese monto de compra:"
    Leer monto
	
    Si monto > 100 Entonces
        total <- monto * 0.9
    SiNo
        total <- monto
    FinSi
	
    Escribir "Total a pagar: ", total
	
FinAlgoritmo