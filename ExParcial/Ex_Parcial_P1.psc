// PREGUNTA 1: El nivel competitivo de Mobile Legends
// Lenguaje: PSeInt
// Objetivo: leer el nombre del jugador y sus puntos competitivos (PC),
// validar si están dentro del rango permitido 0 a 1800 y clasificar el nivel.

Algoritmo NivelCompetitivoMobileLegends
    // Declaración de variables
    Definir nombre Como Caracter
    Definir pc Como Entero
    Definir nivel Como Caracter
    
    // Entrada de datos
    Escribir "Ingrese el nombre del jugador: "
    Leer nombre
    
    Escribir "Ingrese los puntos competitivos del jugador: "
    Leer pc
    
    // Validación principal solicitada por el enunciado:
    // Si los puntos son negativos o mayores a 1800, no se clasifica.
    Si pc < 0 O pc > 1800 Entonces
        Escribir "Puntos inválidos."
    Sino
        // Clasificación por rangos sin cruces ni vacíos.
        // Como ya se validó que pc está entre 0 y 1800,
        // solo se revisan los intervalos válidos.
        Si pc >= 0 Y pc <= 299 Entonces
            nivel <- "Guerrero"
        Sino
            Si pc >= 300 Y pc <= 599 Entonces
                nivel <- "Élite"
            Sino
                Si pc >= 600 Y pc <= 899 Entonces
                    nivel <- "Maestro"
                Sino
                    Si pc >= 900 Y pc <= 1199 Entonces
                        nivel <- "Gran Maestro"
                    Sino
                        Si pc >= 1200 Y pc <= 1499 Entonces
                            nivel <- "Épico"
                        Sino
                            // Si llegó aquí, necesariamente está entre 1500 y 1800.
                            nivel <- "Leyenda"
                        FinSi
                    FinSi
                FinSi
            FinSi
        FinSi
        
        // Salida solicitada por el examen.
        Escribir "Jugador ", nombre, ", tus ", pc, " puntos te ubican en nivel: ", nivel, "."
    FinSi
FinAlgoritmo
