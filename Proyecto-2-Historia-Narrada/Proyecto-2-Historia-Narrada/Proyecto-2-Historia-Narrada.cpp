// Proyecto-2-Historia-Narrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>
#include <string>
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int car;
    int op1;
    int op2;
    int op3;
    int op4;
    int op5;

    do
    {
        std::cout << "Bienvenido Jugador:\n";
        std::cout << "Prepararte estas a punto de vivir una de las mas garndes aventuras\n";
        std::cout << "Eres Programador o Musico?\n";
        std::cout << "(1.- Pogramador) / (2. - Musico)\n";
        std::cin >> car;

        switch (car)
        {
        case 1:
            std::cout << "Bienvenido Programador\n";
            std::cout << "Estas en clases que haras?\n";
            std::cout << "(1.- Poner atencion) / (2.- Jugar un videojuego)\n";
            std::cin >> op1;
            if (op1 == 1)
            {
                std::cout << "Decides poner atencion a la clase\n";
                std::cout << "Final neutraul: No paso nada ese dia, sigues con tu vida normalmente\n\n";
            }
            if (op1 == 2)
            {
                std::cout << "Te pones a jugar el nuevo juego se tu saga favorita pero de la nada, notas algo raro, el juego parece que te esta invitando a que formes parte de el\n";
                std::cout << "Que haras a continuacion?\n";
                std::cout << "(1- Decides adentarte en el mundo y vivir muchas avaenturas) / (2.- No aceptas)\n";
                std::cin >> op2;
                if (op2 == 1)
                {
                    std::cout << "No pasa nada\n";
                    std::cout << "Final bait: Fuiste victima de una broma, acaso pensaste que era real?\n\n";
                }

                if (op2 == 2)
                {
                    std::cout << "Sabias que eso era muy bueno para ser real\n";
                    std::cout << "De pronto Mau descubre que estuviste jugando en vez de poner atencion que haras?\n";
                    std::cout << "(1- Acepar tu destino) / (2.- Enfrentarlo)\n";
                    std::cin >> op3;

                    if (op3 == 1)
                    {
                        std::cout << "Decides aceptar tu terrible destino\n";
                        std::cout << "Final reflexivo: Sabes no fue tan malo, esta leccion seguro te servira en un futuro\n\n";
                    }
                    if (op3 == 2)
                    {
                        std::cout << "Decides enfrentar a Mau\n";
                        std::cout << "Final paradoja: Por increible que parzca logras derotar a Mau pero esto crea una paradoja temporal ya que al vencer a Mau no podras entregar este proyecto por lo tanto esto nunca paso\n\n";
                    }
                }
            }
            break;

        case 2:
            std::cout << "Bienvenido Musico\n";
            std::cout << "Estas en clases que haras?\n";
            std::cout << "(1.- Hacer un viaje astral) / (2.-Componer una cancion)\n";
            std::cin >> op4;
            if (op4 == 1)
            {
                std::cout << "Decides hacer un viaje astral, lo que te llevo a un increible viaje de auntoconocimiento\n";
                std::cout << "Final realista: Si bien logras hacer el viaje astral, pero esto no te salvo de reprobar el semetre\n\n";
            }
            if (op4 == 2)
            {
                std::cout << "Compones una cancion increible y estas seguro que sera un eexito, por desgracia te hackean tu cuenta donde tienes guardada la cancion\n";
                std::cout << "Que haras a continuacion?\n";
                std::cout << "(1- Pedirle ayuda a alguien de programacion para recuperar tu cuenta) / (2.- Ir con la policia cybernetica)\n";
                std::cin >> op5;

                if (op5 == 2)
                {
                    std::cout << "Policia cybernetica, acaso eso existe?\n";
                    std::cout << "Final malo: Por desgracia nunca recuperas tu cuenta\n\n";
                }
                if (op5 == 1)
                {
                    std::cout << "Recuperas tu cuenta\n";
                    std::cout << "Final bueno: Recuperate tu cuenta y tu cancion fue un exito\n\n";
                }
            }
            break;

        default:
            std::cout << "Vuelve a intentarlo";
            return 0;
        }
        std::cout << "\nQuieres volverlo a intentar (Si = 1/No = 2)\n";
        std::cin >> op5;
    }
        while (op5==1);
}



