#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Hiba: NELEMENTS helyett N_ELEMENTS kellene, mivel a konstans neve így lett definiálva.
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Hiba: Egyszeres idézőjelek helyett dupla idézőjeleket kell használni a szövegnél. Hiányzik a pontosvessző is a sor végéről.
    for (int i = 0; i < N_ELEMENTS; i++) // Hiba: A ciklus inicializálása és feltétele hibás.
    {
         b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // Hiba: A ciklus feltétele hibás. A ciklus nem fog lefutni.
    {
        std::cout << "Ertek: " << b[i] << std::endl; // Hiba: Hiányzik a pontosvessző a sor végéről, és az érték kiíratása nem teljes.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Hiba: Az 'atlag' változót inicializálni kellene, különben szemétértéket tartalmazhat.
    for (int i = 0; i < N_ELEMENTS; i++) // Hiba: A for ciklus feltételénél vessző van pontosvessző helyett.
    {
        atlag += b[i]; // Hiba: Hiányzik a pontosvessző a sor végéről.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0;
}
