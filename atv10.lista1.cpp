#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
     int n1, n2, n3;

	cout << "Informe o primeiro n�mero: ";
    cin >> n1;

    cout << "Informe o segundo n�mero: ";
    cin >> n2;

    cout << "Informe o terceiro n�mero: ";
    cin >> n3;

    if (n1>n2 && n1>n3 && n2>n3){
        cout << "A ordem crescente dos n�meros �: " << n3 << " - " << n2 << " - " << n1 <<endl;
    }

    else if (n1>n2 && n1>n3 && n3>n2){
        cout << "A ordem crescente dos n�meros �: " << n2 << " - " << n3 << " - " << n1 <<endl;
    }

    else if (n2>n1 && n2>n3 && n1>n3){
        cout << "A ordem crescente dos n�meros �: " << n3 << " - " << n1 << " - " << n2 <<endl;
    }

    else if (n2>n1 && n2>n3 && n3>n1){
        cout << "A ordem crescente dos n�meros �: " << n1 << " - " << n3 << " - " << n2 <<endl;
    }

    else if (n3>n2 && n3>n1 && n1>n2){
        cout << "A ordem crescente dos n�meros �: " << n2 << " - " << n1 << " - " << n3 <<endl;
    }

    else if (n3>n2 && n3>n1 && n2>n1){
        cout << "A ordem crescente dos n�meros �: " << n1 << " - " << n2 << " - " << n3 <<endl;
    }
}
