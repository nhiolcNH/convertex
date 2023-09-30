#include <iostream>
#include <ctime>
#include <unistd.h>
#include <stdio.h>

using namespace std;

	int main() {


		int seleccion;
		int medida;
		int metros;
		string decision;
		double km = 0.001;
		double hm = 0.01;
		double dam = 0.1;
		int dm = 10;
		int cm = 100;
		int mm = 1000;
		double pies = 3.28084;
		double yardas = 1.09361;
		double millas = 0.0186411;

	
		std::cout << "\n\n\n ####   ####  #    # #    # ###### #####  ##### ###### #    # \n" << "#    # #    # ##   # #    # #      #    #   #   #       #  #  \n" << "#      #    # # #  # #    # #####  #    #   #   #####    ##   \n" << "#      #    # #  # # #    # #      #####    #   #        ##   \n" << "#    # #    # #   ##  #  #  #      #   #    #   #       #  #  \n" << " ####   ####  #    #   ##   ###### #    #   #   ###### #    # \n";


		sleep(3);
		std::cout << "\n\n\n¡Hola! Esto és CONVERTEX, Desarrollado por 'nhiolc'. \nUn pequeño script para hacer conversiones de metros a otras medidas. \n\n";

		std::cout << "A continuación se le mostrará una lista con diferentes sistemas de medidas:\n\n";

			sleep(10);
			std::cout << "[1] Kilometros(km) \n" << "[2] Hectómetros(hm) \n" << "[3] Decámetros(dac) \n" << "[4] Decímetros(dm) \n" << "[5] Centímetros(cm) \n" << "[6] Milímetros(mm) \n" << "[7] Pies(feet) \n" << "[8] Yardas(yd) \n" << "[9] Millas(miles) \n";

			std::cout << "Seleccione la medida en la que desea hacer la conversión (núm.): ";
			std::cin >> seleccion;

				if (seleccion == 1) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a Kilometros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * km << " km" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

									else if (decision == "no") {

										sleep(2);	
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
								
				}

				else if (seleccion == 2) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a Hectómetros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * hm << " hm" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);	
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 3) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a decámetros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * dam << " dam" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 4) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a decímetros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * dm << " dm" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}
				else if (seleccion == 5) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a centímetros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * cm << " cm" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);	
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 6) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a milímetros. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * mm << " mm" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 7) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a pies. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * pies << " pies" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 8) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a yardas. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * yardas << " yardas" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

				else if (seleccion == 9) {

					std::cout << "\n\n¡Perfecto! Ha seleccionado su conversión a millas. Ahora introduzca la cantidad en metros que va a transformar: ";
					std::cin >> metros;
					std::cout << "\nCalculando...\n\n";
						sleep(3);							



						std::cout << "Sú conversión és: " << metros * millas << " millas" <<"\n\n";
						sleep(2);

							std::cout << "Desea hacer alguna otra conversión? (si/no): ";
							std::cin >> decision;

								if (decision == "si") {
									main();
								}

								else if (decision == "no") {

										sleep(2);		
										std::cout << "\n\n!Entendido¡ Hasta la próxima :)\n\n";
									}
				}

					else {

						std::cout << "\n\nRecuerde introducir los datos correctamente como se le muestran.\n\n";
						std::cout << main();
					}

						return 0;
	}
