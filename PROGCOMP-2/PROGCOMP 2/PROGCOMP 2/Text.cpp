#include <iostream>
#include "bot.h"
#include "Text.h"

using namespace std;
// Aloca o vetor com tamanho definido e inicializa os campos.
void Create(Text* t, int capacity) {
    t->vector = new char[capacity];
    t->length = 0;
    t->capacity = capacity;

#ifdef _DEBUG
    cout << cinza << "> Texto com " << capacity << " caracteres foi criado." << limpar << endl;
#endif
}

// Cria um vetor dinâmico e copia uma string para dentro dele.
void Init(Text* t, const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    t->vector = new char[length];
 
    for (int i = 0; i < length; i++) {
        t->vector[i] = str[i];
    }
    t->length = length;
    t->capacity = length; 

#ifdef _DEBUG
    cout << cinza << "> Texto com " << t->capacity << " caracteres foi criado." << limpar << endl;
#endif
}

// A função libera a memória do vetor de texto, zera os campos do registro e 
// garante que o ponteiro não aponte mais para o vetor anterior.
void Destroy(Text* t) {
#ifdef _DEBUG
    cout << cinza << "> Texto com " << t->capacity << " caracteres foi liberado." << limpar << endl;
#endif
    delete[] t->vector; 
    t->vector = 0;
    t->length = 0;
    t->capacity = 0;
}


// Exibe o texto ignorando '*' e '\n'.
void Show(const Text* t) {
    for (int i = 0; i < t->length; i++) {
        if (t->vector[i] != '*' && t->vector[i] != '\n')
            cout << t->vector[i];
    }
}




// A função exibe o texto do vetor formatado com cor diferenciada no terminal.
void Print(const Text* t) {
    cout << Azul; 
    cout << "> Entendi: \"";
        Show(t);
    cout << "\" ";
    cout << limpar << endl;
}

//  função lê o texto, caractere por caractere do usuário, armazenando em um vetor 
// até encontrar '\n' ou atingir o limite de espaço, e no fim insere '\n' ao texto.
void Read(Text* t) {
    t->length = 0;
    char ch = 0;
    bool reading = true;
    cout << "> ";
    while ((t->length) < t->capacity && reading && ch != '\n') {
        if (!cin.get(ch)) {
            reading = false;
        }\
        else {
            t->vector[t->length++] = ch;
        }
    }

    if (t->length == 0 || t->vector[t->length - 1] != '\n') {
        if (t->length < t->capacity - 1) {
            t->vector[t->length++] = '\n';
        }
        else {
            t->vector[t->length - 1] = '\n';
        }
    }
    t->vector[t->length] = '\0';
    

#ifdef _DEBUG
    cout << cinza << "> Texto lido com " << t->length << " caracteres." << limpar << endl;
#endif
}

// retorna o caractere da posição informada no texto, 
// ou '\0' caso a posição seja inválida.
char CharAt(const Text* t, int pos) {
    if (pos < 0 || pos >= t->length) return '\0';
    return t->vector[pos];
}


// aumenta a capacidade do vetor, copia o conteúdo antigo para o novo vetor 
// maior,libera a memória anterior e atualiza os dados do registro.
void Grow(Text* t, int new_length) {
    char* new_vector = new char[new_length];
    int old_size = t->length;
    
    for (int i = 0; i < t->length && i < new_length; i++) {
        new_vector[i] = t->vector[i];
    }
    
    if (t->length < new_length)
        new_vector[t->length] = '\0';
    else
        new_vector[new_length - 1] = '\0'; 
    
    delete[] t->vector;
    t->vector = new_vector;
    t->capacity = new_length;
    
    if (t->length >= new_length) 
        t->length = new_length;

#ifdef _DEBUG
    cout << cinza << "> Expandido texto de " << old_size << " para " << new_length << limpar << endl;
#endif
}

// adiciona o texto de uma fonte ao final 
// do texto destino, expandindo o vetor se necessário.
void Add(Text* destination, const Text* src) {
    int newLen = destination->length + src->length;
        
    if (newLen > destination->capacity) {
        Grow(destination, newLen); 
    }
        
#ifdef _DEBUG
        cout << cinza << "> Adicionando: \"";
    for (int i = 0; i < src->length; i++) {
        if (src->vector[i] == '\n'){
            cout << "\"";
        }
        else {
            cout << src->vector[i] ;
        }
    }
    cout << limpar << endl;
#endif

    for (int i = 0; i < src->length; i++) {
        destination->vector[destination->length + i] = src->vector[i];
    }
    destination->length = newLen; 
    
}

// exibe em destaque (normalmente com cor ou fundo diferente) 
// um trecho específico do texto no terminal.
void Highlight(const Text* t) {
    cout << Amarelo; 
    Show_2(t);
    cout << limpar;
} 

// função criada apenas para pintar os caracteres especiais *
void Show_2(const Text* t) {
    int cor = 0;
    for (int i = 0; i < t->length; i++) {
        if (t->vector[i] == '*') cor++;
        if (cor % 2 == 1) {
            cout << Amarelo_BG;
        }
        else if (cor % 2 == 0){
            cout << limpar;
            
            cout << Amarelo;
    }
        
        if (t->vector[i] != '*') cout << t->vector[i];
    }

}
// cria uma caixa de mesagem de um tamanho especifico
void Boxed(Text* t) {
    int length = 0;
    char top_left_corner = '\xC9';
    char down_left_corner = '\xC8';
    char top_right_corner = '\xBB';
    char down_right_corner = '\xBC';
    char double_dash = '\xCD';
    char inverted_double_dash = '\xBA';

    for (int i = 0; i < t->length; i++) {
        if (t->vector[i] != '\0') {
            length++;
        }
    }

    cout << top_left_corner;
    for (int i = 0; i < length + 1; i++) { 
        cout << double_dash;
    }
    cout << top_right_corner << endl;
   
    cout << inverted_double_dash << " ";
    Highlight(t); 
    cout << inverted_double_dash << " " << endl;

    cout << down_left_corner;
    for (int i = 0; i < length + 1; i++) {
        cout << double_dash;
    }
    cout << down_right_corner << endl;
}
