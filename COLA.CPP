#include <iostream>
#include <queue>
using namespace std;
void OVER(queue <int> gq)/// creamos una funcion de tipo vacio con nombre over con parameto de una cola
{/// que recive valores de tipo entero con nombre de parametro gq
    queue <int> g = gq; /// se crea otra cola  con nombre g que igualamos  al parametro de la cola gq
    while (!g.empty()) ///usamos un while que da a conocer que la cola esta vacia
    {         cout << '\t' << g.front(); /// luego un cout que ingresa los elementos al inicio de la cola
        g.pop(); /// luego tenemos pop que lee y retira el elemento superior de la cola
    }
    cout << '\n'; } /// se imprime un salto de linea
int main() {
    queue <int> LORD; ///llammamos a contructor cola con nombre lord
    LORD.push(10); /// luego se introduce elementos de tipo entero
    LORD.push(20);
    LORD.push(30);
    cout << "LA COLA LORD ES : "; /// IMPRIMIMOS LA COLA LORD LLAMANDO A LA FUNCION OVER CON PARAMETRO LORD
    OVER(LORD);
    cout << "\nLORD.size() : " << LORD.size();/// TAMAÑO DE LA COLA LORD
    cout << "\nLORD.front() : " << LORD.front();/// que lee el primer elemento que entro en la cola
    cout << "\nLORD.back() : " << LORD.back();///que lee el ultimo elemento que entro en la cola
    cout << "\nLORD.pop() : "; /// luego se borra el primer elemento ingresado llamando a la  funcion
    LORD.pop();///lord punto pop
    OVER(LORD);/// llamamos de nuevo a la fucncion over con parametro lord
    cout << "\nGRACIAS OVERLORDS DEL C++" << endl;
    return 0;
}
