#include <iostream>
#include "livello215.cpp" // Includi il file livello215.cpp

int main() {
    int scelta;
    
    do {
        // Stampa il menu principale
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Banned Footage" << std::endl;
        std::cout << "2. Ringraziamenti" << std::endl;
        std::cout << "3. Uscita" << std::endl;
        std::cout << "Seleziona un'opzione: ";
        
        // Leggi la scelta dell'utente
        std::cin >> scelta;
        
        // Esegui l'azione corrispondente alla scelta
        switch (scelta) {
            case 1:
                int sceltaMission;
                do {
                    // Stampa il menu "Banned Footage"
                    std::cout << "\nBanned Footage:" << std::endl;
                    std::cout << "1. Livello 215" << std::endl;
                    std::cout<<""<<std::endl;
                    std::cout << "2. Torna indietro" << std::endl;
                    std::cout << "Seleziona una missione o torna indietro: ";
                    std::cout<<""<<std::endl;
		    std::cout<<"In seguito ad alcuni avvenimenti i vari banned footage"<<std::endl;
		    std::cout<<"sono stati corrotti, segnalare ogni anomalia."<<std::endl;
                    // Leggi la scelta dell'utente
                    std::cin >> sceltaMission;
                    
                    // Esegui l'azione corrispondente alla scelta
                    switch (sceltaMission) {
                        case 1:
                            std::cout << "Hai selezionato 'Livello 215' di Banned Footage.\n";
                            eseguiLivello215(); // Chiama la funzione del Livello 215
                            break;
                        // ...
                    }
                    
                } while (sceltaMission != 2); // Continua finché l'utente non torna indietro
                break;
            case 2:
                std::cout << "Hai selezionato 'Ringraziamenti'.\n";
                std::cout<<""<<std::endl;
		std::cout<<"Ringrazio me stesso per non avere niente di meglio da fare."<<std::endl;
		std::cout<<""<<std::endl;
		std::cout<<"                  Jashin L."<<std::endl;
                break;
            case 3:
                std::cout << "Hai selezionato 'Uscita'. Arrivederci!\n";
                break;
            default:
                std::cout << "Scelta non valida. Riprova.\n";
                break;
        }
        
    } while (scelta != 3); // Continua finché l'utente non seleziona 'Uscita'
    
    return 0;
}
