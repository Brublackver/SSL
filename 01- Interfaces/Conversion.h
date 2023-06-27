const int LOWER_F = 0; /*límite inferior de farenheit*/
const int UPPER_F = 300; /*límite superior de farenheit*/
const int STEP_F = 20; /*incremento de farenheit*/

const int LOWER_C = -10; /*límite inferior de celsius*/
const int UPPER_C = 150; /*límite superior de celsius*/
const int STEP_C = 10; /*incremento de celsius*/

//Se definen las variables globales como constantes según restricción de la consigna.

float fahr(float celsius);
float celsius(float farh);
void printTablas();
void printTablaCelsius();
void printTablaFahr();
void printFilas(int base,int top,int inc,float funcion(float));
void printFila(float deg,float degConverted);