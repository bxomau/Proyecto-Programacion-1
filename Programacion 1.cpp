#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, ""); // Establece la localización para caracteres especiales

    int eleccion;

    // Título del juego
    cout << "~~~ La Mansión del Señor Cuervo ~~~\n";
    cout << "Estás frente a la mansión del Señor Cuervo. ¿Qué deseas hacer?\n";
    cout << "1. Llamar a la puerta principal\n";
    cout << "2. Explorar los alrededores en busca de una entrada secreta\n";
    cout << "Elige una opción: ";
    cin >> eleccion;

    if (eleccion == 1) {
        cout << "\nLlamas a la puerta principal y esperas. Después de un momento, el Señor Cuervo te abre.\n";
        cout << "Te invita a pasar y te ofrece algo de beber. ¿Qué decides hacer?\n";
        cout << "1. Aceptar la bebida y seguir con la conversación\n";
        cout << "2. Declinar cortésmente la bebida y pedir explorar la mansión\n";
        cout << "Elige una opción: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nAceptas la bebida y entablas una conversación amistosa con el Señor Cuervo.\n";
            cout << "Te cuenta historias sobre la mansión y sus antepasados. ¿Qué deseas hacer ahora?\n";
            cout << "1. Pedirle más detalles sobre un retrato misterioso en la sala principal\n";
            cout << "2. Preguntarle sobre posibles habitaciones secretas en la mansión\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEl Señor Cuervo te cuenta la historia detrás del retrato misterioso y su conexión con eventos sobrenaturales.\n";
                cout << "¿Qué decides hacer después de la conversación?\n";
                cout << "1. Investigar la sala principal en busca de más pistas\n";
                cout << "2. Sugerir explorar juntos la mansión en busca de habitaciones secretas\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la sala principal y encuentras un compartimiento secreto detrás del retrato.\n";
                    cout << "Dentro descubres una llave antigua. ¿Qué deseas hacer con la llave?\n";
                    cout << "1. Utilizarla para abrir una puerta cerrada en el sótano\n";
                    cout << "2. Guardarla para más adelante y continuar explorando la mansión\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nUsas la llave para abrir una puerta en el sótano y descubres un laboratorio abandonado.\n";
                        cout << "Encuentras documentos que revelan experimentos científicos realizados por los antepasados del Señor Cuervo.\n";
                        cout << "¡Has descubierto un secreto profundo y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar la llave para más adelante y continuar explorando otras áreas de la mansión.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nEl Señor Cuervo acepta explorar juntos la mansión en busca de habitaciones secretas.\n";
                    cout << "Descubren un pasadizo secreto que lleva a un jardín interior oculto.\n";
                    cout << "¿Qué deseas hacer en el jardín interior?\n";
                    cout << "1. Investigar las estatuas antiguas en busca de pistas\n";
                    cout << "2. Buscar una entrada secreta adicional en el jardín\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas las estatuas antiguas y encuentras una inscripción que apunta a un tesoro oculto.\n";
                        cout << "¿Qué decides hacer con la información del tesoro?\n";
                        cout << "1. Excavar el área indicada y ver lo que encuentras\n";
                        cout << "2. Guardar la información para más adelante y explorar más la mansión\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nExcavas el área indicada y encuentras una caja con reliquias antiguas y monedas raras.\n";
                            cout << "¡Has encontrado un tesoro enterrado y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nGuardas la información del tesoro para más adelante y decides explorar más la mansión.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nBuscas una entrada secreta adicional y encuentras una escalera que lleva a un ático abandonado.\n";
                        cout << "Exploras el ático. ¿Qué decides hacer?\n";
                        cout << "1. Buscar documentos antiguos y libros en el ático\n";
                        cout << "2. Regresar al jardín para buscar más pistas\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario antiguo que revela secretos sobre la fundación de la mansión.\n";
                            cout << "¡Has descubierto secretos intrigantes y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nRegresas al jardín para buscar más pistas y descubres una entrada oculta que lleva a la cripta familiar.\n";
                            cout << "Exploras la cripta. ¿Qué decides hacer?\n";
                            cout << "1. Investigar las tumbas de los antepasados en busca de pistas adicionales\n";
                            cout << "2. Salir de la cripta y regresar a la mansión\n";
                            cout << "Elige una opción: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nInvestigas las tumbas de los antepasados y encuentras artefactos antiguos que revelan secretos familiares.\n";
                                cout << "¡Has descubierto secretos profundos y escapado con éxito de la Mansión!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nSales de la cripta y regresas a la mansión con nuevas pistas.\n";
                                cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                                return 0;
                            }
                        }
                    }
                }
            } else if (eleccion == 2) {
                cout << "\nEl Señor Cuervo te cuenta sobre posibles habitaciones secretas y su deseo de encontrarlas juntos.\n";
                cout << "¿Qué decides hacer después de la conversación?\n";
                cout << "1. Comenzar la búsqueda de habitaciones secretas con el Señor Cuervo\n";
                cout << "2. Explorar por tu cuenta mientras el Señor Cuervo está ocupado\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nComienzan la búsqueda de habitaciones secretas juntos y encuentran un estudio oculto lleno de libros antiguos.\n";
                    cout << "¿Qué decides hacer con los libros antiguos?\n";
                    cout << "1. Leer los libros en busca de pistas adicionales\n";
                    cout << "2. Guardar los libros para un análisis posterior y continuar explorando\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nLees los libros y descubres una referencia a un pasadizo secreto en la biblioteca principal.\n";
                        cout << "Investigas la biblioteca. ¿Qué decides hacer?\n";
                        cout << "1. Buscar el pasadizo secreto en la biblioteca\n";
                        cout << "2. Guardar la información para más adelante y explorar otras áreas\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras el pasadizo secreto en la biblioteca y descubres un túnel que lleva al exterior.\n";
                            cout << "¡Has encontrado una salida secreta y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nGuardas la información del pasadizo secreto para más adelante y decides explorar otras áreas de la mansión.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar los libros para un análisis posterior y continuar explorando otras áreas de la mansión.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides explorar por tu cuenta mientras el Señor Cuervo está ocupado.\n";
                    cout << "Encuentras un pasadizo secreto detrás de un cuadro en la sala principal.\n";
                    cout << "¿Qué decides hacer con el pasadizo secreto?\n";
                    cout << "1. Investigar el pasadizo secreto y ver a dónde lleva\n";
                    cout << "2. Guardar la información para más adelante y explorar otras áreas de la mansión\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas el pasadizo secreto y descubres un sótano oculto lleno de reliquias antiguas.\n";
                        cout << "¡Has encontrado un tesoro oculto y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas la información del pasadizo secreto para más adelante y decides explorar otras áreas de la mansión.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDeclinas cortésmente la bebida y pides explorar la mansión por tu cuenta.\n";
            cout << "¿Qué área de la mansión decides explorar primero?\n";
            cout << "1. El sótano en busca de entradas secretas\n";
            cout << "2. La biblioteca para buscar libros antiguos y pistas\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nExploras el sótano y encuentras una entrada secreta detrás de una estatua.\n";
                cout << "¿Qué decides hacer con la entrada secreta?\n";
                cout << "1. Investigar la entrada secreta y ver a dónde lleva\n";
                cout << "2. Guardar la información para más adelante y continuar explorando la mansión\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la entrada secreta y descubres un pasadizo que lleva a una sala de artefactos perdidos.\n";
                    cout << "Encuentras un artefacto antiguo que brilla con energía mágica.\n";
                    cout << "¿Qué decides hacer con el artefacto?\n";
                    cout << "1. Tomar el artefacto y escapar de la mansión\n";
                    cout << "2. Dejar el artefacto y explorar más la sala de artefactos perdidos\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nTomas el artefacto y logras escapar de la mansión con éxito.\n";
                        cout << "¡Has encontrado un artefacto mágico y escapado de la Mansión del Señor Cuervo!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nDecides dejar el artefacto y explorar más la sala de artefactos perdidos.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la información de la entrada secreta para más adelante y continuar explorando la mansión.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nDecides explorar la biblioteca en busca de libros antiguos y pistas sobre la historia de la mansión.\n";
                cout << "Encuentras un libro antiguo con un mapa dibujado a mano que marca lugares clave en la mansión.\n";
                cout << "¿Cómo decides usar esta información del mapa?\n";
                cout << "1. Seguir las marcas en el mapa para buscar una entrada secreta\n";
                cout << "2. Guardar el mapa para más adelante y explorar otras áreas de la mansión\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nSigues las marcas en el mapa y encuentras una entrada secreta detrás de una estatua en el jardín.\n";
                    cout << "Exploras el pasadizo y descubres una biblioteca oculta llena de libros antiguos y documentos secretos.\n";
                    cout << "¡Has encontrado una biblioteca oculta y escapado con éxito de la Mansión del Señor Cuervo!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar el mapa para más adelante y continuar explorando otras áreas de la mansión.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            }
        }
    } else if (eleccion == 2) {
        cout << "\nDecides explorar los alrededores en busca de una entrada secreta a la mansión.\n";
        cout << "Encuentras una ventana entreabierta en la parte trasera de la mansión.\n";
        cout << "¿Qué decides hacer con la ventana entreabierta?\n";
        cout << "1. Entrar por la ventana y explorar la mansión desde adentro\n";
        cout << "2. Buscar más alrededor en busca de otra entrada secreta\n";
        cout << "Elige una opción: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nEntras por la ventana y comienzas a explorar la mansión desde adentro.\n";
            cout << "Encuentras un pasadizo secreto que lleva a un jardín interior oculto.\n";
            cout << "¿Qué decides hacer en el jardín interior?\n";
            cout << "1. Investigar las estatuas antiguas en busca de pistas\n";
            cout << "2. Buscar una entrada secreta adicional en el jardín\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nInvestigas las estatuas antiguas y encuentras una inscripción que apunta a un tesoro oculto.\n";
                cout << "¿Qué decides hacer con la información del tesoro?\n";
                cout << "1. Excavar el área indicada y ver lo que encuentras\n";
                cout << "2. Guardar la información para más adelante y explorar más la mansión\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExcavas el área indicada y encuentras una caja con reliquias antiguas y monedas raras.\n";
                    cout << "¡Has encontrado un tesoro enterrado y escapado con éxito de la Mansión!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nGuardas la información del tesoro para más adelante y decides explorar más la mansión.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nBuscas una entrada secreta adicional y encuentras una escalera que lleva a un ático abandonado.\n";
                cout << "Exploras el ático. ¿Qué decides hacer?\n";
                cout << "1. Buscar documentos antiguos y libros en el ático\n";
                cout << "2. Regresar al jardín para buscar más pistas\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un diario antiguo que revela secretos sobre la fundación de la mansión.\n";
                    cout << "¡Has descubierto secretos intrigantes y escapado con éxito de la Mansión!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nRegresas al jardín para buscar más pistas y descubres una entrada oculta que lleva a la cripta familiar.\n";
                    cout << "Exploras la cripta. ¿Qué decides hacer?\n";
                    cout << "1. Investigar las tumbas de los antepasados en busca de pistas adicionales\n";
                    cout << "2. Salir de la cripta y regresar a la mansión\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas las tumbas de los antepasados y encuentras artefactos antiguos que revelan secretos familiares.\n";
                        cout << "¡Has descubierto secretos profundos y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nSales de la cripta y regresas a la mansión con nuevas pistas.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDecides buscar más alrededor en busca de otra entrada secreta a la mansión.\n";
            cout << "Encuentras una entrada lateral oculta que lleva directamente a la cocina de la mansión.\n";
            cout << "¿Qué decides hacer desde la cocina?\n";
            cout << "1. Buscar documentos antiguos en la cocina\n";
            cout << "2. Salir de la cocina y explorar otras áreas de la mansión\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nBuscas documentos antiguos en la cocina y encuentras un libro de recetas antiguo con una carta oculta.\n";
                cout << "La carta revela un complot histórico relacionado con la mansión.\n";
                cout << "¿Qué decides hacer con la carta del complot?\n";
                cout << "1. Investigar más el complot y buscar pistas adicionales\n";
                cout << "2. Guardar la carta para más adelante y explorar otras áreas\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas más sobre el complot y descubres una entrada secreta detrás de la despensa.\n";
                    cout << "Exploras el pasadizo y encuentras una habitación secreta con documentos que confirman el complot.\n";
                    cout << "¡Has descubierto un complot histórico y escapado con éxito de la Mansión del Señor Cuervo!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nGuardas la carta para más adelante y decides explorar otras áreas de la mansión.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nDecides salir de la cocina y explorar otras áreas de la mansión.\n";
                cout << "Encuentras una biblioteca antigua con libros cubiertos de polvo.\n";
                cout << "¿Cómo decides usar esta información?\n";
                cout << "1. Buscar libros antiguos que puedan contener pistas\n";
                cout << "2. Continuar explorando otras áreas de la mansión\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un libro antiguo que menciona un túnel secreto debajo de la biblioteca.\n";
                    cout << "Investigas la biblioteca. ¿Qué decides hacer?\n";
                    cout << "1. Buscar el túnel secreto debajo de la biblioteca\n";
                    cout << "2. Guardar la información para más adelante y explorar otras áreas\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras el túnel secreto debajo de la biblioteca y descubres una salida oculta.\n";
                        cout << "¡Has encontrado una salida secreta y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas la información del túnel secreto para más adelante y decides explorar otras áreas de la mansión.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides continuar explorando otras áreas de la mansión.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            }
        }
    }

    return 0;
}

