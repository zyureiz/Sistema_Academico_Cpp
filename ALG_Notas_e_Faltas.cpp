#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double n1, n2, n3, n4, n5, media, final, faltas;
    string nome, rgm;

    cout << "\nPor Favor, insira seu nome e sobrenome: \n";
  	cout << "(exemplo: Joao_Silva)" << endl;
    cin >> nome;
    cout << "\nInsira seu numero de matricula: \n";
    cout << "(8 Digitos)"  << endl;
    cin >> rgm;
    cout << "\nInsira o numero de faltas:" << endl;
    cin >> faltas;
    if (faltas < 15) {
        cout << "\nInsira sua nota 1" << endl;
        cin >> n1;
        cout << "\nInsira sua nota 2" << endl;
        cin >> n2;
        cout << "\nInsira sua nota 3" << endl;
        cin >> n3;
        cout << "\nInsira sua nota 4" << endl;
        cin >> n4;
        media = (n1 + n2 + n3 + n4) / 4;
        if (media < 4) {
            cout << "\nAluno: " << nome << endl;
            cout << "RGM: " << rgm << endl;
            cout << "\nSua media final foi de: " << media << endl;
            cout << "Status: Reprovado" << endl;
            cout << "\nBoa sorte no ano que vem..." << endl;
            cout << endl;
        } else {
            if (media >= 6) {
                cout << "\nAluno: " << nome << endl;
                cout << "RGM: " << rgm << endl;
                cout << "\nSua media final foi de: " << media << endl;
                cout << "Status: Aprovado" << endl;
                cout << "\nBoas Ferias!!!!!!!!!" << endl;
                cout << endl;
            } else {
                cout << "\nAluno: " << nome << endl;
                cout << "RGM: " << rgm << endl;
                cout << "\nSua media final foi de: " << media << endl;
                cout << "\nStatus: Avaliacao Final" << endl;
                cout << "\nInsira sua nota da avaliacao final:" << endl;
                cin >> n5;
                final = n5 / 2;
                if (final < 2) {
                    cout << "\nAluno: " << nome << endl;
                    cout << "RGM: " << rgm << endl;
                    cout << "\nSua nota da prova final foi de: " << final << endl;
                    cout << "Status: Reprovado pela avaliacao final" << endl;
                    cout << "\nBoa sorte no ano que vem..." << endl;
                    cout << endl;
                } else {
                    cout << "\nAluno: " << nome << endl;
                    cout << "RGM: " << rgm << endl;
                    cout << "\nSua nota da prova final foi de: " << final << endl;
                    cout << "Status: Aprovado" << endl;
                    cout << "\nBoas Ferias!!!!!!!!!" << endl;
                    cout << endl;
                }
            }
        }
    } else {
        cout << "\nAluno: " << nome << endl;
        cout << "RGM: " << rgm << endl;
        cout << "\nStatus: Reprovado pelo numero de faltas!!!" << endl;
        cout << "\nPara saber suas notas, insira sua Nota 1" << endl;
        cin >> n1;
        cout << "\nInsira sua nota 2" << endl;
        cin >> n2;
        cout << "\nInsira sua nota 3" << endl;
        cin >> n3;
        cout << "\nInsira sua nota 4" << endl;
        cin >> n4;
        media = (n1 + n2 + n3 + n4) / 4;
        if (media < 4) {
            cout << "\nSua media final foi de: " << media << endl;
            cout << "Status: Reprovado pelas faltas e pelas notas." << endl;
            cout << "\nBoa sorte no ano que vem..." << endl;
            cout << endl;
        } else {
            cout << "\nSua media final foi de: " << media << endl;
            cout << "Status: Aprovado pelas notas, porem reprovado pelas faltas." << endl;
            cout << "\nBoa sorte no ano que vem..." << endl;
            cout << endl;
        }
    }
    return 0;
}

string toString (double value) {
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}