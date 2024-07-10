#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_CTYPE, ""); // Establece la localizaci�n para caracteres especiales

    int eleccion;

    // T�tulo del juego
    cout << "~~~ La Mansi�n del Se�or Cuervo ~~~\n";
    cout << "Est�s frente a la mansi�n del Se�or Cuervo. �Qu� deseas hacer?\n";
    cout << "1. Llamar a la puerta principal\n";
    cout << "2. Explorar los alrededores en busca de una entrada secreta\n";
    cout << "Elige una opci�n: ";
    cin >> eleccion;

    if (eleccion == 1) {
        cout << "\nLlamas a la puerta principal y esperas. Despu�s de un momento, el Se�or Cuervo te abre.\n";
        cout << "Te invita a pasar y te ofrece algo de beber. �Qu� decides hacer?\n";
        cout << "1. Aceptar la bebida y seguir con la conversaci�n\n";
        cout << "2. Declinar cort�smente la bebida y pedir explorar la mansi�n\n";
        cout << "Elige una opci�n: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nAceptas la bebida y entablas una conversaci�n amistosa con el Se�or Cuervo.\n";
            cout << "Te cuenta historias sobre la mansi�n y sus antepasados. �Qu� deseas hacer ahora?\n";
            cout << "1. Pedirle m�s detalles sobre un retrato misterioso en la sala principal\n";
            cout << "2. Preguntarle sobre posibles habitaciones secretas en la mansi�n\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEl Se�or Cuervo te cuenta la historia detr�s del retrato misterioso y su conexi�n con eventos sobrenaturales.\n";
                cout << "�Qu� decides hacer despu�s de la conversaci�n?\n";
                cout << "1. Investigar la sala principal en busca de m�s pistas\n";
                cout << "2. Sugerir explorar juntos la mansi�n en busca de habitaciones secretas\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la sala principal y encuentras un compartimiento secreto detr�s del retrato.\n";
                    cout << "Dentro descubres una llave antigua. �Qu� deseas hacer con la llave?\n";
                    cout << "1. Utilizarla para abrir una puerta cerrada en el s�tano\n";
                    cout << "2. Guardarla para m�s adelante y continuar explorando la mansi�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nUsas la llave para abrir una puerta en el s�tano y descubres un laboratorio abandonado.\n";
                        cout << "Encuentras documentos que revelan experimentos cient�ficos realizados por los antepasados del Se�or Cuervo.\n";
                        cout << "�Has descubierto un secreto profundo y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar la llave para m�s adelante y continuar explorando otras �reas de la mansi�n.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nEl Se�or Cuervo acepta explorar juntos la mansi�n en busca de habitaciones secretas.\n";
                    cout << "Descubren un pasadizo secreto que lleva a un jard�n interior oculto.\n";
                    cout << "�Qu� deseas hacer en el jard�n interior?\n";
                    cout << "1. Investigar las estatuas antiguas en busca de pistas\n";
                    cout << "2. Buscar una entrada secreta adicional en el jard�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas las estatuas antiguas y encuentras una inscripci�n que apunta a un tesoro oculto.\n";
                        cout << "�Qu� decides hacer con la informaci�n del tesoro?\n";
                        cout << "1. Excavar el �rea indicada y ver lo que encuentras\n";
                        cout << "2. Guardar la informaci�n para m�s adelante y explorar m�s la mansi�n\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nExcavas el �rea indicada y encuentras una caja con reliquias antiguas y monedas raras.\n";
                            cout << "�Has encontrado un tesoro enterrado y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nGuardas la informaci�n del tesoro para m�s adelante y decides explorar m�s la mansi�n.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nBuscas una entrada secreta adicional y encuentras una escalera que lleva a un �tico abandonado.\n";
                        cout << "Exploras el �tico. �Qu� decides hacer?\n";
                        cout << "1. Buscar documentos antiguos y libros en el �tico\n";
                        cout << "2. Regresar al jard�n para buscar m�s pistas\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario antiguo que revela secretos sobre la fundaci�n de la mansi�n.\n";
                            cout << "�Has descubierto secretos intrigantes y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nRegresas al jard�n para buscar m�s pistas y descubres una entrada oculta que lleva a la cripta familiar.\n";
                            cout << "Exploras la cripta. �Qu� decides hacer?\n";
                            cout << "1. Investigar las tumbas de los antepasados en busca de pistas adicionales\n";
                            cout << "2. Salir de la cripta y regresar a la mansi�n\n";
                            cout << "Elige una opci�n: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nInvestigas las tumbas de los antepasados y encuentras artefactos antiguos que revelan secretos familiares.\n";
                                cout << "�Has descubierto secretos profundos y escapado con �xito de la Mansi�n!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nSales de la cripta y regresas a la mansi�n con nuevas pistas.\n";
                                cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                                return 0;
                            }
                        }
                    }
                }
            } else if (eleccion == 2) {
                cout << "\nEl Se�or Cuervo te cuenta sobre posibles habitaciones secretas y su deseo de encontrarlas juntos.\n";
                cout << "�Qu� decides hacer despu�s de la conversaci�n?\n";
                cout << "1. Comenzar la b�squeda de habitaciones secretas con el Se�or Cuervo\n";
                cout << "2. Explorar por tu cuenta mientras el Se�or Cuervo est� ocupado\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nComienzan la b�squeda de habitaciones secretas juntos y encuentran un estudio oculto lleno de libros antiguos.\n";
                    cout << "�Qu� decides hacer con los libros antiguos?\n";
                    cout << "1. Leer los libros en busca de pistas adicionales\n";
                    cout << "2. Guardar los libros para un an�lisis posterior y continuar explorando\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nLees los libros y descubres una referencia a un pasadizo secreto en la biblioteca principal.\n";
                        cout << "Investigas la biblioteca. �Qu� decides hacer?\n";
                        cout << "1. Buscar el pasadizo secreto en la biblioteca\n";
                        cout << "2. Guardar la informaci�n para m�s adelante y explorar otras �reas\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras el pasadizo secreto en la biblioteca y descubres un t�nel que lleva al exterior.\n";
                            cout << "�Has encontrado una salida secreta y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nGuardas la informaci�n del pasadizo secreto para m�s adelante y decides explorar otras �reas de la mansi�n.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar los libros para un an�lisis posterior y continuar explorando otras �reas de la mansi�n.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides explorar por tu cuenta mientras el Se�or Cuervo est� ocupado.\n";
                    cout << "Encuentras un pasadizo secreto detr�s de un cuadro en la sala principal.\n";
                    cout << "�Qu� decides hacer con el pasadizo secreto?\n";
                    cout << "1. Investigar el pasadizo secreto y ver a d�nde lleva\n";
                    cout << "2. Guardar la informaci�n para m�s adelante y explorar otras �reas de la mansi�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas el pasadizo secreto y descubres un s�tano oculto lleno de reliquias antiguas.\n";
                        cout << "�Has encontrado un tesoro oculto y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas la informaci�n del pasadizo secreto para m�s adelante y decides explorar otras �reas de la mansi�n.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDeclinas cort�smente la bebida y pides explorar la mansi�n por tu cuenta.\n";
            cout << "�Qu� �rea de la mansi�n decides explorar primero?\n";
            cout << "1. El s�tano en busca de entradas secretas\n";
            cout << "2. La biblioteca para buscar libros antiguos y pistas\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nExploras el s�tano y encuentras una entrada secreta detr�s de una estatua.\n";
                cout << "�Qu� decides hacer con la entrada secreta?\n";
                cout << "1. Investigar la entrada secreta y ver a d�nde lleva\n";
                cout << "2. Guardar la informaci�n para m�s adelante y continuar explorando la mansi�n\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la entrada secreta y descubres un pasadizo que lleva a una sala de artefactos perdidos.\n";
                    cout << "Encuentras un artefacto antiguo que brilla con energ�a m�gica.\n";
                    cout << "�Qu� decides hacer con el artefacto?\n";
                    cout << "1. Tomar el artefacto y escapar de la mansi�n\n";
                    cout << "2. Dejar el artefacto y explorar m�s la sala de artefactos perdidos\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nTomas el artefacto y logras escapar de la mansi�n con �xito.\n";
                        cout << "�Has encontrado un artefacto m�gico y escapado de la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nDecides dejar el artefacto y explorar m�s la sala de artefactos perdidos.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la informaci�n de la entrada secreta para m�s adelante y continuar explorando la mansi�n.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nDecides explorar la biblioteca en busca de libros antiguos y pistas sobre la historia de la mansi�n.\n";
                cout << "Encuentras un libro antiguo con un mapa dibujado a mano que marca lugares clave en la mansi�n.\n";
                cout << "�C�mo decides usar esta informaci�n del mapa?\n";
                cout << "1. Seguir las marcas en el mapa para buscar una entrada secreta\n";
                cout << "2. Guardar el mapa para m�s adelante y explorar otras �reas de la mansi�n\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nSigues las marcas en el mapa y encuentras una entrada secreta detr�s de una estatua en el jard�n.\n";
                    cout << "Exploras el pasadizo y descubres una biblioteca oculta llena de libros antiguos y documentos secretos.\n";
                    cout << "�Has encontrado una biblioteca oculta y escapado con �xito de la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar el mapa para m�s adelante y continuar explorando otras �reas de la mansi�n.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            }
        }
    } else if (eleccion == 2) {
        cout << "\nDecides explorar los alrededores en busca de una entrada secreta a la mansi�n.\n";
        cout << "Encuentras una ventana entreabierta en la parte trasera de la mansi�n.\n";
        cout << "�Qu� decides hacer con la ventana entreabierta?\n";
        cout << "1. Entrar por la ventana y explorar la mansi�n desde adentro\n";
        cout << "2. Buscar m�s alrededor en busca de otra entrada secreta\n";
        cout << "Elige una opci�n: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nEntras por la ventana y comienzas a explorar la mansi�n desde adentro.\n";
            cout << "Encuentras un pasadizo secreto que lleva a un jard�n interior oculto.\n";
            cout << "�Qu� decides hacer en el jard�n interior?\n";
            cout << "1. Investigar las estatuas antiguas en busca de pistas\n";
            cout << "2. Buscar una entrada secreta adicional en el jard�n\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nInvestigas las estatuas antiguas y encuentras una inscripci�n que apunta a un tesoro oculto.\n";
                cout << "�Qu� decides hacer con la informaci�n del tesoro?\n";
                cout << "1. Excavar el �rea indicada y ver lo que encuentras\n";
                cout << "2. Guardar la informaci�n para m�s adelante y explorar m�s la mansi�n\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExcavas el �rea indicada y encuentras una caja con reliquias antiguas y monedas raras.\n";
                    cout << "�Has encontrado un tesoro enterrado y escapado con �xito de la Mansi�n!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nGuardas la informaci�n del tesoro para m�s adelante y decides explorar m�s la mansi�n.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nBuscas una entrada secreta adicional y encuentras una escalera que lleva a un �tico abandonado.\n";
                cout << "Exploras el �tico. �Qu� decides hacer?\n";
                cout << "1. Buscar documentos antiguos y libros en el �tico\n";
                cout << "2. Regresar al jard�n para buscar m�s pistas\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un diario antiguo que revela secretos sobre la fundaci�n de la mansi�n.\n";
                    cout << "�Has descubierto secretos intrigantes y escapado con �xito de la Mansi�n!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nRegresas al jard�n para buscar m�s pistas y descubres una entrada oculta que lleva a la cripta familiar.\n";
                    cout << "Exploras la cripta. �Qu� decides hacer?\n";
                    cout << "1. Investigar las tumbas de los antepasados en busca de pistas adicionales\n";
                    cout << "2. Salir de la cripta y regresar a la mansi�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nInvestigas las tumbas de los antepasados y encuentras artefactos antiguos que revelan secretos familiares.\n";
                        cout << "�Has descubierto secretos profundos y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nSales de la cripta y regresas a la mansi�n con nuevas pistas.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDecides buscar m�s alrededor en busca de otra entrada secreta a la mansi�n.\n";
            cout << "Encuentras una entrada lateral oculta que lleva directamente a la cocina de la mansi�n.\n";
            cout << "�Qu� decides hacer desde la cocina?\n";
            cout << "1. Buscar documentos antiguos en la cocina\n";
            cout << "2. Salir de la cocina y explorar otras �reas de la mansi�n\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nBuscas documentos antiguos en la cocina y encuentras un libro de recetas antiguo con una carta oculta.\n";
                cout << "La carta revela un complot hist�rico relacionado con la mansi�n.\n";
                cout << "�Qu� decides hacer con la carta del complot?\n";
                cout << "1. Investigar m�s el complot y buscar pistas adicionales\n";
                cout << "2. Guardar la carta para m�s adelante y explorar otras �reas\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas m�s sobre el complot y descubres una entrada secreta detr�s de la despensa.\n";
                    cout << "Exploras el pasadizo y encuentras una habitaci�n secreta con documentos que confirman el complot.\n";
                    cout << "�Has descubierto un complot hist�rico y escapado con �xito de la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nGuardas la carta para m�s adelante y decides explorar otras �reas de la mansi�n.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nDecides salir de la cocina y explorar otras �reas de la mansi�n.\n";
                cout << "Encuentras una biblioteca antigua con libros cubiertos de polvo.\n";
                cout << "�C�mo decides usar esta informaci�n?\n";
                cout << "1. Buscar libros antiguos que puedan contener pistas\n";
                cout << "2. Continuar explorando otras �reas de la mansi�n\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un libro antiguo que menciona un t�nel secreto debajo de la biblioteca.\n";
                    cout << "Investigas la biblioteca. �Qu� decides hacer?\n";
                    cout << "1. Buscar el t�nel secreto debajo de la biblioteca\n";
                    cout << "2. Guardar la informaci�n para m�s adelante y explorar otras �reas\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras el t�nel secreto debajo de la biblioteca y descubres una salida oculta.\n";
                        cout << "�Has encontrado una salida secreta y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas la informaci�n del t�nel secreto para m�s adelante y decides explorar otras �reas de la mansi�n.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides continuar explorando otras �reas de la mansi�n.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            }
        }
    }

    return 0;
}

