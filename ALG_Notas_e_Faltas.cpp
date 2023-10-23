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

    cout << endl;
    cout << "Por Favor, insira seu nome e sobrenome: \n";
  	cout << "(exemplo: Joao_Silva)" << endl;
    cin >> nome;
    cout << endl;
    cout << "Insira seu numero de matricula: \n";
    cout << "(8 Digitos)"  << endl;
    cin >> rgm;
    cout << endl;
    cout << "Insira o numero de faltas:" << endl;
    cin >> faltas;
    if (faltas < 15) {
        cout << endl;
        cout << "Insira sua nota 1" << endl;
        cin >> n1;
        cout << endl;
        cout << "Insira sua nota 2" << endl;
        cin >> n2;
        cout << endl;
        cout << "Insira sua nota 3" << endl;
        cin >> n3;
        cout << endl;
        cout << "Insira sua nota 4" << endl;
        cin >> n4;
        media = (n1 + n2 + n3 + n4) / 4;
        if (media < 4) {
            cout << endl;
            cout << "Aluno: " << nome << endl;
            cout << "RGM: " << rgm << endl;
            cout << endl;
            cout << "Sua media final foi de: " << media << endl;
            cout << endl;
            cout << "Status: Reprovado" << endl;
            cout << endl;
            cout << "Boa sorte no ano que vem..." << endl;
        } else {
            if (media >= 6) {
                cout << endl;
                cout << "Aluno: " << nome << endl;
                cout << "RGM: " << rgm << endl;
                cout << "Sua media final foi de: " << media << endl;
                cout << "Status: Aprovado" << endl;
                cout << endl;
                cout << "Boas Ferias!!!!!!!!!" << endl;
            } else {
                cout << endl;
                cout << "Sua media final foi de:" << media << endl;
                cout << "Tera que fazer a prova de recuperacao!!!" << endl;
                cout << endl;
                cout << "Insira sua nota da avaliacao final:" << endl;
                cin >> n5;
                final = n5 / 2;
                if (final < 2) {
                    cout << endl;
                    cout << "Aluno: " << nome << endl;
                    cout << "RGM: " << rgm << endl;
                    cout << "Sua nota da prova final foi de: " << final << endl;
                    cout << "Status: Reprovado" << endl;
                    cout << endl;
                    cout << "Boa sorte no ano que vem..." << endl;
                } else {
                    cout << endl;
                    cout << "Aluno: " << nome << endl;
                    cout << "RGM: " << rgm << endl;
                    cout << "Sua nota da prova final foi de: " << final << endl;
                    cout << "Status: Aprovado" << endl;
                    cout << endl;
                    cout << "Boas Ferias!!!!!!!!!" << endl;
                }
            }
        }
    } else {
        cout << endl;
        cout << "Aluno: " << nome << endl;
        cout << "RGM: " << rgm << endl;
        cout << "Status: Reprovado pelo numero de faltas!!!" << endl;
        cout << endl;
        cout << "Para saber suas notas, insira sua Nota 1" << endl;
        cin >> n1;
        cout << endl;
        cout << "Insira sua nota 2" << endl;
        cin >> n2;
        cout << endl;
        cout << "Insira sua nota 3" << endl;
        cin >> n3;
        cout << endl;
        cout << "Insira sua nota 4" << endl;
        cin >> n4;
        media = (n1 + n2 + n3 + n4) / 4;
        if (media < 4) {
            cout << endl;
            cout << "Sua media final foi de: " << media << endl;
            cout << "Status: Reprovado pelas faltas e pelas notas." << endl;
            cout << endl;
            cout << "Boa sorte no ano que vem..." << endl;
        } else {
            cout << endl;
            cout << "Sua media final foi de: " << media << endl;
            cout << "Status: Aprovado pelas notas, porem reprovado pelas faltas." << endl;
            cout << endl;
            cout << "Boa sorte no ano que vem..." << endl;
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