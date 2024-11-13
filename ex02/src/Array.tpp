/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daparici <daparici@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:57:45 by daparici          #+#    #+#             */
/*   Updated: 2024/11/13 20:14:12 by daparici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */








/*  La razón de tener dos operadores [] , uno const y uno no const, es permitir un acceso seguro y flexible a los elementos del array en diferentes contextos (constante y no constante). Cada versión tiene un propósito específico:

    Operador [] no const (T &operator[](unsigned int index)):
        Este operador permite el acceso y la modificación de los elementos del array.
        Se usa cuando hay una instancia no constante de Array, y quieres obtener
        una referencia modificable a un elemento.

    Operador [] const (const T &operator[](unsigned int index) const):
        Este operador permite un acceso solo de lectura a los elementos del array.
        Se usa cuando hay una instancia de Array declarada como const, asegurando que
        los elementos no puedan ser modificados accidentalmente.

    Razón principal para tener ambas versiones:
        Seguridad: Permite diferenciar entre acceso de lectura y escritura. Cuando
            se accede a una instancia const de Array, solo se puede usar el operador const [],
            asegurando que los datos no sean modificados.
        Flexibilidad: Permite que el operador [] se use en cualquier contexto. Incluso si
            el array es const, puedes acceder a sus elementos sin violar la inmutabilidad.

    Ejemplo:
        Array<int> arr(5);
        arr[0] = 10;  // Accede al operador no const para modificar el elemento

        const Array<int> constArr(5);
        int value = constArr[0];  // Accede al operador const para acceso solo lectura
*/

