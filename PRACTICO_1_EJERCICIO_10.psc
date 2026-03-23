Algoritmo Salario
	
    Definir horas Como Real
    Definir pago Como Real
    Definir sueldo Como Real
	
    Escribir "Horas trabajadas:"
    Leer horas
	
    Escribir "Pago por hora:"
    Leer pago
	
    sueldo <- horas * pago
	
    Si horas > 40 Entonces
        sueldo <- sueldo + (sueldo * 0.10)
    FinSi
	
    Escribir "Salario total: ", sueldo
	
FinAlgoritmo