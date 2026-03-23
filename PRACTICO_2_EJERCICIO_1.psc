Algoritmo Saltenieria
	
    Definir c_pollo, c_carne, c_queso, c_refresco, c_agua Como Entero
    Definir s_pollo, s_carne, s_queso, s_refresco, s_agua, total Como Real
	
    Escribir "Cantidad de salteña de pollo:"
    Leer c_pollo
	
    Escribir "Cantidad de salteña de carne:"
    Leer c_carne
	
    Escribir "Cantidad de empanada de queso:"
    Leer c_queso
	
    Escribir "Cantidad de refresco (500ml):"
    Leer c_refresco
	
    Escribir "Cantidad de agua mineral:"
    Leer c_agua
	
    s_pollo <- 3.50 * c_pollo
    s_carne <- 4.00 * c_carne
    s_queso <- 3.00 * c_queso
    s_refresco <- 5.00 * c_refresco
    s_agua <- 3.00 * c_agua
	
    total <- s_pollo + s_carne + s_queso + s_refresco + s_agua
	
    Escribir "Subtotal pollo: ", s_pollo
    Escribir "Subtotal carne: ", s_carne
    Escribir "Subtotal queso: ", s_queso
    Escribir "Subtotal refresco: ", s_refresco
    Escribir "Subtotal agua: ", s_agua
	
    Escribir "TOTAL A PAGAR: ", total
	
FinAlgoritmo