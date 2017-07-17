#include <iostream>

using namespace std;


//
// Created by Lukas Wolfsteiner on 17.07.17.
//
char *platz_reservieren() {
    return (char *) malloc(sizeof(char) * 100);
}

void platz_freigeben(void *pointer) {
    free(pointer);
}

void version_c() {
    char *name = platz_reservieren();

    scanf("%s", name);
    printf("Hallo, %s!", name);

    platz_freigeben(name);
}

void version_cpp() {
    char *name = platz_reservieren();

    cin >> name;
    cout << "Hallo, " << name << "!" << endl;

    platz_freigeben(name);
}

int main() {
    version_c();

    version_cpp();

    return 0;
}