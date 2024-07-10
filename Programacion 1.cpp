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
                        cout << "1. Buscar la entrada del pasadizo secreto en la biblioteca\n";
                        cout << "2. Regresar al estudio oculto para buscar m�s pistas\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras la entrada del pasadizo secreto en la biblioteca y descubres un camino subterr�neo.\n";
                            cout << "Sigues el camino y encuentras una antigua c�mara de tesoros.\n";
                            cout << "�Has encontrado un tesoro oculto y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nRegresas al estudio oculto para buscar m�s pistas y encuentras un mapa antiguo que indica una entrada secreta en el s�tano.\n";
                            cout << "Exploras el s�tano. �Qu� decides hacer?\n";
                            cout << "1. Buscar la entrada secreta indicada en el mapa\n";
                            cout << "2. Continuar explorando otras �reas del s�tano\n";
                            cout << "Elige una opci�n: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nEncuentras la entrada secreta indicada en el mapa y descubres un pasadizo hacia la costa.\n";
                                cout << "�Has encontrado una salida secreta y escapado con �xito de la Mansi�n!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nContin�as explorando otras �reas del s�tano y descubres un cuarto de almacenamiento con artefactos antiguos.\n";
                                cout << "�Has descubierto artefactos intrigantes y escapado con �xito de la Mansi�n!\n";
                                return 0;
                            }
                        }
                    } else if (eleccion == 2) {
                        cout << "\nDecides guardar los libros para un an�lisis posterior y contin�as explorando la mansi�n con el Se�or Cuervo.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides explorar por tu cuenta mientras el Se�or Cuervo est� ocupado.\n";
                    cout << "Encuentras un pasillo secreto que lleva a un sal�n de baile abandonado.\n";
                    cout << "�Qu� decides hacer en el sal�n de baile?\n";
                    cout << "1. Buscar una entrada secreta adicional en el sal�n\n";
                    cout << "2. Investigar los retratos antiguos en busca de pistas\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras una entrada secreta adicional en el sal�n que lleva a un teatro subterr�neo.\n";
                        cout << "Exploras el teatro. �Qu� decides hacer?\n";
                        cout << "1. Buscar entre los asientos del teatro en busca de pistas\n";
                        cout << "2. Salir del teatro y continuar explorando la mansi�n\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario entre los asientos del teatro que revela secretos sobre eventos pasados en la mansi�n.\n";
                            cout << "�Has descubierto secretos intrigantes y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nSales del teatro y contin�as explorando la mansi�n en busca de m�s pistas.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    } else if (eleccion == 2) {
                        cout << "\nInvestigas los retratos antiguos y encuentras una pintura que revela una entrada secreta detr�s de una cascada en el jard�n.\n";
                        cout << "�Qu� decides hacer con la entrada secreta?\n";
                        cout << "1. Explorar la entrada secreta en el jard�n\n";
                        cout << "2. Guardar la informaci�n para m�s adelante y continuar explorando la mansi�n\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nExploras la entrada secreta en el jard�n y encuentras un t�nel subterr�neo que lleva a un antiguo cementerio familiar.\n";
                            cout << "Investigas el cementerio. �Qu� decides hacer?\n";
                            cout << "1. Examinar las l�pidas antiguas en busca de pistas\n";
                            cout << "2. Salir del cementerio y regresar a la mansi�n\n";
                            cout << "Elige una opci�n: ";
                            cin >> eleccion;

                            if (eleccion == 1) {
                                cout << "\nExaminas las l�pidas antiguas y encuentras una inscripci�n que se�ala la ubicaci�n de un cofre enterrado.\n";
                                cout << "Excavas el cofre y encuentras artefactos antiguos y monedas raras.\n";
                                cout << "�Has encontrado un tesoro oculto y escapado con �xito de la Mansi�n!\n";
                                return 0;
                            } else if (eleccion == 2) {
                                cout << "\nSales del cementerio y regresas a la mansi�n con nuevas pistas.\n";
                                cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                                return 0;
                            }
                        } else if (eleccion == 2) {
                            cout << "\nDecides guardar la informaci�n para m�s adelante y continuar explorando la mansi�n en busca de m�s pistas.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    }
                }
            }
        } else if (eleccion == 2) {
            cout << "\nDeclinas cort�smente la bebida y pides explorar la mansi�n en busca de habitaciones secretas.\n";
            cout << "El Se�or Cuervo asiente y te gu�a por un pasillo lateral hacia una biblioteca secreta.\n";
            cout << "�Qu� decides hacer en la biblioteca secreta?\n";
            cout << "1. Buscar entre los libros antiguos en busca de pistas\n";
            cout << "2. Investigar los documentos en busca de informaci�n sobre la historia de la mansi�n\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nBuscas entre los libros antiguos y encuentras un mapa que indica una entrada secreta en el jard�n.\n";
                cout << "�Qu� decides hacer con el mapa?\n";
                cout << "1. Explorar la entrada secreta indicada en el jard�n\n";
                cout << "2. Guardar el mapa para m�s adelante y continuar explorando la biblioteca\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExploras la entrada secreta en el jard�n y encuentras un t�nel subterr�neo que lleva a un antiguo cementerio familiar.\n";
                    cout << "Investigas el cementerio. �Qu� decides hacer?\n";
                    cout << "1. Examinar las l�pidas antiguas en busca de pistas\n";
                    cout << "2. Salir del cementerio y regresar a la mansi�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nExaminas las l�pidas antiguas y encuentras una inscripci�n que se�ala la ubicaci�n de un cofre enterrado.\n";
                        cout << "Excavas el cofre y encuentras artefactos antiguos y monedas raras.\n";
                        cout << "�Has encontrado un tesoro oculto y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nSales del cementerio y regresas a la mansi�n con nuevas pistas.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar el mapa para m�s adelante y continuar explorando la biblioteca en busca de m�s pistas.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas los documentos y encuentras informaci�n sobre la construcci�n original de la mansi�n.\n";
                cout << "�Qu� decides hacer con la informaci�n encontrada?\n";
                cout << "1. Buscar una entrada secreta adicional en la biblioteca\n";
                cout << "2. Regresar al Se�or Cuervo y compartir la informaci�n para explorar juntos\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nBuscas una entrada secreta adicional y encuentras un pasadizo que lleva a un s�tano oculto.\n";
                    cout << "Exploras el s�tano. �Qu� decides hacer?\n";
                    cout << "1. Buscar entre las cajas antiguas en busca de pistas\n";
                    cout << "2. Investigar la estructura del s�tano para descubrir m�s habitaciones secretas\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nEncuentras una caja antigua con documentos que revelan actividades il�citas de un antiguo ocupante de la mansi�n.\n";
                        cout << "�Has descubierto secretos intrigantes y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nInvestigas la estructura del s�tano y encuentras un pasadizo adicional que lleva a una bodega secreta.\n";
                        cout << "Exploras la bodega. �Qu� decides hacer?\n";
                        cout << "1. Buscar entre las estanter�as en busca de pistas\n";
                        cout << "2. Salir de la bodega y regresar a la biblioteca\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nEncuentras un diario oculto entre las estanter�as que revela secretos sobre la familia del Se�or Cuervo.\n";
                            cout << "�Has descubierto secretos profundos y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nSales de la bodega y regresas a la biblioteca con nuevas pistas.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    }
                } else if (eleccion == 2) {
                    cout << "\nRegresas al Se�or Cuervo y compartes la informaci�n encontrada. Deciden explorar juntos la mansi�n en busca de m�s pistas.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            }
        }
    } else if (eleccion == 2) {
        cout << "\nDecides explorar los alrededores en busca de una entrada secreta a la mansi�n.\n";
        cout << "Encuentras un sendero que conduce a una entrada lateral oculta.\n";
        cout << "�Qu� decides hacer en la entrada lateral?\n";
        cout << "1. Entrar sigilosamente y explorar la planta baja de la mansi�n\n";
        cout << "2. Buscar una escalera exterior que conduzca a los pisos superiores\n";
        cout << "Elige una opci�n: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "\nEntras sigilosamente y exploras la planta baja de la mansi�n. Encuentras la cocina y el sal�n principal.\n";
            cout << "�Qu� decides hacer en el sal�n principal?\n";
            cout << "1. Buscar entre los muebles en busca de pistas\n";
            cout << "2. Investigar los retratos antiguos en busca de informaci�n sobre la familia del Se�or Cuervo\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEncuentras un caj�n con cartas antiguas que mencionan una habitaci�n secreta en el ala oeste de la mansi�n.\n";
                cout << "�Qu� decides hacer con la informaci�n de la habitaci�n secreta?\n";
                cout << "1. Explorar el ala oeste en busca de la habitaci�n secreta\n";
                cout << "2. Guardar la informaci�n para m�s adelante y explorar m�s la planta baja\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nExploras el ala oeste y encuentras la habitaci�n secreta detr�s de una estanter�a.\n";
                    cout << "Dentro encuentras un pasadizo que lleva a un s�tano oculto con artefactos antiguos.\n";
                    cout << "�Has descubierto artefactos intrigantes y escapado con �xito de la Mansi�n!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la informaci�n para m�s adelante y exploras m�s la planta baja en busca de m�s pistas.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas los retratos antiguos y encuentras una pintura que parece moverse levemente.\n";
                cout << "�Qu� decides hacer con la pintura?\n";
                cout << "1. Investigar la pintura en busca de una entrada secreta\n";
                cout << "2. Guardar la informaci�n para m�s adelante y explorar la cocina\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nInvestigas la pintura y encuentras un bot�n oculto que revela una escalera secreta detr�s de ella.\n";
                    cout << "Bajas por la escalera y encuentras una sala de m�quinas antigua.\n";
                    cout << "�Has encontrado una sala secreta y escapado con �xito de la Mansi�n!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la informaci�n para m�s adelante y exploras la cocina en busca de m�s pistas.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            }
        } else if (eleccion == 2) {
            cout << "\nBuscas una escalera exterior que conduce a los pisos superiores de la mansi�n.\n";
            cout << "Encuentras una escalera de incendios que parece llevar al balc�n del segundo piso.\n";
            cout << "�Qu� decides hacer en el balc�n del segundo piso?\n";
            cout << "1. Entrar por una ventana abierta y explorar una habitaci�n cercana\n";
            cout << "2. Investigar el balc�n en busca de una entrada secreta al interior del segundo piso\n";
            cout << "Elige una opci�n: ";
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "\nEntras por la ventana abierta y encuentras una habitaci�n con un escritorio antiguo y libros apilados.\n";
                cout << "�Qu� decides hacer en la habitaci�n con el escritorio?\n";
                cout << "1. Buscar entre los cajones del escritorio en busca de pistas\n";
                cout << "2. Investigar la biblioteca personal del Se�or Cuervo en busca de informaci�n adicional\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nEncuentras un diario escondido en uno de los cajones que detalla un romance secreto en la familia del Se�or Cuervo.\n";
                    cout << "�Qu� decides hacer con el diario encontrado?\n";
                    cout << "1. Guardarlo para m�s adelante y continuar explorando la habitaci�n\n";
                    cout << "2. Regresar al balc�n para buscar m�s pistas\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nGuardas el diario para m�s adelante y contin�as explorando la habitaci�n en busca de m�s pistas.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nRegresas al balc�n para buscar m�s pistas y encuentras una puerta secreta detr�s de una cortina.\n";
                        cout << "�Qu� decides hacer con la puerta secreta?\n";
                        cout << "1. Abrir la puerta secreta y explorar el pasillo oculto\n";
                        cout << "2. Guardar la informaci�n para m�s adelante y continuar explorando el balc�n\n";
                        cout << "Elige una opci�n: ";
                        cin >> eleccion;

                        if (eleccion == 1) {
                            cout << "\nAbres la puerta secreta y exploras el pasillo oculto que conduce a una habitaci�n secreta.\n";
                            cout << "Dentro encuentras una colecci�n de artefactos antiguos y documentos hist�ricos.\n";
                            cout << "�Has encontrado una colecci�n intrigante y escapado con �xito de la Mansi�n!\n";
                            return 0;
                        } else if (eleccion == 2) {
                            cout << "\nDecides guardar la informaci�n para m�s adelante y exploras m�s el balc�n en busca de m�s pistas.\n";
                            cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                            return 0;
                        }
                    }
                } else if (eleccion == 2) {
                    cout << "\nInvestigas la biblioteca personal del Se�or Cuervo y encuentras un libro con una cubierta especialmente tallada.\n";
                    cout << "�Qu� decides hacer con el libro especial?\n";
                    cout << "1. Abrir el libro y revisar si tiene alg�n compartimento secreto\n";
                    cout << "2. Guardar el libro para m�s adelante y explorar m�s la habitaci�n\n";
                    cout << "Elige una opci�n: ";
                    cin >> eleccion;

                    if (eleccion == 1) {
                        cout << "\nAbres el libro y encuentras un compartimento secreto con cartas antiguas que revelan conflictos familiares en la historia del Se�or Cuervo.\n";
                        cout << "�Has descubierto secretos intrigantes y escapado con �xito de la Mansi�n!\n";
                        return 0;
                    } else if (eleccion == 2) {
                        cout << "\nGuardas el libro para m�s adelante y exploras m�s la habitaci�n en busca de m�s pistas.\n";
                        cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                        return 0;
                    }
                }
            } else if (eleccion == 2) {
                cout << "\nInvestigas el balc�n y encuentras una puerta secreta detr�s de una cortina.\n";
                cout << "�Qu� decides hacer con la puerta secreta?\n";
                cout << "1. Abrir la puerta secreta y explorar el pasillo oculto\n";
                cout << "2. Guardar la informaci�n para m�s adelante y explorar m�s el balc�n\n";
                cout << "Elige una opci�n: ";
                cin >> eleccion;

                if (eleccion == 1) {
                    cout << "\nAbres la puerta secreta y exploras el pasillo oculto que conduce a una habitaci�n secreta.\n";
                    cout << "Dentro encuentras una colecci�n de artefactos antiguos y documentos hist�ricos.\n";
                    cout << "�Has encontrado una colecci�n intrigante y escapado con �xito de la Mansi�n!\n";
                    return 0;
                } else if (eleccion == 2) {
                    cout << "\nDecides guardar la informaci�n para m�s adelante y exploras m�s el balc�n en busca de m�s pistas.\n";
                    cout << "�Has explorado con �xito la Mansi�n del Se�or Cuervo!\n";
                    return 0;
                }
            }
        }
    }
    cout << "\nNo has encontrado una salida todav�a. �Sigue explorando la Mansi�n del Se�or Cuervo!\n";
    return 0;
}

