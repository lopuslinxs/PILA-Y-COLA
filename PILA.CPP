#include <iostream>
#include <stack>
using namespace std;
void showstack(stack <int> s) ///creamos una funcion de tipo vacio llamada showstack con el parametro de pila donde se ingresan valores de tipo entero
{   while (!s.empty()) ///usamos un while que señala que la pila esta vacia
    {
        cout << '\t' << s.top(); /// imprime elementos en la parte de arriba de la pila
        s.pop(); /// borra los elementos
    } cout << '\n';/// \n proboca un salto de linea  \t que proboca una tabulacion
}
int main ()
{
    stack <int> s; ///llamamos a la pila
    s.push(10); /// introducimos valores de tipo entero 10 30 20 5 y 1
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    cout << "LA COLA ES : ";  // ponemos un cout donde nos dira que  la cola es:
    showstack(s); /// llamamos a la fucncion showstasc con parametro s que vendria a ser lso elementos  introducidos
    cout << "\ns.size(): " << s.size(); /// cout salto de linea s.size
    cout << "\ns.top() : " << s.top();

    cout << "\ns.pop() : ";
    s.pop();
    showstack(s);
    cout << "\nGRACIAS OVERLORDS DEL C++" << endl;
    return 0;
}
