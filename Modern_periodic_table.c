#include<stdio.h>

void displayElementInfo(int atomicNumber);
void displayElementbriefexplanation(int atomicNumber);

int main() {
    int n, m, a, Exit, Exi;

    printf("\033[1;35mWelcome to Modern Periodic Table\n\n");
A:
    printf("\033[1;36m\n\n> Enter 1 to know about an element\n\n");
    printf("> Enter 2 to close the Periodic Table\n\n");

    printf("ENTER\n");
    scanf("%d", &n);

    if (n == 1) {
        printf("\033[1;35m>Press 3 to search the element by Atomic Number\n\n");
        printf("> Press 4 to know the brief explanation of an element by Atomic Number\n\n");
        printf("> For going back press 5\n\n");
        printf("ENTER\n");
        scanf("%d", &m);

        if (m == 3) {
            printf("\033[1;35mEnter the Atomic Number of the element to be searched : \n\n");
            scanf("%d", &a);

            displayElementInfo(a);

            goto A;
        } else if (m == 5) {
            printf("\033[1;33m\n\nGoing Back.....\n\n");
            goto A;
        } else if (m==4){
            printf("Enter the Atomic Number of the element whose brief explanation to be searched : \n\n");
            scanf("%d", &a);
            displayElementbriefexplanation(a);
goto A;
        }
        else {
            printf(" \033[1;31mInvalid command !!\033[0m\n");

            goto A;

        }
     } else if (n == 2) {
        printf("Do you want to exit? (Yes/no)\n");
        printf("> Press 6 for Yes\n\n");
        printf("> Press 7 for No\n\n");
        printf("ENTER\n");
        scanf("%d", &Exit);

        if (Exit == 6) {
            printf("Are you sure, you want to close the periodic table? (Yes/No)\n\n");
            printf("> Press 4 for Yes\n\n");
            printf("> Press 5 for No\n\n");
            printf("ENTER\n");

            scanf("%d", &Exi);

            if (Exi == 5) {
                printf("Periodic table has not closed, and you can continue to learn more elements\n\n");
                goto A;
            } else if (Exi == 4) {
                printf("The Periodic Table has closed\n");
            } else {
                printf("\033[1;31m\n\ninvalid command\n\n\033[0m");
                goto A;
            }

        } else if (Exit == 7) {
            goto A;
        } else {
            printf("\033[1;31m\n\nInvalid Command\n\n\033[0m");
            goto A;
        }
    } else {
        printf("\033[1;31m\n\nInvalid Command\n\n\033[0m");
        goto A;
    }
    return 0;
}

