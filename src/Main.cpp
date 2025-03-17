int main()
{
    // Declaración de una variable entera
    int numero = 42;

    // Declaración de un apuntador y asignación de la dirección de la variable
    int *p = &numero;

    // Imprimir el valor almacenado y la dirección de memoria
    cout << "Valor de la variable: " << numero << "\n";
    cout << "Valor almacenado en el apuntador (*p): " << *p << "\n";
    cout << "Direccion de memoria de la variable (&numero): " << &numero << "\n";
    cout << "Direccion almacenada en el apuntador (p): " << p << "\n";

    Administracion administracion; // Instanciado con el stack
    menu(administracion);
    
    return 0;
}
E