#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Név hiba: N_ELEMENTS helyett NELEMENTS
    std::cout << '1-100 ertekek duplazasa' // Syntaxis hiba: " " helyett ' '
    
    for (int i = 0;) // Hibás for-ciklus: ciklusmag rossz.
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++) // Hibás feltétel: "i;" mindig false lesz, így a ciklus soha nem fut le. Helyette "i < N_ELEMENTS;" kellene.
    {
        std::cout << "Ertek:" // Syntaxis hiba: Hiányzó pontosvessző. 
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Hibás inicializáció: "atlag" változót ha != 0, akkor memóriaszemetet kaphat, és azzal az értékkel dolgozhat.

    for (int i = 0; i < N_ELEMENTS, i++) // Hibás elválasztójel: a vessző helyett pontosvesszőt kell használni.
    {
        atlag += b[i] //Syntaxis hiba: Hiányzó pontosvessző. 
    }
    
    atlag /= N_ELEMENTS; // mivel "atlag" egész (int) ezért nem lesz pontos az átlagunk.

    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