void displayElementInfo(int atomicNumber) {
    switch (atomicNumber) {
        case 1:
            printf("\033[1;34mName : Hydrogen\n");
            printf("\033[1;34mSymbol : H\n");
            printf("\033[1;34mAtomic Number : 1\n");
            printf("\033[1;34mAtomic Mass : 1.00784u\n");
            printf("\033[1;34mElectronic Configuration : 1s^1\n");
            printf("\033[1;34mDiscovered by Henry Cavendish in 1766\n\n");
            break;
        case 2:
            printf("\033[1;34mName : Helium\n");
            printf("\033[1;34mSymbol : He\n");
            printf("\033[1;34mAtomic Number : 2\n");
            printf("\033[1;34mAtomic Mass : 4.002602u\n");
            printf("\033[1;34mElectronic Configuration : 1s^2\n");
            printf("\033[1;34mDiscovered  by Pierre Janssen, Norman Lockyer in 1868 \n\n");
            break;
        case 3:
                    printf("\033[1;34mName : Lithium\n");
                    printf("\033[1;34mSymbol : Li\n");
                    printf("\033[1;34mAtomic Number : 3\n");
                    printf("\033[1;34mAtomic Mass : 6.941u\n");
                    printf("\033[1;34mElectronic Configuration :  1s²2s¹\n");
                    printf("\033[1;34mDiscovered  by  Johan August Arfwedson in 1817 \n\n");
                   
            break;
        case 4:
                    printf("\033[1;34mName : Beryllium\n");
                    printf("\033[1;34mSymbol : Be\n");
                    printf("\033[1;34mAtomic Number : 4\n");
                    printf("\033[1;34mAtomic Mass : 9.012182 u\n");
                    printf("\033[1;34mElectronic Configuration : [He] 2s²\n");
                    printf("\033[1;34mDiscovered  by Louis Nicolas Vauquelin in 1797 \n\n");
                   break;
        case 5:
                    printf("\033[1;34mName : Boron\n");
                    printf("\033[1;34mSymbol : B\n");
                    printf("\033[1;34mAtomic Number : 5\n");
                    printf("\033[1;34mAtomic Mass : 10.811 u\n");
                    printf("\033[1;34mElectronic Configuration :  [He] 2s²2p¹\n");
                    printf("\033[1;34mDiscovered  by Joseph Louis Gay-Lussac, Humphry Davy, Louis Jacques Thénard in 1808 \n\n");
                   
        break;
        case 6:
                    printf("\033[1;34mName : Carbon\n");
                    printf("\033[1;34mSymbol : C\n");
                    printf("\033[1;34mAtomic Number : 6\n");
                    printf("\033[1;34mAtomic Mass : 12.011 u\n");
                    printf("\033[1;34mElectronic Configuration : [He] 2s22p2\n");
                    printf("\033[1;34mDiscovered  by H. Moissan in 1886 \n\n");

        break;
        case 7:
                    printf("\033[1;34mName : Nitrogen\n");
                    printf("\033[1;34mSymbol : N\n");
                    printf("\033[1;34mAtomic Number : 7\n");
                    printf("\033[1;34mAtomic Mass : 14.0067u\n");
                    printf("\033[1;34mElectronic Configuration :  [He] 2s22p3\n");
                    printf("\033[1;34mDiscovered  by Daniel Rutherford in 1772 \n\n");

        break;
        case 8:
                    printf("\033[1;34mName : oxygen\n");
                    printf("\033[1;34mSymbol : O\n");
                    printf("\033[1;34mAtomic Number : 8\n");
                    printf("\033[1;34mAtomic Mass :15.999u\n");
                    printf("\033[1;34mElectronic Configuration : [He] 2s²2p⁴\n");
                    printf("\033[1;34mDiscovered  by  Joseph Priestley, Antoine Lavoisier, Carl Wilhelm Scheele in 1774 \n\n");

        break;
        case 9:
                    printf("\033[1;34mName : Fluorine\n");
                    printf("\033[1;34mSymbol : F\n");
                    printf("\033[1;34mAtomic Number : 9\n");
                    printf("\033[1;34mAtomic Mass : 18.998403 u\n");
                    printf("\033[1;34mElectronic Configuration : [He] 2s²2p⁵\n");
                    printf("\033[1;34mDiscovered  by Karl W. Scheele  in 1886 \n\n");
        break;

        case 10:
                    printf("\033[1;34mName : Neon\n");
                    printf("\033[1;34mSymbol : Ne\n");
                    printf("\033[1;34mAtomic Number : 10\n");
                    printf("\033[1;34mAtomic Mass : 20.1797 u\n");
                    printf("\033[1;34mElectronic Configuration :  [He] 2s²2p⁶\n");
                    printf("\033[1;34mDiscovered  by  William Ramsay, Morris Travers in 1898 \n\n");
        break;
        case 11:

                    printf("\033[1;34mName : Sodium\n");
                    printf("\033[1;34mSymbol : Na\n");
                    printf("\033[1;34mAtomic Number : 11\n");
                    printf("\033[1;34mAtomic Mass : 22.989769 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s¹\n");
                    printf("\033[1;34mDiscovered  by Humphry Davy in 1807 \n\n");
        break;
        case 12:

                    printf("\033[1;34mName : Magnesium\n");
                    printf("\033[1;34mSymbol : Mg\n");
                    printf("\033[1;34mAtomic Number : 12\n");
                    printf("\033[1;34mAtomic Mass : 24.305 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s2\n");
                    printf("\033[1;34mDiscovered  by   Sir Humphry Davy in 1808 \n\n");
        break;
        case 13:

                    printf("\033[1;34mName : Aluminum\n");
                    printf("\033[1;34mSymbol : Al\n");
                    printf("\033[1;34mAtomic Number : 13\n");
                    printf("\033[1;34mAtomic Mass : 26.981539 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s²3p¹\n");
                    printf("\033[1;34mDiscovered  by  Hans Christian Ørsted in 1825 \n\n");
        break;
        case 14:

                    printf("\033[1;34mName : Silicon\n");
                    printf("\033[1;34mSymbol : Si\n");
                    printf("\033[1;34mAtomic Number : 14\n");
                    printf("\033[1;34mAtomic Mass : 28.0855 u\n");
                    printf("\033[1;34mElectronic Configuration : [Ne] 3s²3p²\n");
                    printf("\033[1;34mDiscovered  by Jöns Jacob Berzelius in 1824 \n\n");
        break;
        case 15:

                    printf("\033[1;34mName : Phosphorus\n");
                    printf("\033[1;34mSymbol : P\n");
                    printf("\033[1;34mAtomic Number : 15\n");
                    printf("\033[1;34mAtomic Mass : 30.973762 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s²3p³\n");
                    printf("\033[1;34mDiscovered  by Hennig Brandt in 1669 \n\n");
        break;
        case 16:

                    printf("\033[1;34mName : Sulfur\n");
                    printf("\033[1;34mSymbol : S\n");
                    printf("\033[1;34mAtomic Number : 16\n");
                    printf("\033[1;34mAtomic Mass : 32.065 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s²3p⁴\n");
                    printf("\033[1;34mDiscovered  by  Antoine Lavoisier in 1777 \n\n");
        break;
        case 17:

                    printf("\033[1;34mName : Chlorine\n");
                    printf("\033[1;34mSymbol : Cl\n");
                    printf("\033[1;34mAtomic Number : 17\n");
                    printf("\033[1;34mAtomic Mass : 35.453 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s²3p⁵\n");
                    printf("\033[1;34mDiscovered  by Carl Wilhelm Scheele in 1774 \n\n");
        break;
        case 18:

                    printf("\033[1;34mName : Argon\n");
                    printf("\033[1;34mSymbol : Ar\n");
                    printf("\033[1;34mAtomic Number : 18\n");
                    printf("\033[1;34mAtomic Mass :  39.948 u\n");
                    printf("\033[1;34mElectronic Configuration :   [Ne] 3s²3p⁶\n");
                    printf("\033[1;34mDiscovered  by Sir William Ramsay and an English chemist, Lord Rayleigh in 1894 \n\n");
        break;
        case 19:

                  
                    printf("\033[1;34mName : Potassium\n");
                    printf("\033[1;34mSymbol : K\n");
                    printf("\033[1;34mAtomic Number : 19\n");
                    printf("\033[1;34mAtomic Mass : 39.0983 u\n");
                    printf("\033[1;34mElectronic Configuration :   [Ar] 4s¹\n");
                    printf("\033[1;34mDiscovered  by  Sir Humphry Davy in 1807 \n\n");
        break;
        case 20:

                    printf("\033[1;34mName : Calcium\n");
                    printf("\033[1;34mSymbol : Ca\n");
                    printf("\033[1;34mAtomic Number : 20\n");
                    printf("\033[1;34mAtomic Mass : 40.078 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ar] 4s²\n");
                    printf("\033[1;34mDiscovered  by  Sir Humphry Davy in 1808  \n\n");
        break;
         case 21:
            printf("\033[1;34mName : Scandium\n");
            printf("\033[1;34mSymbol : Sc\n");
            printf("\033[1;34mAtomic Number : 21\n");
            printf("\033[1;34mAtomic Mass :	44.95591 u\n");
            printf("\033[1;34mElectronic Configuration : [Ar] 4s²3d¹\n");
            printf("\033[1;34mDiscovered by Lars Fredrik Nilson, Per Teodor Clev in 1879\n\n");
            break;
        case 22:
            printf("\033[1;34mName : Titanium\n");
            printf("\033[1;34mSymbol : Ti\n");
            printf("\033[1;34mAtomic Number : 22\n");
            printf("\033[1;34mAtomic Mass : 47.867 u u\n");
            printf("\033[1;34mElectronic Configuration : [Ar] 3d²4s²\n");
            printf("\033[1;34mDiscovered  by  William Grego in 1791 \n\n");
            break;
        case 23:
                    printf("\033[1;34mName : Vanadium\n");
                    printf("\033[1;34mSymbol : V\n");
                    printf("\033[1;34mAtomic Number : 23\n");
                    printf("\033[1;34mAtomic Mass : 50.9415 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ar] 3d³4s²\n");
                    printf("\033[1;34mDiscovered  by Andrés Manuel del Río in 1801 \n\n");
                   
            break;
        case 24:
                    printf("\033[1;34mName : Chromium\n");
                    printf("\033[1;34mSymbol : Cr\n");
                    printf("\033[1;34mAtomic Number : 24\n");
                    printf("\033[1;34mAtomic Mass :51.9961 u \n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d⁵4s¹\n");
                    printf("\033[1;34mDiscovered  by Louis Nicolas Vauqueli in 1797 \n\n");
                   break;
        case 25:
                    printf("\033[1;34mName : Manganese\n");
                    printf("\033[1;34mSymbol : Mn\n");
                    printf("\033[1;34mAtomic Number : 25\n");
                    printf("\033[1;34mAtomic Mass :  54.938044 u\n");
                    printf("\033[1;34mElectronic Configuration :   [Ar] 3d54s2\n");
                    printf("\033[1;34mdiscovered by the Swedish pharmacist and chemist Carl-Wilhelm Scheele in 1774 \n\n");
                   
        break;
        case 26:
                    printf("\033[1;34mName : Iron\n");
                    printf("\033[1;34mSymbol : Fe\n");
                    printf("\033[1;34mAtomic Number : 26\n");
                    printf("\033[1;34mAtomic Mass :  55.845 u\n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d⁶4s²\n");
                    printf("\033[1;34mArcheologists believe that iron was discovered by the Hittites of ancient Egypt somewhere between 5000 and 3000 BCE \n\n");

        break;
        case 27:
                    printf("\033[1;34mName : Cobalt\n");
                    printf("\033[1;34mSymbol : Co\n");
                    printf("\033[1;34mAtomic Number : 27\n");
                    printf("\033[1;34mAtomic Mass : 58.933195 \n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d⁷4s²\n");
                    printf("\033[1;34mDiscovered  by Georg Brandt in 1739 \n\n");

        break;
        case 28:
                    printf("\033[1;34mName : Nickel\n");
                    printf("\033[1;34mSymbol : Ni\n");
                    printf("\033[1;34mAtomic Number : 28\n");
                    printf("\033[1;34mAtomic Mass : 58.6934u\n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d⁸4s²\n");
                    printf("\033[1;34mDiscovered  by Axel Fredrik Cronstedt in 1751 \n\n");

        break;
        case 29:
                    printf("\033[1;34mName : Copper\n");
                    printf("\033[1;34mSymbol : Cu\n");
                    printf("\033[1;34mAtomic Number : 29\n");
                    printf("\033[1;34mAtomic Mass : 63.546 u\n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d¹⁰4s¹\n");
                    printf("\033[1;34mDiscovered in 9000 BC\n\n");
        break;

        case 30:
                    printf("\033[1;34mName : Zinc\n");
                    printf("\033[1;34mSymbol : Zn\n");
                    printf("\033[1;34mAtomic Number : 30\n");
                    printf("\033[1;34mAtomic Mass : 65.38 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ar] 3d¹⁰4s²\n");
                    printf("\033[1;34mDiscovered  by  Andreas Marggraf in 1746 \n\n");
        break;
        case 31:

                    printf("\033[1;34mName : Gallium\n");
                    printf("\033[1;34m\033[1;34mSymbol : Ga\n");
                    printf("\033[1;34mAtomic Number : 31\n");
                    printf("\033[1;34mAtomic Mass :  69.723 u\n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d¹⁰4s²4p¹\n");
                    printf("\033[1;34mDiscovered  by Paul-Émile Lecoq de Boisbaudran in 1875 \n\n");
        break;
        case 32:

                    printf("\033[1;34mName :  Germanium\n");
                    printf("\033[1;34mSymbol : Ge\n");
                    printf("\033[1;34mAtomic Number : 32\n");
                    printf("\033[1;34mAtomic Mass : 72.64 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ar] 3d¹⁰4s²4p²\n");
                    printf("\033[1;34mDiscovered  by Clemens Winkler in 1886 \n\n");
        break;
        case 33:

                    printf("\033[1;34mName : Arsenic\n");
                    printf("\033[1;34mSymbol : As\n");
                    printf("\033[1;34mAtomic Number : 33\n");
                    printf("\033[1;34mAtomic Mass : 26.981539 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ne] 3s²3p¹\n");
                    printf("\033[1;34mDiscovered  by  Hans Christian Ørsted in 1825 \n\n");
        break;
        case 34:

                    printf("\033[1;34mName : Selenium\n");
                    printf("\033[1;34mSymbol : Se\n");
                    printf("\033[1;34mAtomic Number : 34\n");
                    printf("\033[1;34mAtomic Mass :  78.96 u\n");
                    printf("\033[1;34mElectronic Configuration : [Ar] 3d10 4s2 4p4\n");
                    printf("\033[1;34mDiscovered  by Jöns Jacob Berzelius in 1817 \n\n");
        break;
        case 35:

                    printf("\033[1;34mName : Bromine\n");
                    printf("\033[1;34mSymbol : Br\n");
                    printf("\033[1;34mAtomic Number : 35\n");
                    printf("\033[1;34mAtomic Mass : 79.904 u\n");
                    printf("\033[1;34mElectronic Configuration :   [Ar] 3d¹⁰4s²4p⁵\n");
                    printf("\033[1;34mDiscovered  by Carl Jacob Löwi & Antoine Balard in 1825 and 1826 \n\n");
        break;
        case 36:

                    printf("\033[1;34mName : Krypton\n");
                    printf("\033[1;34mSymbol : Kr\n");
                    printf("\033[1;34mAtomic Number : 36\n");
                    printf("\033[1;34mAtomic Mass : 83.798 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Ar] 3d¹⁰4s²4p⁶\n");
                    printf("\033[1;34mDiscovered  by Sir William Ramsay and English chemist Morris Travers discovered krypton on May 30, 1898\n\n");
        break;
        case 37:

                    printf("\033[1;34mName : Rubidium\n");
                    printf("\033[1;34mSymbol : Rb\n");
                    printf("\033[1;34mAtomic Number : 37\n");
                    printf("\033[1;34mAtomic Mass : 85.4678 u\n");
                    printf("\033[1;34mElectronic Configuration : [Kr] 5s¹\n");
                    printf("\033[1;34mDiscovered  by  Gustav Kirchhoff, Robert Bunsen in 1898\n\n");
        break;
        case 38:

                    printf("\033[1;34mName : strontium\n");
                    printf("\033[1;34mSymbol : Sr\n");
                    printf("\033[1;34mAtomic Number : 38\n");
                    printf("\033[1;34mAtomic Mass :  87.62 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Kr] 5s2\n");
                    printf("\033[1;34mDiscovered  by Adair Crawford, an Irish chemist, in 1790\n\n");
        break;
        case 39:

                  
                    printf("\033[1;34mName : Yttrium\n");
                    printf("\033[1;34mSymbol : Y\n");
                    printf("\033[1;34mAtomic Number : 39\n");
                    printf("\033[1;34mAtomic Mass : 88.90585 u\n");
                    printf("\033[1;34mElectronic Configuration :  [Kr] 4d1 5s2\n");
                    printf("\033[1;34mDiscovered  by  Johan Gadolin in 1794 \n\n");
        break;
        case 40:

                    printf("\033[1;34mName : Zirconium\n");
                    printf("\033[1;34mSymbol : Zr\n");
                    printf("\033[1;34mAtomic Number : 40\n");
                    printf("\033[1;34mAtomic Mass : 91.22u\n");
                    printf("\033[1;34mElectronic Configuration : [Kr] 4d²5s²\n");
                    printf("\033[1;34mGerman chemist Martin Heinrich Klaproth discovered zirconium in 1789  \n\n");
        break;
           default:
            printf("\033[1;31mElement information not available for Atomic Number %d\n\033[0m", atomicNumber);
            break;
    }
    }
    void displayElementbriefexplanation(int atomicNumber){
        switch(atomicNumber){
 case 1:
            printf("\033[1;32m\n\nHydrogen is a chemical element; \n It has symbol H and atomic number 1. It is the lightest element and, at standard conditions, is a gas of diatomic molecules with the formula H2.\n It is colorless, odorless, tasteless, non-toxic, and highly combustible. Hydrogen is the most abundant chemical substance in the universe, constituting roughly 75percent of all normal matter.\n Stars such as the Sun are mainly composed of hydrogen in the plasma state. \nMost of the hydrogen on Earth exists in molecular forms such as water and organic compounds.\n For the most common isotope of hydrogen (symbol 1H) each atom has one proton, one electron, and no neutrons.\033[0m");

            break;
 case 2:
            printf("\033[1;32m\n\nHelium (from Greek: ἥλιος, romanized: helios, lit. 'sun') is a chemical element;\n It has symbol He and atomic number 2. \n It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas and the first in the noble gas group in the periodic table.\n Its boiling point is the lowest among all the elements, and it does not have a melting point at standard pressures. \nIt is the second-lightest and second most abundant element in the observable universe, after hydrogen. \n It is present at about 24Percent of the total elemental mass, which is more than 12 times the mass of all the heavier elements combined.\n Its abundance is similar to this in both the Sun and Jupiter, because of the very high nuclear binding energy (per nucleon) of helium-4, with respect to the next three elements after helium. \nThis helium-4 binding energy also accounts for why it is a product of both nuclear fusion and radioactive decay.\n The most common isotope of helium in the universe is helium-4, the vast majority of which was formed during the Big Bang.\n Large amounts of new helium are created by nuclear fusion of hydrogen in stars.\033[0m");
            break;
 case 3:
           
            printf("\033[1;32m\n\nLithium (from Ancient Greek λίθος (líthos) 'stone') is a chemical element; \n It has symbol Li and atomic number 3.\n It is a soft, silvery-white alkali metal. Under standard conditions, it is the least dense metal and the least dense solid element. \nLike all alkali metals, lithium is highly reactive and flammable, and must be stored in vacuum, inert atmosphere, or inert liquid such as purified kerosene or mineral oil. \nIt exhibits a metallic luster. It corrodes quickly in air to a dull silvery gray, then black tarnish. \nIt does not occur freely in nature, but occurs mainly as pegmatitic minerals, which were once the main source of lithium.\n Due to its solubility as an ion, it is present in ocean water and is commonly obtained from brines.\n Lithium metal is isolated electrolytically from a mixture of lithium chloride and potassium chloride.\n\n The nucleus of the lithium atom verges on instability, since the two stable lithium isotopes found in nature have among the lowest binding energies per nucleon of all stable nuclides. \nBecause of its relative nuclear instability, lithium is less common in the solar system than 25 of the first 32 chemical elements even though its nuclei are very light: it is an exception to the trend that heavier nuclei are less common. For related reasons, lithium has important uses in nuclear physics. The transmutation of lithium atoms to helium in 1932 was the first fully human-made nuclear reaction, and lithium deuteride serves as a fusion fuel in staged thermonuclear weapons.\033[0m");

            break;
 case 4:

            printf("\033[1;32m\n\nBeryllium is a chemical element; it has symbol Be and atomic number 4. \nIt is a steel-gray, strong, lightweight and brittle alkaline earth metal.\n It is a divalent element that occurs naturally only in combination with other elements to form minerals.\n Gemstones high in beryllium include beryl (aquamarine, emerald, red beryl) and chrysoberyl.\n It is a relatively rare element in the universe, usually occurring as a product of the spallation of larger atomic nuclei that have collided with cosmic rays.\n Within the cores of stars, beryllium is depleted as it is fused into heavier elements.\n Beryllium constitutes about 0.0004 percent by mass of Earth's crust.\n The world's annual beryllium production of 220 tons is usually manufactured by extraction from the mineral beryl, a difficult process because beryllium bonds strongly to oxygen.\033[0m");

            break;
 case 5:
            printf("\033[1;32m\n\nBoron is a chemical element; it has symbol B and atomic number 5.\n In its crystalline form it is a brittle, dark, lustrous metalloid; in its amorphous form it is a brown powder.\n As the lightest element of the boron group it has three valence electrons for forming covalent bonds, resulting in many compounds such as boric acid, the mineral sodium borate, and the ultra-hard crystals of boron carbide and boron nitride.\n Boron is synthesized entirely by cosmic ray spallation and supernovae and not by stellar nucleosynthesis, so it is a low-abundance element in the Solar System and in the Earth's crust.\n It constitutes about 0.001 percent by weight of Earth's crust.\n It is concentrated on Earth by the water-solubility of its more common naturally occurring compounds, the borate minerals.\n These are mined industrially as evaporites, such as borax and kernite. The largest known deposits are in Turkey, the largest producer of boron minerals.\033[0m");
            break;
 case 6:
            printf("\033[1;32m\n\nCarbon (from Latin carbo 'coal') is a chemical element; it has symbol C and atomic number 6. \nIt is nonmetallic and tetravalent—meaning that its atoms are able to form up to four covalent bonds due to its valence shell exhibiting 4 electrons. \nIt belongs to group 14 of the periodic table. \nCarbon makes up about 0.025 percent of Earth's crust.\n Three isotopes occur naturally, 12C and 13C being stable, while 14C is a radionuclide, decaying with a half-life of about 5,730 years.\nCarbon is one of the few elements known since antiquity.\033[0m");
            printf("The atoms of carbon can bond together in diverse ways, resulting in various allotropes of carbon. \nWell-known allotropes include graphite, diamond, amorphous carbon, and fullerenes. \nThe physical properties of carbon vary widely with the allotropic form. For example, graphite is opaque and black, while diamond is highly transparent. Graphite is soft enough to form a streak on paper (hence its name, from the Greek verb 'γράφειν' which means 'to write'), while diamond is the hardest naturally occurring material known. \nGraphite is a good electrical conductor while diamond has a low electrical conductivity. Under normal conditions, diamond, carbon nanotubes, and graphene have the highest thermal conductivities of all known materials. \nAll carbon allotropes are solids under normal conditions, with graphite being the most thermodynamically stable form at standard temperature and pressure.\n They are chemically resistant and require high temperature to react even with oxygen.\n\nThe most common oxidation state of carbon in inorganic compounds is +4, while +2 is found in carbon monoxide and transition metal carbonyl complexes. The largest sources of inorganic carbon are limestones, dolomites and carbon dioxide, but significant quantities occur in organic deposits of coal, peat, oil, and methane clathrates.\033[0m");
            break;
 case 7:
            printf("\033[1;32m\n\nNitrogen is a chemical element; it has symbol N and atomic number 7.\n Nitrogen is a nonmetal and the lightest member of group 15 of the periodic table, often called the pnictogens. \nIt is a common element in the universe, estimated at seventh in total abundance in the Milky Way and the Solar System.\n At standard temperature and pressure, two atoms of the element bond to form N2, a colorless and odorless diatomic gas. \nN2 forms about 78percent of Earth's atmosphere, making it the most abundant uncombined element in air. \nBecause of the volatility of nitrogen compounds, nitrogen is relatively rare in the solid parts of the Earth.\033[0m");

            break;
 case 8:
           printf("\033[1;32m\n\nOxygen is a chemical element; it has symbol O and atomic number 8. It is a member of the chalcogen group in the periodic table, a highly reactive nonmetal, and an oxidizing agent that readily forms oxides with most elements as well as with other compounds.\n Oxygen is Earth's most abundant element, and after hydrogen and helium, it is the third-most abundant element in the universe. At standard temperature and pressure, two atoms of the element bind to form dioxygen, a colorless and odorless diatomic gas with the formula O2. \nDiatomic oxygen gas currently constitutes 20.95percent of the Earth's atmosphere, though this has changed considerably over long periods of time.\nOxygen makes up almost half of the Earth's crust in the form of oxides.All plants, animals, and fungi need oxygen for cellular respiration, which extracts energy by the reaction of oxygen with molecules derived from food and produces carbon dioxide as a waste product.\n In tetrapods breathing brings oxygen into the lungs where gas exchange takes place, carbon dioxide diffuses out of the blood, and oxygen diffuses into the blood. \nThe body's circulatory system transports the oxygen to the cells, where cellular respiration takes place\033[0m");

            break;
 case 9:
             printf("\033[1;32m\n\nFluorine is a chemical element; it has symbol F and atomic number 9. \nIt is the lightest halogen and exists at standard conditions as a highly toxic, pale yellow diatomic gas. As the most electronegative reactive element, it is extremely reactive, as it reacts with all other elements except for the light inert gases.\033[0m");
            break;
 case 10:
             printf("\033[1;32m\n\nNeon is a chemical element; it has symbol Ne and atomic number 10. \n It is the second noble gas in the periodic table.Neon is a colorless, odorless, inert monatomic gas under standard conditions, with about two-thirds the density of air.\n It was discovered along with krypton and xenon in 1898 as one of the three residual rare inert elements remaining in dry air after nitrogen, oxygen, argon and carbon dioxide were removed. \n Neon was the second of these three rare gases to be discovered and was immediately recognized as a new element from its bright red emission spectrum.\n\n The name neon is derived from the Greek word, νέον, neuter singular form of νέος (neos), meaning 'new'. Neon is chemically inert, and no uncharged neon compounds are known.The compounds of neon currently known include ionic molecules, molecules held together by van der Waals forces and clathrat\033[0m");
            break;
 case 11:
            printf("\033[1;32m\n\nSodium is a chemical element; it has symbol Na (from Latin natrium) and atomic number 11. It is a soft, silvery-white, highly reactive metal. Sodium is an alkali metal, being in group 1 of the periodic table. Its only stable isotope is 23Na. The free metal does not occur in nature and must be prepared from compounds. Sodium is the sixth most abundant element in the Earth's crust and exists in numerous minerals such as feldspars, sodalite, and halite (NaCl). Many salts of sodium are highly water-soluble: sodium ions have been leached by the action of water from the Earth's minerals over eons, and thus sodium and chlorine are the most common dissolved elements by weight in the oceans.\033[0m");
            break ;
 case 12:
            printf("\033[1;32m\n\nMagnesium is a chemical element; it has symbol Mg and atomic number 12. It is a shiny gray metal having a low density, low melting point and high chemical reactivity. Like the other alkaline earth metals (group 2 of the periodic table) it occurs naturally only in combination with other elements and it almost always has an oxidation state of +2. It reacts readily with air to form a thin passivation coating of magnesium oxide that inhibits further corrosion of the metal. The free metal burns with a brilliant-white light. The metal is obtained mainly by electrolysis of magnesium salts obtained from brine. It is less dense than aluminium and is used primarily as a component in strong and lightweight alloys that contain aluminium.\033[0m");
            break ;

 case 13:
            printf("\033[1;32m\n\nAluminium (aluminum in North American English) is a chemical element; it has symbol Al and atomic number 13. Aluminium has a density lower than those of other common metals; about one-third that of steel. It has a great affinity towards oxygen, forming a protective layer of oxide on the surface when exposed to air. Aluminium visually resembles silver, both in its color and in its great ability to reflect light. It is soft, nonmagnetic and ductile. It has one stable isotope: 27Al, which is highly abundant, making aluminium the twelfth-most common element in the universe. The radioactivity of 26Al is used in radiometric dating.\033[0m");
            break ;
 case 14:
            printf("\033[1;32m\n\nSilicon is a chemical element; it has symbol Si and atomic number 14. It is a hard, brittle crystalline solid with a blue-grey metallic luster, and is a tetravalent metalloid and semiconductor. It is a member of group 14 in the periodic table: carbon is above it; and germanium, tin, lead, and flerovium are below it. It is relatively unreactive.\n\n\033[0m");
            printf("Because of its high chemical affinity for oxygen, it was not until 1823 that Jöns Jakob Berzelius was first able to prepare it and characterize it in pure form. Its oxides form a family of anions known as silicates. Its melting and boiling points of 1414 °C and 3265 °C, respectively, are the second highest among all the metalloids and nonmetals, being surpassed only by boron.\033[0m");
            break ;

 case 15:
            printf("\033[1;32m\n\nPhosphorus is a chemical element; it has symbol P and atomic number 15. Elemental phosphorus exists in two major forms, white phosphorus and red phosphorus, but because it is highly reactive, phosphorus is never found as a free element on Earth. It has a concentration in the Earth's crust of about one gram per kilogram (compare copper at about 0.06 grams). In minerals, phosphorus generally occurs as phosphate.\n\n\033[0m");
            printf("Elemental phosphorus was first isolated as white phosphorus in 1669. In white phosphorus, phosphorus atoms are arranged in groups of 4, written as P4. White phosphorus emits a faint glow when exposed to oxygen hence the name, taken from Greek mythology, Φωσφόρος meaning 'light-bearer' (Latin Lucifer), referring to the 'Morning Star', the planet Venus. The term phosphorescence, meaning glow after illumination, derives from this property of phosphorus, although the word has since been used for a different physical process that produces a glow. The glow of phosphorus is caused by oxidation of the white (but not red) phosphorus — a process now called chemiluminescence. Phosphorus is classified as a pnictogen, together with nitrogen, arsenic, antimony, bismuth, and moscovium.\033[0m");
            break ;

 case 16:
            printf("\033[1;32m\n\nSulfur (also spelled sulphur in British English) is a chemical element; it has symbol S and atomic number 16. It is abundant, multivalent and nonmetallic. Under normal conditions, sulfur atoms form cyclic octatomic molecules with the chemical formula S8. Elemental sulfur is a bright yellow, crystalline solid at room temperature.\n\n\033[0m");
            printf("\033[1;32mSulfur is the tenth most abundant element by mass in the universe and the fifth most abundant on Earth. Though sometimes found in pure, native form, sulfur on Earth usually occurs as sulfide and sulfate minerals. Being abundant in native form, sulfur was known in ancient times, being mentioned for its uses in ancient India, ancient Greece, China, and ancient Egypt. Historically and in literature sulfur is also called brimstone, which means 'burning stone'.Today, almost all elemental sulfur is produced as a byproduct of removing sulfur-containing contaminants from natural gas and petroleum.[7][8] The greatest commercial use of the element is the production of sulfuric acid for sulfate and phosphate fertilizers, and other chemical processes. Sulfur is used in matches, insecticides, and fungicides. Many sulfur compounds are odoriferous, and the smells of odorized natural gas, skunk scent, bad breath, grapefruit, and garlic are due to organosulfur compounds. Hydrogen sulfide gives the characteristic odor to rotting eggs and other biological processes.\n\n\033[0m");
            break ;

 case 17:
            printf("\033[1;32m\n\nChlorine is a chemical element; it has symbol Cl and atomic number 17. The second-lightest of the halogens, it appears between fluorine and bromine in the periodic table and its properties are mostly intermediate between them. Chlorine is a yellow-green gas at room temperature. It is an extremely reactive element and a strong oxidising agent: among the elements, it has the highest electron affinity and the third-highest electronegativity on the revised Pauling scale, behind only oxygen and fluorine.\n\n\033[0m");
            printf("\033[1;32mChlorine played an important role in the experiments conducted by medieval alchemists, which commonly involved the heating of chloride salts like ammonium chloride (sal ammoniac) and sodium chloride (common salt), producing various chemical substances containing chlorine such as hydrogen chloride, mercury(II) chloride (corrosive sublimate), and aqua regia. However, the nature of free chlorine gas as a separate substance was only recognised around 1630 by Jan Baptist van Helmont. Carl Wilhelm Scheele wrote a description of chlorine gas in 1774, supposing it to be an oxide of a new element. In 1809, chemists suggested that the gas might be a pure element, and this was confirmed by Sir Humphry Davy in 1810, who named it after the Ancient Greek χλωρός (khlōrós, 'pale green) because of its colour.\033[0m");
            break ;

 case 18:
            printf("\033[1;32m\n\nArgon is a chemical element; it has symbol Ar and atomic number 18. It is in group 18 of the periodic table and is a noble gas. Argon is the third-most abundant gas in Earth's atmosphere, at 0.934percent (9340 ppmv). It is more than twice as abundant as water vapor (which averages about 4000 ppmv, but varies greatly), 23 times as abundant as carbon dioxide (400 ppmv), and more than 500 times as abundant as neon (18 ppmv). Argon is the most abundant noble gas in Earth's crust, comprising 0.00015percent of the crust.\033[0m");
            break ;

 case 19:
            printf("\033[1;32m\n\nPotassium is a chemical element; it has symbol K (from Neo-Latin kalium) and atomic number 19. \nIt is a silvery white metal that is soft enough to easily cut with a knife. Potassium metal reacts rapidly with atmospheric oxygen to form flaky white potassium peroxide in only seconds of exposure.\n It was first isolated from potash, the ashes of plants, from which its name derives. In the periodic table, potassium is one of the alkali metals, all of which have a single valence electron in the outer electron shell, which is easily removed to create an ion with a positive charge (which combines with anions to form salts). \nIn nature, potassium occurs only in ionic salts. Elemental potassium reacts vigorously with water, generating sufficient heat to ignite hydrogen emitted in the reaction, and burning with a lilac-colored flame. \nIt is found dissolved in seawater (which is 0.04percent potassium by weight), and occurs in many minerals such as orthoclase, a common constituent of granites and other igneous rocks.\n\033[0m");
            break ;

 case 20:
            printf("\033[1;32m\n\nCalcium is a chemical element; it has symbol Ca and atomic number 20. As an alkaline earth metal,\n calcium is a reactive metal that forms a dark oxide-nitride layer when exposed to air.\n Its physical and chemical properties are most similar to its heavier homologues strontium and barium. It is the fifth most abundant element in Earth's crust, and the third most abundant metal, after iron and aluminium.\n The most common calcium compound on Earth is calcium carbonate, found in limestone and the fossilised remnants of early sea life; gypsum, anhydrite, fluorite, and apatite are also sources of calcium. The name derives from Latin calx 'lime', which was obtained from heating limestone.\n\033[0m");
            break ;

 case 21:
            printf("\033[1;32m\n\nScandium is a chemical element; it has symbol Sc and atomic number 21. It is a silvery-white metallic d-block element. Historically, it has been classified as a rare-earth element, together with yttrium and the lanthanides. It was discovered in 1879 by spectral analysis of the minerals euxenite and gadolinite from Scandinavia.\n\n\033[0m");
            printf("\033[1;32mScandium is present in most of the deposits of rare-earth and uranium compounds, but it is extracted from these ores in only a few mines worldwide. Because of the low availability and difficulties in the preparation of metallic scandium, which was first done in 1937, applications for scandium were not developed until the 1970s, when the positive effects of scandium on aluminium alloys were discovered. To this day, its use in such alloys remains its only major application. The global trade of scandium oxide is 15to20 tonnes per year.\033[0m");
            break ;

 case 22:
            printf("\033[1;32m\n\nTitanium is a chemical element; it has symbol Ti and atomic number 22. Found in nature only as an oxide, it can be reduced to produce a lustrous transition metal with a silver color, low density, and high strength, resistant to corrosion in sea water, aqua regia, and chlorine.\n\033[0m");
            printf("\033[1;32mPhysical properties\n\nAs a metal, titanium is recognized for its high strength-to-weight ratio.\nIt is a strong metal with low density that is quite ductile (especially in an oxygen-free environment), lustrous, and metallic-white in color.\n The relatively high melting point (1,668 °C or 3,034 °F) makes it useful as a refractory metal. It is paramagnetic and has fairly low electrical and thermal conductivity compared to other metals.\nTitanium is superconducting when cooled below its critical temperature of 0.49 K.\nCommercially pure (99.2percent pure) grades of titanium have ultimate tensile strength of about 434 MPa (63,000 psi), equal to that of common, low-grade steel alloys, but are less dense.\nTitanium is 60percent denser than aluminium, but more than twice as strong as the most commonly used 6061-T6 aluminium alloy.\n Certain titanium alloys (e.g., Beta C) achieve tensile strengths of over 1,400 MPa (200,000 psi) \n.However, titanium loses strength when heated above 430 °C (806 °F).\033[0m");
            break ;
 case 23:
            printf("\033[1;32m\n\nVanadium is a chemical element; it has symbol V and atomic number 23. It is a hard, silvery-grey, malleable transition metal. The elemental metal is rarely found in nature, but once isolated artificially, the formation of an oxide layer (passivation) somewhat stabilizes the free metal against further oxidation.\033[0m");
            break ;

 case 24:
            printf("\033[1;32m\n\nChromium is a chemical element; it has symbol Cr and atomic number 24. It is the first element in group 6. It is a steely-grey, lustrous, hard, and brittle transition metal.\n\n\033[0m");
            printf("\033[1;32mChromium metal is valued for its high corrosion resistance and hardness.\n A major development in steel production was the discovery that steel could be made highly resistant to corrosion and discoloration by adding metallic chromium to form stainless steel. Stainless steel and chrome plating (electroplating with chromium) together comprise 85percent of the commercial use.\n Chromium is also greatly valued as a metal that is able to be highly polished while resisting tarnishing.\n Polished chromium reflects almost 70percent of the visible spectrum, and almost 90percent of infrared light.[6] The name of the element is derived from the Greek word χρῶμα, chrōma, meaning color,because many chromium compounds are intensely colored.\033[0m");
            break ;

 case 25:
            printf("\033[1;32m\n\nManganese is a chemical element; it has symbol Mn and atomic number 25.\n It is a hard, brittle, silvery metal, often found in minerals in combination with iron. Manganese was first isolated in the 1770s.\n Manganese is a transition metal with a multifaceted array of industrial alloy uses, particularly in stainless steels. It improves strength, workability, and resistance to wear. Manganese oxide is used as an oxidising agent; as a rubber additive; and in glass making, fertilisers, and ceramics.\n Manganese sulfate can be used as a fungicide. \nManganese is also an essential human dietary element, important in macronutrient metabolism, bone formation, and free radical defense systems. It is a critical component in dozens of proteins and enzymes. It is found mostly in the bones, but also the liver, kidneys, and brain.\n In the human brain, the manganese is bound to manganese metalloproteins, most notably glutamine synthetase in astrocytes.\n\033[0m");
            break ;

 case 26:
            printf("\033[1;32m\n\nAluminium (aluminum in North American English) is a chemical element; it has symbol Al and atomic number 13.\n Aluminium has a density lower than those of other common metals; about one-third that of steel.\n It has a great affinity towards oxygen, forming a protective layer of oxide on the surface when exposed to air.\n Aluminium visually resembles silver, both in its color and in its great ability to reflect light. It is soft, nonmagnetic and ductile. It has one stable isotope: 27Al, which is highly abundant, making aluminium the twelfth-most common element in the universe.\n The radioactivity of 26Al is used in radiometric dating.\033[0m");
            break ;

 case 27:
            printf("\033[1;32m\n\nCobalt is a chemical element; it has symbol Co and atomic number 27. As with nickel, cobalt is found in the Earth's crust only in a chemically combined form, save for small deposits found in alloys of natural meteoric iron. The free element, produced by reductive smelting, is a hard, lustrous, silvery metal.\n\n\033[0m");
            printf("\033[1;32mCobalt-based blue pigments (cobalt blue) have been used since antiquity for jewelry and paints, and to impart a distinctive blue tint to glass. \nThe color was long thought to be due to the metal bismuth. Miners had long used the name kobold ore (German for goblin ore) for some of the blue pigment-producing minerals. They were so named because they were poor in known metals and gave off poisonous arsenic-containing fumes when smelted.In 1735, such ores were found to be reducible to a new metal (the first discovered since ancient times), which was ultimately named for the kobold.\033[0m");
            break ;

 case 28:
            printf("\033[1;32m\n\nNickel is a chemical element; it has symbol Ni and atomic number 28.\n It is a silvery-white lustrous metal with a slight golden tinge. Nickel is a hard and ductile transition metal. \nPure nickel is chemically reactive, but large pieces are slow to react with air under standard conditions because a passivation layer of nickel oxide forms on the surface that prevents further corrosion.\n Even so, pure native nickel is found in Earth's crust only in tiny amounts, usually in ultramafic rocks,and in the interiors of larger nickel-iron meteorites that were not exposed to oxygen when outside Earth's atmosphere.\n\n\033[0m");
            printf("\033[1;32mMeteoric nickel is found in combination with iron, a reflection of the origin of those elements as major end products of supernova nucleosynthesis. An iron–nickel mixture is thought to compose Earth's outer and inner cores.\033[0m");
            break ;

 case 29:
            printf("\033[1;32m\n\nCopper is a chemical element; it has symbol Cu (from Latin: cuprum) and atomic number 29.\nIt is a soft, malleable, and ductile metal with very high thermal and electrical conductivity.\n A freshly exposed surface of pure copper has a pinkish-orange color. Copper is used as a conductor of heat and electricity, as a building material, and as a constituent of various metal alloys, such as sterling silver used in jewelry, cupronickel used to make marine hardware and coins, and constantan used in strain gauges and thermocouples for temperature measurement.\n\033[0m");
            printf("\033[1;32mCopper is one of the few metals that can occur in nature in a directly usable metallic form (native metals). This led to very early human use in several regions, from c. 8000 BC. Thousands of years later, it was the first metal to be smelted from sulfide ores, c. 5000 BC; the first metal to be cast into a shape in a mold, c. 4000 BC; and the first metal to be purposely alloyed with another metal, tin, to create bronze, c. 3500 BC.\033[0m");
            break ;

 case 30:
            printf("\033[1;32m\n\nZinc is a chemical element; it has symbol Zn and atomic number 30.\n Zinc is a slightly brittle metal at room temperature and has a shiny-greyish appearance when oxidation is removed.\n It is the first element in group 12 (IIB) of the periodic table. In some respects, zinc is chemically similar to magnesium: both elements exhibit only one normal oxidation state (+2), and the Zn2+ and Mg2+ ions are of similar size.\n Zinc is the 24th most abundant element in Earth's crust and has five stable isotopes.\n The most common zinc ore is sphalerite (zinc blende), a zinc sulfide mineral. The largest workable lodes are in Australia, Asia, and the United States.\n Zinc is refined by froth flotation of the ore, roasting, and final extraction using electricity (electrowinning).\033[0m");
            break ;
 case 31:
            printf("\033[1;32m\n\nGallium is a chemical element; it has symbol Ga and atomic number 31. Discovered by the French chemist Paul-Émile Lecoq de Boisbaudran in 1875, gallium is in group 13 of the periodic table and is similar to the other metals of the group (aluminium, indium, and thallium).\n\n\033[0m");
            printf("\033[1;32mElemental gallium is a relatively soft, silvery metal at standard temperature and pressure. In its liquid state, it becomes silvery white. If enough force is applied, solid gallium may fracture conchoidally. Since its discovery in 1875, gallium has widely been used to make alloys with low melting points. It is also used in semiconductors, as a dopant in semiconductor substrates.\033[0m");
            break ;

 case 32:
            printf("\033[1;32m\n\nGermanium is a chemical element; it has symbol Ge and atomic number 32.\n It is lustrous, hard-brittle, grayish-white and similar in appearance to silicon.\n It is a metalloid in the carbon group that is chemically similar to its group neighbors silicon and tin.\n Like silicon, germanium naturally reacts and forms complexes with oxygen in nature.\n\033[0m");
            printf("\033[1;32mBecause it seldom appears in high concentration, germanium was discovered comparatively late in the discovery of the elements.\n Germanium ranks near fiftieth in relative abundance of the elements in the Earth's crust.\n In 1869, Dmitri Mendeleev predicted its existence and some of its properties from its position on his periodic table, and called the element ekasilicon. In 1886, Clemens Winkler at Freiberg University found the new element, along with silver and sulfur, in the mineral argyrodite.\n Winkler named the element after his country, Germany. Germanium is mined primarily from sphalerite (the primary ore of zinc), though germanium is also recovered commercially from silver, lead, and copper ores.\033[0m");
            break ;
 case 33:
            printf("\033[1;32m\n\nArsenic is a chemical element; it has symbol As and atomic number 33.\n Arsenic occurs in many minerals, usually in combination with sulfur and metals, but also as a pure elemental crystal.\n Arsenic is a metalloid. It has various allotropes, but only the grey form, which has a metallic appearance, is important to industry.\n\033[0m");
            printf("\033[1;32mThe primary use of arsenic is in alloys of lead (for example, in car batteries and ammunition).\n Arsenic is a common n-type dopant in semiconductor electronic devices.\n It is also a component of the III–V compound semiconductor gallium arsenide.\n Arsenic and its compounds, especially the trioxide, are used in the production of pesticides, treated wood products, herbicides, and insecticides.\n These applications are declining with the increasing recognition of the toxicity of arsenic and its compounds.\033[0m");
            break ;

 case 34:
            printf("\033[1;32m\n\nSelenium is a chemical element; it has symbol Se and atomic number 34. It is a nonmetal (more rarely considered a metalloid) with properties that are intermediate between the elements above and below in the periodic table, sulfur and tellurium, and also has similarities to arsenic.\n It seldom occurs in its elemental state or as pure ore compounds in Earth's crust.\n Selenium (from Ancient Greek σελήνη (selḗnē) 'moon') was discovered in 1817 by Jöns Jacob Berzelius, who noted the similarity of the new element to the previously discovered tellurium (named for the Earth).\n\033[0m");
            printf("\033[1;32mSelenium is found in metal sulfide ores, where it partially replaces the sulfur.\n Commercially, selenium is produced as a byproduct in the refining of these ores, most often during production.\n Minerals that are pure selenide or selenate compounds are known but rare.\n The chief commercial uses for selenium today are glassmaking and pigments.\n Selenium is a semiconductor and is used in photocells.\n Applications in electronics, once important, have been mostly replaced with silicon semiconductor devices.\n Selenium is still used in a few types of DC power surge protectors and one type of fluorescent quantum dot.\n\033[0m");
            break ;

 case 35:
            printf("\033[1;32m\n\nBromine is a chemical element; it has symbol Br and atomic number 35.\n It is a volatile red-brown liquid at room temperature that evaporates readily to form a similarly coloured vapour.\n Its properties are intermediate between those of chlorine and iodine. Isolated independently by two chemists, Carl Jacob Löwig (in 1825) and Antoine Jérôme Balard (in 1826), its name was derived from the Ancient Greek βρῶμος (bromos) meaning 'stench', referring to its sharp and pungent smell.\n\033[0m");
            break ;

 case 36:
            printf("\033[1;32m\n\nKrypton (from Ancient Greek: κρυπτός, romanized: kryptos 'the hidden one') is a chemical element; it has symbol Kr and atomic number 36.\n It is a colorless, odorless, tasteless noble gas that occurs in trace amounts in the atmosphere and is often used with other rare gases in fluorescent lamps.\n Krypton is chemically inert.\n\033[0m");
            printf("\033[1;32mKrypton, like the other noble gases, is used in lighting and photography.\n Krypton light has many spectral lines, and krypton plasma is useful in bright, high-powered gas lasers (krypton ion and excimer lasers), each of which resonates and amplifies a single spectral line.\n Krypton fluoride also makes a useful laser medium. From 1960 to 1983, the official definition of meter was based on the wavelength of one spectral line of krypton-86, because of the high power and relative ease of operation of krypton discharge tubes.\033[0m");
            break ;

 case 37:
            printf("\033[1;32m\n\nRubidium is a chemical element; it has symbol Rb and atomic number 37.\n It is a very soft, whitish-grey solid in the alkali metal group, similar to potassium and caesium.\n Rubidium is the first alkali metal in the group to have a density higher than water.\n On Earth, natural rubidium comprises two isotopes: 72percent is a stable isotope 85Rb, and 28percent is slightly radioactive 87Rb, with a half-life of 48.8 billion years—more than three times as long as the estimated age of the universe.\n\033[0m");
            printf("\033[1;32mGerman chemists Robert Bunsen and Gustav Kirchhoff discovered rubidium in 1861 by the newly developed technique, flame spectroscopy.\n The name comes from the Latin word rubidus, meaning deep red, the color of its emission spectrum. Rubidium's compounds have various chemical and electronic applications.\n Rubidium metal is easily vaporized and has a convenient spectral absorption range, making it a frequent target for laser manipulation of atoms.\n Rubidium is not a known nutrient for any living organisms.\n However, rubidium ions have similar properties and the same charge as potassium ions, and are actively taken up and treated by animal cells in similar ways.\033[0m");
            break ;

 case 38:
            printf("\033[1;32m\n\nStrontium is a chemical element; it has symbol Sr and atomic number 38.\n An alkaline earth metal, strontium is a soft silver-white yellowish metallic element that is highly chemically reactive.\n The metal forms a dark oxide layer when it is exposed to air.\n Strontium has physical and chemical properties similar to those of its two vertical neighbors in the periodic table, calcium and barium.\n It occurs naturally mainly in the minerals celestine and strontianite, and is mostly mined from these.\n\033[0m");
            break ;

 case 39:
            printf("\033[1;32m\n\nYttrium is a chemical element; it has symbol Y and atomic number 39.\n It is a silvery-metallic transition metal chemically similar to the lanthanides and has often been classified as a 'rare-earth element'.\n Yttrium is almost always found in combination with lanthanide elements in rare-earth minerals and is never found in nature as a free element.\n 89Y is the only stable isotope and the only isotope found in the Earth's crust.\n\033[0m");
            printf("\033[1;32mThe most important present-day use of yttrium is as a component of phosphors, especially those used in LEDs.\n Historically, it was once widely used in the red phosphors in television set cathode ray tube displays.\n Yttrium is also used in the production of electrodes, electrolytes, electronic filters, lasers, superconductors, various medical applications, and tracing various materials to enhance their properties.\n\nYttrium has no known biological role. Exposure to yttrium compounds can cause lung disease in humans.\033[0m");
            break ;

 case 40:
            printf("\033[1;32m\n\nZirconium is a lustrous, greyish-white, soft, ductile, malleable metal that is solid at room temperature, though it is hard and brittle at lesser purities.\n In powder form, zirconium is highly flammable, but the solid form is much less prone to ignition.\n Zirconium is highly resistant to corrosion by alkalis, acids, salt water and other agents.\n However, it will dissolve in hydrochloric and sulfuric acid, especially when fluorine is present.\nAlloys with zinc are magnetic at less than 35 K.\n\033[0m");
            printf("\033[1;32mThe melting point of zirconium is 1855 °C (3371 °F), and the boiling point is 4409 °C (7968 °F).\n Zirconium has an electronegativity of 1.33 on the Pauling scale.\n Of the elements within the d-block with known electronegativities, zirconium has the fifth lowest electronegativity after hafnium, yttrium, lanthanum, and actinium.\n\033[0m");
            printf("\033[1;32mIsotopes\n\n Naturally occurring zirconium is composed of five isotopes. 90Zr, 91Zr, 92Zr and 94Zr are stable, although 94Zr is predicted to undergo double beta decay (not observed experimentally) with a half-life of more than 1.10×1017 years. 96Zr has a half-life of 2.4×1019 years, and is the longest-lived radioisotope of zirconium. Of these natural isotopes, 90Zr is the most common, making up 51.45percent of all zirconium. 96Zr is the least common, comprising only 2.80percent of zirconium.\n\nFive isotopes of zirconium also exist as metastable isomers: 83mZr, 85mZr, 89mZr, 90m1Zr, 90m2Zr and 91mZr. Of these, 90m2Zr has the shortest half-life at 131 nanoseconds. 89mZr is the longest lived with a half-life of 4.161 minutes\n\n\033[0m");
            break ;
           



            default:
            printf("\033[1;31mElement information not available for Atomic Number %d\n\033[0m\n", atomicNumber);
            break;
            
    }

        }

    

