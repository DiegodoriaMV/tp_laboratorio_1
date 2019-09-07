
#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/** \brief
 *
 * \param texto[] char
 * \return El numero de la opcion
 *
 */
int mostrarMenu();

/** \brief suma de los numeros ingresados
 *
 * \param datoUno float
 * \param datoDos float
 * \return La suma de los numeros con resultado flotante
 *
 */
float opSumar(float datoUno, float datoDos);

/** \brief Resta de los numeros ingresados
 *
 * \param datoUno float
 * \param datoDos float
 * \return La resta de los numeros con resultado flotante
 *
 */
float opRestar(float datoUno, float datoDos);

/** \brief multiplica de los numeros ingresados
 *
 * \param datoUno float
 * \param datoDos float
 * \return La multiplicacion de los numeros ingresados
 *
 */
float opMultiplicar(float datoUno, float datoDos);

/** \brief divide de los numeros ingresados
 *
 * \param datoUno float
 * \param datoDos float
 * \return La division de los numeros con resultado flotante
 *
 */
float opDividir(float datoUno, float datoDos);

/** \brief factorea de los numeros ingresados
 *
 * \param datoUno float
 * \param datoDos float
 * \return El factoreo de los numeros con resultado flotante
 *
 */
float opFactorear (float datoUno, float datoDos);

#endif // BIBLIOTECA_H_INCLUDED
