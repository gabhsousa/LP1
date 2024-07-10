/*
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int maior;
    std::cin >> maior;

    for (int i = 1; i < N; ++i) {
        int num;
        std::cin >> num;

        if (num > maior) {
            maior = num;
        }
    }

    std::cout << maior << std::endl;

    return 0;
}
*/

/*
#include <iostream>

int main() {
    int num;
    int total = 0;
    int imparMaior15 = 0;

    while (true) {
        std::cin >> num;
        if (num == 0) {
            break;
        }
        total ++;
        if (num % 2 != 0 && num > 15) {
            imparMaior15 ++;
        }
    }

    if (total == 0) {
        std::cout << "0%" << std::endl;
    } else {
        float porcentagem = (static_cast<float>(imparMaior15) / total) * 100;
        std::cout << porcentagem << "%" << std::endl;
    }
    return 0;
}
*/

/*
#include <iostream>

int main() {
    int num;
    int maior = -2147483648;
    int segundoMaior = -2147483648;

    while (true) {
        std::cin >> num;
        if (num == 0) break;

        if (num > maior) {
            segundoMaior = maior;
            maior = num;
        } else if (num > segundoMaior) {
            segundoMaior = num;
        }
    }

    std::cout << "Maior: " << maior << std::endl;
    std::cout << "Segundo maior: " << segundoMaior << std::endl;

    return 0;
}
*/

/*
#include <iostream>

int maximo(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int num1, num2, num3;

        std::cin >> num1 >> num2 >> num3;
        
    int maior = maximo(num1, num2, num3);

        std::cout << maior << std::endl;
        
    return 0;
}
*/

/*
#include <iostream>

int main() {
    const int totalNumeros = 10;
    int numeros[totalNumeros];

    for (int i = 0; i < totalNumeros; ++i) {
        std::cin >> numeros[i];
    }

    int soma = 0;
    for (int i = 0; i < totalNumeros; ++i) {
        soma += numeros[i];
    }
    float media = static_cast<float>(soma) / totalNumeros;

    std::cout << "Media: " << media << std::endl;
    std::cout << "Maiores que a media:";
    for (int i = 0; i < totalNumeros; ++i) {
        if (numeros[i] > media) {
            std::cout << " " << numeros[i];
        }
    }
    std::cout << std::endl;

    return 0;
}
*/

/*
#include <iostream>

struct Ponto {
    double x;
    double y;
};

double calcularQuadradoDistancia(Ponto ponto1, Ponto ponto2) {
    double dx = ponto1.x - ponto2.x;
    double dy = ponto1.y - ponto2.y;
    return dx * dx + dy * dy;
}

int main() {
    Ponto p1, p2;
    
    std::cin >> p1.x >> p1.y;
    std::cin >> p2.x >> p2.y;

    double quadradoDistancia = calcularQuadradoDistancia(p1, p2);
    
    std::cout << quadradoDistancia << std::endl;

    return 0;
}
*/

/*
#include <iostream>

int main() {
    int N;
    int menor, maior, soma = 0;
    int valor;

    
    std::cin >> N;
    std::cin >> valor;
    menor = valor;
    maior = valor;
    soma += valor;

    for (int i = 1; i < N; ++i) {
        std::cin >> valor;
        if (valor < menor) {
            menor = valor;
        }
        if (valor > maior) {
            maior = valor;
        }
        soma += valor;
    }

    double media = static_cast<double>(soma) / N;

    int mediaInteira = static_cast<int>(media);

    std::cout << menor;
    std::cout << " " << maior;
    std::cout << " " << mediaInteira;
    
    return 0;
}
*/

/*#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

int calcularDatas(Data d1, Data d2){
 if (d1.ano != d2.ano) {
        return (d1.ano < d2.ano) ? 1 : -1;
    }
    if (d1.mes != d2.mes) {
        return (d1.mes < d2.mes) ? 1 : -1;
    }
    if (d1.dia != d2.dia) {
        return (d1.dia < d2.dia) ? 1 : -1;
    }
    return 0;
}

int main(){
    Data d1, d2;
    int estado;

    cin >> d1.dia >> d1.mes >> d1.ano;
    cin >> d2.dia >> d2.mes >> d2.ano;
    
    estado = calcularDatas(d1, d2);

    cout << (estado == 1 ? "Pessoa 1 é mais velha" : (estado == -1 ? "Pessoa 2 é mais velha" : "Pessoas são da mesma idade"));

    return 0;
}
*/

