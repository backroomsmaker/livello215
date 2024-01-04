#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void pausa() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

void eseguiLivello215() {
    int scelta;
    std::cout<<""<<std::endl;
    std::cout << "Ti risvegli da un lungo sonno, ma il buio ti circonda." << std::endl;
    pausa();
    std::cout << "Il tuo cuore batte forte mentre ti rendi conto che sei in un luogo sconosciuto." << std::endl;
    pausa();
    std::cout << "Non riesci a vedere nulla, ma puoi sentire un sordo ronzio nell'aria." << std::endl;
    pausa();
    std::cout << "La paura ti pervade mentre inizi a cercare una via d'uscita..." << std::endl;
    pausa();

    do {
	std::cout<<""<<std::endl;
        std::cout << "\nCosa fai?" << std::endl;
	std::cout<<""<<std::endl;
        std::cout << "1. Cerca una torcia." << std::endl;
	pausa();
	std::cout<<""<<std::endl;
        std::cout << "2. Ascolta attentamente i rumori nell'oscurità." << std::endl;
	std::cout<<""<<std::endl;
        std::cout << "3. Tocca le pareti per trovare una strada." << std::endl;
	pausa();
        std::cout << "4. Resta immobile e attendi." << std::endl;
        std::cout << "5. Esplora alla cieca." << std::endl;
	pausa();
        std::cout << "Seleziona un'opzione: ";
	std::cout << "" <<std::endl;

        std::cin >> scelta;

        switch (scelta) {
            case 1: {
                int sceltaTorcia;
		std::cout<<""<<std::endl;
                std::cout << "Hai trovato una torcia. La accendi e illumini la stanza." << std::endl;
                pausa(); 
                std::cout << "1. Esplora la stanza illuminata." << std::endl;
                std::cout << "2. Cerca una chiave nella stanza." << std::endl;
                std::cout << "3. Spegni la torcia e ritorna nell'oscurità." << std::endl;
                std::cout << "Seleziona un'opzione: ";
		std::cout << "" <<std::endl;
                std::cin >> sceltaTorcia;
                switch (sceltaTorcia) {
                    case 1:
			int sceltaEdifici;
			std::cout << "" <<std::endl;
                        std::cout << "Hai esplorato la stanza illuminata." << std::endl;
                        std::cout << "" <<std::endl;
			pausa();
			std::cout << "Dalla finestra noti un agglomerato di case decadenti a te molto familiari." <<std::endl;
			std::cout << "" <<std::endl;
			pausa();
			std::cout << "1. Provi ad uscire e ti dirigi verso un ristorante." <<std::endl;
			std::cout << "2. Provi ad uscire e vai verso quella che sembra casa tua." <<std::endl;
			std::cout << "3. Provi ad esplorare il palazzo in cui ti trovi." <<std::endl;
			std::cin >> sceltaEdifici;
                        switch (sceltaEdifici){
				int sceltaPiani;
				int sceltaCibo;
				case 1:
				std::cout<<""<<std::endl;
				std::cout << "Il ristorante è veramente poco accogliente" <<std::endl;
				std::cout << "però noti che sui tavoli ci sono degli avanzi" <<std::endl;
				pausa();
				std::cout << "1. Mangia gli avanzi." <<std::endl;
				std::cout << "2. Esplora il ristorante." <<std::endl;
				std::cin >> sceltaCibo;
				switch (sceltaCibo){
					int sceltaAbominio;
					case 1:
					std::cout<<""<<std::endl;
					std::cout<<"Dopo poco tempo inizi a vomitare sangue e  la vista si annebbia"<<std::endl;
					pausa();
					std::cout<<"La tua avventura termina qui"<<std::endl;
					exit(0);
					case 2:
					std::cout<<""<<std::endl;
					std::cout<<"Mentre avanzi per controllare la cucina senti dei lamenti"<<std::endl;
					std::cout<<""<<std::endl;
					pausa();
					std::cout<<"Vedi un umano quasi decomposto che si approccia verso di te."<<std::endl;
					std::cout<<""<<std::endl;
					std::cout<<"11. Attacca l'abominio."<<std::endl;
					std::cout<<"2. Scappa fuori dal ristorante."<<std::endl;
					std::cin >> sceltaAbominio;
					switch (sceltaAbominio){
						int sceltaAuto;
						case 11:
						std::cout<<""<<std::endl;
						std::cout<<"L'abominio ti afferra il braccio e il tuo braccio inizia a decomporsi."<<std::endl;
						pausa();
						std::cout<<"Corri fuori, ma il tuo corpo si decompone troppo velocemente."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Il tuo viaggio termina qui."<<std::endl;
						exit(0);
						case 2:
						std::cout<<""<<std::endl;
						std::cout<<"Riesci a scappare fuori dal ristorante."<<std::endl;
						pausa();
						std::cout<<"Noti un parcheggio con una macchina a te familiare e di fianco"<<std::endl;
						std::cout<<"c'è un ponte che ti richiama."<<std::endl;
						pausa();
						std::cout<<"1. Entra nell'auto."<<std::endl;
						std::cout<<"2. Attraversa il ponte."<<std::endl;
						std::cin >> sceltaAuto;
						switch (sceltaAuto)
							int sceltaTorcia;
							case 1:
							std::cout<<""<<std::endl;
							std::cout<<"Entri nell'auto e noti che le chiavi sono già inserite."<<std::endl;
							pausa();
							std::cout<<""<<std::endl;
							std::cout<<"La avvii e senti gli edifici dietro di te che iniziano a crollare."<<std::endl;
							std::cout<<""<<std::endl;
							std::cout<<"1. Guida verso l'autostrada andando a sinistra del parcheggio."<<std::endl;
							std::cout<<"20. Attraversa il ponte e vai verso l'interno della cittadina."<<std::endl;
							std::cin >> sceltaTorcia;
							switch (sceltaTorcia)
								case 1:
								std::cout<<""<<std::endl;
								std::cout<<"Percorri l'autostrada per diversi minuti."<<std::endl;
								std::cout<<""<<std::endl;
								pausa();
								std::cout<<"Il paesaggio cambia e comprendi di essere riuscito a scappare."<<std::endl;
								std::cout<<""<<std::endl;
								pausa();
								std::cout<<"Sei riuscito a sopravvivere."<<std::endl;
								std::cout<<""<<std::endl;
								pausa();
								std::cout<<"Per ora..."<<std::endl;
								exit(0);
								case 20:
								std::cout<<""<<std::endl;
								std::cout<<"La voce che ti chiama dal ponte diventa fortissima."<<std::endl;
								pausa();
								std::cout<<"Appena sei sopra il ponte inizia a crollare."<<std::endl;
								pausa();
								std::cout<<"La tua fine è inevitabile e la voce ti ringrazia."<<std::endl;
								exit(0);
					}
				}
				case 2:
				std::cout<<""<<std::endl;
                                std::cout << "Ti avvii verso l'edificio che ti ricorda casa tua." <<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Entri nella tua vecchia stanza."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Sembra tutto consumato, ma sembra molto accogliente."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Inizi a pensare ai ricordi bellissimi che ti legano alla tua"<<std::endl;
				std::cout<<"vecchia casa e improvvisamente l'ambiente cambia."<<std::endl;
				pausa();
				std::cout<<"Sei riuscito ad uscire dal livello, ma non hai idea del come."<<std::endl;
				exit(0);
				case 3:
				std::cout<<""<<std::endl;
                                std::cout << "Esplori il palazzo in cui sei." <<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<""<<std::endl;
				std::cout<<"Improvvisamente l'edificio inizia a crollare su di sé."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Non riesci ad uscire in tempo."<<std::endl;
				exit(0);
			}
                    case 2:
			std::cout << "" <<std::endl;
                        std::cout << "Hai cercato una chiave nella stanza." << std::endl;
                        std::cout << "" <<std::endl;
			pausa();
                        std::cout << "Non sei riuscito a trovare nulla di utile e nel contatto con l'ambiente la tua pelle" <<std::endl;
			std::cout << "ha iniziato a decomporsi e non puoi fare nulla" <<std::endl;
                        std::cout << "" <<std::endl;
			pausa();
			std::cout << "La tua morte è inesorabile." <<std::endl;
			exit(0);
                        break;
                    case 3:
			std::cout << "" <<std::endl;
                        std::cout << "Hai spento la torcia e sei tornato nell'oscurità." << std::endl;
			std::cout << "" <<std::endl;
			pausa();
                        std::cout << "Una figura bianca ti raggiunge alle spalle." <<std::endl;
			std::cout << "" <<std::endl;
			pausa();
                        std::cout << "Senti il cuore esploderti e dopo la vista diventa nera." <<std::endl;
                        exit(0);
                        break;
                    default:
                        std::cout << "Scelta non valida. Riprova." << std::endl;
                        break;
                }
                break;
            }
            case 2: {
                int sceltaRumori;
		std::cout << "" <<std::endl;
                std::cout << "Ascolti attentamente i rumori nell'oscurità, ma non senti nulla di minaccioso." << std::endl;
                pausa(); 
                std::cout << "1. Continua ad ascoltare." << std::endl;
                std::cout << "22. Fai un passo avanti nell'oscurità." << std::endl;
                std::cout << "3. Ritorna indietro." << std::endl;
                std::cout << "Seleziona un'opzione: ";
                std::cin >> sceltaRumori;
                switch (sceltaRumori) {
	            int sceltaBianco;
                    case 1:
			std::cout<<""<<std::endl;
                        std::cout << "Continui ad ascoltare attentamente." << std::endl;
			pausa();
			std::cout << "Vedi una figura bianca che si avvicina e ti dice:" <<std::endl;
                        std::cout << " <<Colui che consuma tutto ciò che non collassa>>" <<std::endl;
			pausa();
			std::cout << "" <<std::endl;
                        std::cout << "La vista ti si annebbia e senti il cuore esplodere." <<std::endl;
                        exit(0);
                    case 22:
			std::cout<<""<<std::endl;
                        std::cout << "Hai fatto un passo avanti nell'oscurità." << std::endl;
                        std::cout<<""<<std::endl;
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Nonostante l'ambiente scuro con la coda dell'occhio riesci a vedere"<<std::endl;
			std::cout<<"una figura bianca che ti segue."<<std::endl;
			pausa();
			std::cout<<""<<std::endl;
			pausa();
			std::cout<<"1. Guarda la figura bianca."<<std::endl;
			pausa();
			std::cout<<"2. Scappa più lontano che puoi senza guardarla."<<std::endl;
                        std::cin >> sceltaBianco;
			switch (sceltaBianco)
				case 1:
				std::cout<<""<<std::endl;
				std::cout<<"La figura bianca ti sorride."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Dopo un breve battito di ciglia ti ha raggiunto."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"La vista ti si annebbia."<<std::endl;
				exit(0);
				case 2:
				std::cout<<""<<std::endl;
				std::cout<<"Continui a correre sperando di riuscire a scappare."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Purtroppo l'edificio in cui sei inizia a crollare."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Il tuo viaggio termina qui."<<std::endl;
				exit(0);
                    case 3:
			std::cout<<""<<std::endl;
                        std::cout << "Sei tornato indietro." << std::endl;
                        std::cout<<""<<std::endl;
			pausa();
			std::cout<<"La nostalgia ti assale e vuoi restare in quella stanza."<<std::endl;
			std::cout<<""<<std::endl;
			pausa();
			std::cout<<""<<std::endl;
			std::cout<<"Inizi a decomporti per ragioni ignote e la tua fine è inevitabile."<<std::endl;
			exit(0);
                    default:
                        std::cout << "Scelta non valida. Riprova." << std::endl;
                        break;
                }
                break;
            }
	    case 3: {
    		int sceltaPareti;
		std::cout<<""<<std::endl;
    		std::cout << "Tocchi le pareti, ma sembrano essere fatte di pietra fredda e scivolosa." << std::endl;
    		pausa(); 
    		std::cout << "1. Continua a seguire le pareti." << std::endl;
    		std::cout << "2. Cerca un'interruzione nella superficie delle pareti." << std::endl;
    		std::cout << "3. Tenta di arrampicarti sulle pareti." << std::endl;
    		std::cout << "Seleziona un'opzione: ";
    		std::cin >> sceltaPareti;
    		switch (sceltaPareti) {
        		case 1:
				std::cout<<""<<std::endl;
            			std::cout << "Hai continuato a seguire le pareti." << std::endl;
				pausa();
            			std::cout << "Il contatto con la parete inizia a far decomporre il tuo corpo" << std::endl;
                                std::cout << "La tua fine sta arrivando." << std::endl;
                                exit(0);
            			break;
        		case 2:
				std::cout<<""<<std::endl;
            			std::cout << "Hai cercato un'interruzione nella superficie delle pareti." << std::endl;
				pausa();
            			std::cout << "Il contatto con la parete inizia a far decomporre il tuo corpo" << std::endl;
                                std::cout << "La tua fine sta arrivando." << std::endl;
                                exit(0);
            			break;
        		case 3:
				std::cout<<""<<std::endl;
            			std::cout << "Hai tentato di arrampicarti sulle pareti." << std::endl;
				pausa();
				std::cout << "Il contatto con la parete inizia a far decomporre il tuo corpo" << std::endl;
				std::cout << "La tua fine sta arrivando." << std::endl;
				exit(0);
            			break;
        		default:
            		std::cout << "Scelta non valida. Riprova." << std::endl;
            		break;
    		}
    		break;
	}
	case 4: {
    		int sceltaImmobile;
    		std::cout << "Resti immobile e attendi, ma non succede nulla di significativo." << std::endl;
    		pausa();
    		std::cout << "1. Continua ad attendere." << std::endl;
    		std::cout << "2. Fai un passo avanti nell'oscurità." << std::endl;
    		std::cout << "3. Tentativo di richiamare l'attenzione di qualcuno." << std::endl;
    		std::cout << "Seleziona un'opzione: ";
    		std::cin >> sceltaImmobile;
    		switch (sceltaImmobile) {
        		case 1:
				std::cout<<""<<std::endl;
            			std::cout << "Continui ad attendere." << std::endl;
				std::cout<<""<<std::endl;
				pausa();
            			std::cout<<"La nostalgia ti assale e vuoi restare in quella stanza."<<std::endl;
                                std::cout<<""<<std::endl;
                                pausa();
                                std::cout<<""<<std::endl;
                                std::cout<<"Inizi a decomporti per ragioni ignote e la tua fine è inevitabile."<<std::endl;
                                exit(0);
        		case 2:
				std::cout<<""<<std::endl;
            			std::cout << "Hai fatto un passo avanti nell'oscurità." << std::endl;
            			std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Purtroppo tocchi una parete per sbaglio e il tuo corpo inizia a dissolversi."<<std::endl;
				exit(0);
        		case 3:
				std::cout<<""<<std::endl;
            			std::cout << "Hai tentato di richiamare l'attenzione di qualcuno." << std::endl;
            			pausa();
            			std::cout<<""<<std::endl;
				std::cout<<"<<Eccomi>>"<<std::endl;
				pausa();
				std::cout<<""<<std::endl;
				std::cout<<"Fai a malapena in tempo a vedere con la coda dell'occhio una figura bianca."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"La vista ti si annebbia."<<std::endl;
				exit(0);
        		default:
            			std::cout << "Scelta non valida. Riprova." << std::endl;
            			break;
    		}
    		break;
	}
	case 5: {
    		int sceltaEsplorazione;
		std::cout<<""<<std::endl;
    		std::cout << "Decidi di esplorare alla cieca, ma è estremamente pericoloso." << std::endl;
    		pausa(); 
    		std::cout << "1. Prosegui con cautela." << std::endl;
    		std::cout << "2. Torna indietro." << std::endl;
    		std::cout << "3. Cerca una parete da seguire." << std::endl;
    		std::cout << "Seleziona un'opzione: ";
    		std::cin >> sceltaEsplorazione;
    		switch (sceltaEsplorazione) {
			int sceltaFogne;
        		case 1:
				std::cout<<""<<std::endl;
            			std::cout << "Prosegui con cautela." << std::endl;
            			pausa();
				std::cout<<""<<std::endl;
				std::cout<<"Noti che c'è una voce che ti chiama cosa fai?"<<std::endl;
				std::cout<<""<<std::endl;
				std::cout<<"1. Ti avvii verso la cantina."<<std::endl;
				std::cout<<"2. Resti dove sei e preferisci riposarti."<<std::endl;
            			std::cin >> sceltaFogne;
				switch (sceltaFogne){
					case 1:
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Appena scendi giù nella cantina vieni afferrato da qualcuno."<<std::endl;
						std::cout<<""<<std::endl;
						pausa();
						std::cout<<"Il tuo corpo inizia a decomporsi e non riesci a scappare."<<std::endl;
						pausa();
						std::cout<<"Il tuo viaggio termina qui."<<std::endl;
						exit(0);
				}
        		case 2:
				std::cout<<""<<std::endl;
            			std::cout << "Sei tornato indietro." << std::endl;
            			std::cout<<"La nostalgia ti assale e vuoi restare in quella stanza."<<std::endl;
                                std::cout<<""<<std::endl;
                                pausa();
                                std::cout<<""<<std::endl;
                                std::cout<<"Inizi a decomporti per ragioni ignote e la tua fine è inevitabile."<<std::endl;
                                exit(0);
        		case 3:
				std::cout<<""<<std::endl;
            			std::cout << "Hai cercato una parete da seguire." << std::endl;
            			std::cout<<""<<std::endl;
				pausa();
				std::cout<<"Purtroppo il contatto con la parete fa' deteriorare il tuo corpo."<<std::endl;
				std::cout<<""<<std::endl;
				pausa();
				std::cout<<"La decomposizione è inevitabile."<<std::endl;
				exit(0);
        		default:
            			std::cout << "Scelta non valida. Riprova." << std::endl;
            			break;
    		}
    		break;
	}
        default:
             std::cout << "Scelta non valida. Riprova." << std::endl;
             break;
        }
    } while (true); 
}
