// 2022.12.05_Proyecto021_Historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rafael Flores 
//Historia narrada 

#include <iostream>

int main() {

    int d = 0;
    std::cout << " Hola me llamo Issac Elian Lopez soy de piedras negras, yo fui a un rancho de mi abuelo sobre la carretera Acuna, llegamos un viernes a las 6 de la tarde y la idea era quedarnos hasta el domingo a las 8 de la noche.\n";
    std::cout << "\nDe inmediato cuando llegamos lo primero que hicimos fue....\n(1) Armar las casas de campana.\n(2) Acomodar mi cama dentro de la casa.\n";
    while (d != 1 && d != 2) { std::cin >> d; }
    system("CLS");
    if (d == 1) {
        d = 0;
        std::cout << "Luego de armar las casas de campana y servir Coca - Cola, unos primos se pusieron a preparar la carne y junto con otro primo fuimos a buscar lena a la parte trasera de la casa. ";
        std::cout << "Bebimos, comimos, cantamos y la noche se fue tan rapido y tranquila, sin notarlo nos dieron las 2 de la manana, el frio era mucho y 3 de las 8 personas que estabamos afuera no aguantaron, y se metieron a dormir dentro de la casa del abuelo, yo decidi:\n\n(1) Quedarme afuera platicando y contando historias de terror\n(2) Ir adentro a dormir\n";
        while (d != 1 && d != 2) { std::cin >> d; }
        system("CLS");
        if (d == 1) {
            d = 0;
            std::cout << "Despues de un rato decidimos dormir y un par de horas mas tarde tuve que ir al bano, asi que:\n\n(1) Tome mis lentes y sali.\n(2) Sali sin mis lentes a orinar en un arbol\n";
            while (d != 1 && d != 2) { std::cin >> d; }
            system("CLS");
            if (d == 1) {
                d = 0;
                std::cout << "Cuando termine de orinar, escuche ruidos de cabra y una silueta que corrio por donde yo estaba, asi que:\n(1) Me acerque\n(2) Regrese a la casa a dormir\n";
                while (d != 1 && d != 2) { std::cin >> d; }
                system("CLS");
                if (d == 1) {
                    d = 0;
                    std::cout << "Solo para darme cuenta que ERA UNA CABRA EN UN COLUMPIO, YO QUEDE HORRORIZADO ASI QUE:\n(1) Desperte a los primos con la excusa de que el abuelo se sentia mal\n(2) Le hable a la cabra\n";
                    while (d != 1 && d != 2) { std::cin >> d; }
                    system("CLS");
                    if (d == 1) {
                        d = 0;
                        std::cout << "Nos reunimos y yo quede TRAUMADO DE POR VIDA, no he vuelto a ir al rancho\n\nThe end\n";
                        system("pause");
                    } {if (d == 2)d = 0;  std::cout << "la cabra me respondio con un chiste, nos hicimos compas y ahora tengo una mascota q habla\n\nTHE END (Good ending)";
                    system("exit"); }
                }
                if (d == 2) {
                    std::cout << "Dormi un poco perturbado pero no pasa nada\n\nThe end\n";
                    system("pause");
                }
                if (d == 2) {
                    d = 0;
                    std::cout << "La cabra corrio hacia mi y me conto un chiste, en ese momento yo:\n(1) Me desmaye\n(2) Me rei\n";
                    system("CLS");
                    if (d == 1) {
                        std::cout << "Desperte todo miado a mitad del campo y nadie me creyo lo q paso\n\nTHE END (Bad ending)";
                        system("pause");
                    }
                    if (d == 2) {
                        std::cout << "Nos hicimos compas y ahora tengo una mascota q habla\n\nTHE END (Good ending)";
                        system("pause");
                    }
                }
            }
            if(d == 2){
                std::cout << "Escuche ruidos de cabra creo que era mi primo, no vi bien por no traer lentes, asi que solo regrese\n\nTHE END\n";
                
            }
        }
        else if (d == 2) {
            d = 0;
            std::cout << "Dormi adentro y escuche ruidos, pero no me importo la vrd\n\nTHE END";
            system("pause");
        }
    }
    else if(d == 2) {
            d = 0;
            std::cout << "Luego de acomodar mi cama y poner servirnos unos refrescos, unos primos se pusieron a preparar la carne y junto con otro primo fuimos a buscar lena a la parte trasera de la casa, yo\n(1) Comimos carne y bebimos\n(2)Decidi no traer cerveza\n";
            while (d != 1 && d != 2) { std::cin >> d; }
            system("CLS");
            if (d == 1) {
                std::cout << "Comi tanto que me quede muy dormido y tuve pesadillas\n\nThe END\n";
                    system("pause");
            }
            if (d == 2) {
                d = 0;

                std::cout << "Despues de asar la carne decidimos no beber y nos fuimos a dormir \n";
                std::cout << "Me dieron ganas de ir al bano pero yo:\n(1) Me levante al bano\n(2) Decidi ignorarlo y seguir durmiendo\n";
                while (d != 1 && d != 2) { std::cin >> d; }
                system("CLS");
                if (d == 1) {
                    std::cout << "Escuche ruidos de cabra y sali a investigar, despues vi una cabra en un columpio, ahora no QUIERO EXISTIR MAS\n\nTHE END\n";
                    system("pause");
                }
                if (d == 2) {
                    d = 0;
                    std::cout << "A la manana siguiente todo estaba bien :like\n\nThe End (good ending)\n";
                    system("pause");
                }
            }
        }
}