/*
#include <iostream>

using namespace std;

struct carro {
    string modelo;
    string marca;
    int ano;
    int preco;
};

int compararPreco(carro c1, carro c2) {
    if (c1.ano != c2.ano) {
        return (c1.ano < c2.ano) ? 1 : 2;
    } else if (c1.preco != c2.preco) {
        return (c1.preco < c2.preco) ? 1 : 2;
    }
    return 0;
}

int main() {
    carro c1, c2;
    int estado;

    cin >> c1.modelo >> c1.marca >> c1.ano >> c1.preco;
    cin >> c2.modelo >> c2.marca >> c2.ano >> c2.preco;

    estado = compararPreco(c1, c2);

    if (estado == 1) {
        cout << c1.marca << " " << c1.modelo;
    } else if (estado == 2) {
        cout << c2.marca << " " << c2.modelo;
    }

    return 0;
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

struct movel {
    string descricao;
    float peso;
    char tipo;
};

movel encontrarPesado(const movel lista[], int tam) {
    movel pesado = lista[0];

    for (int i = 0; i < tam; i++) {
        if (lista[i].peso > pesado.peso) {
            pesado = lista[i];
        }
    }
    return pesado;
}

int encontrarS10(const movel lista[], int tam) {
    int tipoS10 = 0;

    for (int i = 0; i < tam; i++) {
        if (lista[i].tipo == 's' && lista[i].peso > 10) {
            tipoS10++;
        }
    }
    return tipoS10;
}

int encontrarReal(const movel lista[], int tam) {
    int real = 0;

    for (int i = 0; i < tam; i++) {
        if (lista[i].descricao.length() >= 4 && lista[i].descricao.substr(lista[i].descricao.length() - 4) == "Real") {
            real++;
        }
    }
    return real;
}

int main() {
    int tam = 0;
    cin >> tam;
    cin.ignore();

    movel lista[tam];

    for (int i = 0; i < tam; i++) {
        getline(cin, lista[i].descricao);
        cin >> lista[i].peso;
        cin >> lista[i].tipo;
        cin.ignore();
    }

    movel pesado = encontrarPesado(lista, tam);
    int tipoS10 = encontrarS10(lista, tam);
    int real = encontrarReal(lista, tam);

    cout << "Tipo 's' acima de 10Kg: " << tipoS10 << endl;
    cout << "Termina em \"Real\": " << real << endl;
    cout << "Mais pesado: \"" << pesado.descricao << "\"" << endl;
}
*/

/*
#include <iostream>

using namespace std;

void menu(){
    cout << "1 - Item 1" << endl;
    cout << "2 - Item 2" << endl;
    cout << "3 - Item 3" << endl;
    cout << "4 - Sair" << endl;
}

int main(){
    int opcao;

    do{
        menu();
        cin >> opcao;

            switch(opcao){
                case 1:
                cout << "Item 1" << endl;
            break;
            case 2:
                cout << "Item 2" << endl;
            break;
            case 3:
                cout << "Item 3" << endl;
            break;
            case 4:
                cout << "Sair" << endl;
            break;
            default:
                cout << "Opcao " << opcao << " Invalida" << endl;
        }
    }while(opcao != 4);
}
*/

/*
#include <iostream>
#include <cmath>

using namespace std;

struct ponto{
    int x, y;
};

float distancia(ponto ponto1, ponto ponto2){
    return sqrt(pow(ponto1.x - ponto2.x, 2) + pow(ponto1.y - ponto2.y, 2));
}

int main(){
    ponto p;
    int tam;

    cin >> p.x >> p.y;
    cin >> tam;

    ponto pontos[tam];

    for(int i = 0; i < tam; i++){
        cin >> pontos[i].x >> pontos[i].y;
    }

    int maisProximo = 0;
    float menorDistancia = distancia(p, pontos[0]);

    for(int i = 0; i < tam; i++){
        float distanciaAtual = distancia(p, pontos[i]);
        if(distanciaAtual < menorDistancia){
            menorDistancia = distanciaAtual;
            maisProximo = i;
        }
    }

    cout << "Ponto mais perto é (" << pontos[maisProximo].x << ", " << pontos[maisProximo].y << ")";
}
*/

/*
#include <iostream>
#include <string>

using namespace std;

struct Jogador {
    string nomeCompleto;
    int idade;
    int chutesAGol;
    int gols;
};

double calcularPontaria(const Jogador& jogador) {
    if (jogador.chutesAGol == 0) {
        return 0;
    }
    return static_cast<double>(jogador.gols) / jogador.chutesAGol;
}

int main() {
    Jogador j1, j2;

    getline(cin, j1.nomeCompleto);
    cin >> j1.idade;
    cin >> j1.chutesAGol;
    cin >> j1.gols;
    cin.ignore();

    getline(cin, j2.nomeCompleto);
    cin >> j2.idade;
    cin >> j2.chutesAGol;
    cin >> j2.gols;

    double pontariaJ1 = calcularPontaria(j1);
    double pontariaJ2 = calcularPontaria(j2);

    if (pontariaJ1 > pontariaJ2) {
        cout << j1.nomeCompleto << " (" << j1.idade << ")" << endl;
    } else {
        cout << j2.nomeCompleto << " (" << j2.idade << ")" << endl;
    }
}
*/

/*
#include <iostream>
#include <vector>

using namespace std;

bool ehEsparsa(const vector<vector<int>>& matriz, int linhas, int colunas) {
    int totalElementos = linhas * colunas;
    int contagemZero = 0;

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (matriz[i][j] == 0) {
                ++contagemZero;
            }
        }
    }
    return contagemZero > 0.7 * totalElementos;
}

int main() {
    int linhas, colunas;

    cin >> linhas;
    cin >> colunas;

    vector<vector<int>> matriz(linhas, vector<int>(colunas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz[i][j];
        }
    }

    if (ehEsparsa(matriz, linhas, colunas)) {
        cout << "A matriz é esparsa" << endl;
    } else {
        cout << "A matriz não é esparsa" << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

void somaMatrizes(int m, int n, int A[][100], int B[][100]) {
    int C[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int A[100][100], B[100][100];

    cin >> m;
    cin >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    somaMatrizes(m, n, A, B);
}
*/