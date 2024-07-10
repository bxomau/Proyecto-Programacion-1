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
                        cout << "1. Buscar la entrada del pasadizo secreto en la biblioteca\n";
                        cout << "2. Regresar al estudio oculto para buscar más pistas\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras la entrada del pasadizo secreto en la biblioteca y descubres un camino subterráneo.\n";
                            cout << "Sigues el camino y encuentras una antigua cámara de tesoros.\n";
                            cout << "¡Has encontrado un tesoro oculto y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nRegresas al estudio oculto para buscar más pistas y encuentras un mapa antiguo que indica una entrada secreta en el sótano.\n";
                            cout << "Exploras el sótano. ¿Qué decides hacer?\n";
                            cout << "1. Buscar la entrada secreta indicada en el mapa\n";
                            cout << "2. Continuar explorando otras áreas del sótano\n";
                            cout << "Elige una opción: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nEncuentras la entrada secreta indicada en el mapa y descubres un pasadizo hacia la costa.\n";
                                cout << "¡Has encontrado una salida secreta y escapado con éxito de la Mansión!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nContinúas explorando otras áreas del sótano y descubres un cuarto de almacenamiento con artefactos antiguos.\n";
                                cout << "¡Has descubierto artefactos intrigantes y escapado con éxito de la Mansión!\n";
                                return 0;
                            }
                        }
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar los libros para un análisis posterior y continúas explorando la mansión con el Señor Cuervo.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides explorar por tu cuenta mientras el Señor Cuervo está ocupado.\n";
                    cout << "Encuentras un pasillo secreto que lleva a un salón de baile abandonado.\n";
                    cout << "¿Qué decides hacer en el salón de baile?\n";
                    cout << "1. Buscar una entrada secreta adicional en el salón\n";
                    cout << "2. Investigar los retratos antiguos en busca de pistas\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras una entrada secreta adicional en el salón que lleva a un teatro subterráneo.\n";
                        cout << "Exploras el teatro. ¿Qué decides hacer?\n";
                        cout << "1. Buscar entre los asientos del teatro en busca de pistas\n";
                        cout << "2. Salir del teatro y continuar explorando la mansión\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario entre los asientos del teatro que revela secretos sobre eventos pasados en la mansión.\n";
                            cout << "¡Has descubierto secretos intrigantes y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nSales del teatro y continúas explorando la mansión en busca de más pistas.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nInvestigas los retratos antiguos y encuentras una pintura que revela una entrada secreta detrás de una cascada en el jardín.\n";
                        cout << "¿Qué decides hacer con la entrada secreta?\n";
                        cout << "1. Explorar la entrada secreta en el jardín\n";
                        cout << "2. Guardar la información para más adelante y continuar explorando la mansión\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nExploras la entrada secreta en el jardín y encuentras un túnel subterráneo que lleva a un antiguo cementerio familiar.\n";
                            cout << "Investigas el cementerio. ¿Qué decides hacer?\n";
                            cout << "1. Examinar las lápidas antiguas en busca de pistas\n";
                            cout << "2. Salir del cementerio y regresar a la mansión\n";
                            cout << "Elige una opción: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nExaminas las lápidas antiguas y encuentras una inscripción que señala la ubicación de un cofre enterrado.\n";
                                cout << "Excavas el cofre y encuentras artefactos antiguos y monedas raras.\n";
                                cout << "¡Has encontrado un tesoro oculto y escapado con éxito de la Mansión!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nSales del cementerio y regresas a la mansión con nuevas pistas.\n";
                                cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                                return 0;
                            }
                        } else if (eleccion == 2) {
                            cout << "\nDecides guardar la información para más adelante y continuar explorando la mansión en busca de más pistas.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDeclinas cortésmente la bebida y pides explorar la mansión en busca de habitaciones secretas.\n";
            cout << "El Señor Cuervo asiente y te guía por un pasillo lateral hacia una biblioteca secreta.\n";
            cout << "¿Qué decides hacer en la biblioteca secreta?\n";
            cout << "1. Buscar entre los libros antiguos en busca de pistas\n";
            cout << "2. Investigar los documentos en busca de información sobre la historia de la mansión\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nBuscas entre los libros antiguos y encuentras un mapa que indica una entrada secreta en el jardín.\n";
                cout << "¿Qué decides hacer con el mapa?\n";
                cout << "1. Explorar la entrada secreta indicada en el jardín\n";
                cout << "2. Guardar el mapa para más adelante y continuar explorando la biblioteca\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExploras la entrada secreta en el jardín y encuentras un túnel subterráneo que lleva a un antiguo cementerio familiar.\n";
                    cout << "Investigas el cementerio. ¿Qué decides hacer?\n";
                    cout << "1. Examinar las lápidas antiguas en busca de pistas\n";
                    cout << "2. Salir del cementerio y regresar a la mansión\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nExaminas las lápidas antiguas y encuentras una inscripción que señala la ubicación de un cofre enterrado.\n";
                        cout << "Excavas el cofre y encuentras artefactos antiguos y monedas raras.\n";
                        cout << "¡Has encontrado un tesoro oculto y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nSales del cementerio y regresas a la mansión con nuevas pistas.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar el mapa para más adelante y continuar explorando la biblioteca en busca de más pistas.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas los documentos y encuentras información sobre la construcción original de la mansión.\n";
                cout << "¿Qué decides hacer con la información encontrada?\n";
                cout << "1. Buscar una entrada secreta adicional en la biblioteca\n";
                cout << "2. Regresar al Señor Cuervo y compartir la información para explorar juntos\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nBuscas una entrada secreta adicional y encuentras un pasadizo que lleva a un sótano oculto.\n";
                    cout << "Exploras el sótano. ¿Qué decides hacer?\n";
                    cout << "1. Buscar entre las cajas antiguas en busca de pistas\n";
                    cout << "2. Investigar la estructura del sótano para descubrir más habitaciones secretas\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras una caja antigua con documentos que revelan actividades ilícitas de un antiguo ocupante de la mansión.\n";
                        cout << "¡Has descubierto secretos intrigantes y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nInvestigas la estructura del sótano y encuentras un pasadizo adicional que lleva a una bodega secreta.\n";
                        cout << "Exploras la bodega. ¿Qué decides hacer?\n";
                        cout << "1. Buscar entre las estanterías en busca de pistas\n";
                        cout << "2. Salir de la bodega y regresar a la biblioteca\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario oculto entre las estanterías que revela secretos sobre la familia del Señor Cuervo.\n";
                            cout << "¡Has descubierto secretos profundos y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nSales de la bodega y regresas a la biblioteca con nuevas pistas.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    }
                } else if (eleccion == 2) {
                    cout << "\nRegresas al Señor Cuervo y compartes la información encontrada. Deciden explorar juntos la mansión en busca de más pistas.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            }
        }
    } else if (eleccion == 2) {
        cout << "\nDecides explorar los alrededores en busca de una entrada secreta a la mansión.\n";
        cout << "Encuentras un sendero que conduce a una entrada lateral oculta.\n";
        cout << "¿Qué decides hacer en la entrada lateral?\n";
        cout << "1. Entrar sigilosamente y explorar la planta baja de la mansión\n";
        cout << "2. Buscar una escalera exterior que conduzca a los pisos superiores\n";
        cout << "Elige una opción: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nEntras sigilosamente y exploras la planta baja de la mansión. Encuentras la cocina y el salón principal.\n";
            cout << "¿Qué decides hacer en el salón principal?\n";
            cout << "1. Buscar entre los muebles en busca de pistas\n";
            cout << "2. Investigar los retratos antiguos en busca de información sobre la familia del Señor Cuervo\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEncuentras un cajón con cartas antiguas que mencionan una habitación secreta en el ala oeste de la mansión.\n";
                cout << "¿Qué decides hacer con la información de la habitación secreta?\n";
                cout << "1. Explorar el ala oeste en busca de la habitación secreta\n";
                cout << "2. Guardar la información para más adelante y explorar más la planta baja\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExploras el ala oeste y encuentras la habitación secreta detrás de una estantería.\n";
                    cout << "Dentro encuentras un pasadizo que lleva a un sótano oculto con artefactos antiguos.\n";
                    cout << "¡Has descubierto artefactos intrigantes y escapado con éxito de la Mansión!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la información para más adelante y exploras más la planta baja en busca de más pistas.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas los retratos antiguos y encuentras una pintura que parece moverse levemente.\n";
                cout << "¿Qué decides hacer con la pintura?\n";
                cout << "1. Investigar la pintura en busca de una entrada secreta\n";
                cout << "2. Guardar la información para más adelante y explorar la cocina\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la pintura y encuentras un botón oculto que revela una escalera secreta detrás de ella.\n";
                    cout << "Bajas por la escalera y encuentras una sala de máquinas antigua.\n";
                    cout << "¡Has encontrado una sala secreta y escapado con éxito de la Mansión!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la información para más adelante y exploras la cocina en busca de más pistas.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            }
        } else if (eleccion == 2) {
            cout << "\nBuscas una escalera exterior que conduce a los pisos superiores de la mansión.\n";
            cout << "Encuentras una escalera de incendios que parece llevar al balcón del segundo piso.\n";
            cout << "¿Qué decides hacer en el balcón del segundo piso?\n";
            cout << "1. Entrar por una ventana abierta y explorar una habitación cercana\n";
            cout << "2. Investigar el balcón en busca de una entrada secreta al interior del segundo piso\n";
            cout << "Elige una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEntras por la ventana abierta y encuentras una habitación con un escritorio antiguo y libros apilados.\n";
                cout << "¿Qué decides hacer en la habitación con el escritorio?\n";
                cout << "1. Buscar entre los cajones del escritorio en busca de pistas\n";
                cout << "2. Investigar la biblioteca personal del Señor Cuervo en busca de información adicional\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un diario escondido en uno de los cajones que detalla un romance secreto en la familia del Señor Cuervo.\n";
                    cout << "¿Qué decides hacer con el diario encontrado?\n";
                    cout << "1. Guardarlo para más adelante y continuar explorando la habitación\n";
                    cout << "2. Regresar al balcón para buscar más pistas\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nGuardas el diario para más adelante y continúas explorando la habitación en busca de más pistas.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nRegresas al balcón para buscar más pistas y encuentras una puerta secreta detrás de una cortina.\n";
                        cout << "¿Qué decides hacer con la puerta secreta?\n";
                        cout << "1. Abrir la puerta secreta y explorar el pasillo oculto\n";
                        cout << "2. Guardar la información para más adelante y continuar explorando el balcón\n";
                        cout << "Elige una opción: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nAbres la puerta secreta y exploras el pasillo oculto que conduce a una habitación secreta.\n";
                            cout << "Dentro encuentras una colección de artefactos antiguos y documentos históricos.\n";
                            cout << "¡Has encontrado una colección intrigante y escapado con éxito de la Mansión!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nDecides guardar la información para más adelante y exploras más el balcón en busca de más pistas.\n";
                            cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                            return 0;
                        }
                    }
                } else if (eleccion == 2) {
                    cout << "\nInvestigas la biblioteca personal del Señor Cuervo y encuentras un libro con una cubierta especialmente tallada.\n";
                    cout << "¿Qué decides hacer con el libro especial?\n";
                    cout << "1. Abrir el libro y revisar si tiene algún compartimento secreto\n";
                    cout << "2. Guardar el libro para más adelante y explorar más la habitación\n";
                    cout << "Elige una opción: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nAbres el libro y encuentras un compartimento secreto con cartas antiguas que revelan conflictos familiares en la historia del Señor Cuervo.\n";
                        cout << "¡Has descubierto secretos intrigantes y escapado con éxito de la Mansión!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas el libro para más adelante y exploras más la habitación en busca de más pistas.\n";
                        cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                        return 0;
                    }
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas el balcón y encuentras una puerta secreta detrás de una cortina.\n";
                cout << "¿Qué decides hacer con la puerta secreta?\n";
                cout << "1. Abrir la puerta secreta y explorar el pasillo oculto\n";
                cout << "2. Guardar la información para más adelante y explorar más el balcón\n";
                cout << "Elige una opción: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nAbres la puerta secreta y exploras el pasillo oculto que conduce a una habitación secreta.\n";
                    cout << "Dentro encuentras una colección de artefactos antiguos y documentos históricos.\n";
                    cout << "¡Has encontrado una colección intrigante y escapado con éxito de la Mansión!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la información para más adelante y exploras más el balcón en busca de más pistas.\n";
                    cout << "¡Has explorado con éxito la Mansión del Señor Cuervo!\n";
                    return 0;
                }
            }
        }
    }
    cout << "\nNo has encontrado una salida todavía. ¡Sigue explorando la Mansión del Señor Cuervo!\n";
    return 0;
}

