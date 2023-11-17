#include <stdio.h>
#include <stdint.h>

#define SIMPLE 1
#define DOBLE 2
#define TRIPLE 3
#define ATRAS 4

#define TERMINAR 0
#define EQUIPO1 1
#define EQUIPO2 2
#define EQUIPO1_IX 0
#define EQUIPO2_IX 1

int teamF(void); 
int pointF(void);


int teamF() {
    int team;
    
    printf("\n\nInserte el equipo: ");
    scanf("%d", &team);
    
    while (team != TERMINAR && team != EQUIPO1 && team != EQUIPO2) { // Team error
        printf("ERROR: Seleccione un equipo válido (1 o 2)");
        scanf("%d", &team);
    }
    
    return team;
}


int pointF() {
    int point;
    
    printf("\n\nInserte el punto: ");
    scanf("%d", &point);
    
    while (point != SIMPLE && point != DOBLE && point != TRIPLE && point != ATRAS) { // point error
        printf("ERROR: Inserte puntos válidos (Simples, Dobles o Triples)");
        scanf("%d", &point);
    }
    
    if (point == ATRAS) printf("Será reenviado al anterior menú");

    else return point;
    
}

void results(int score[2][3], int final_score[2], int shots_count[3]) {
    char lista[3][10] = {"Simples:", "Dobles:", "Triples:"};
    printf("\n\n    ---FIN DEL PARTIDO---"\
    "\nGanó el equipo %d"\
    "\nEquipo 1: %d\nSimples: %d\nDobles: %d\nTriples: %d\n"\
    "\nEquipo 2: %d\nSimples: %d\nDobles: %d\nTriples: %d\n\n",
    (1 + ((int) final_score[EQUIPO1_IX] < final_score[EQUIPO2_IX])),
    final_score[EQUIPO1_IX], score[EQUIPO1_IX][0], score[EQUIPO1_IX][1]/2, score[EQUIPO1_IX][2]/3,
    final_score[EQUIPO2_IX], score[EQUIPO2_IX][0], score[EQUIPO2_IX][1]/2, score[EQUIPO2_IX][2]/3);

    for (int i=0; i<3; i++){
        int c = (score[0][i]/(i+1)+(score[1][i]/(i+1))*100)/(shots_count[i]);
        printf("%s %d%%\n",
        lista[i], c);
    }
}
int main() {
    int team, point;
    int score[2][3] = {0};
    int final_score[2] = {0};
    int shots_count[3] = {0};
    
    printf("Este programa se encarga de anotar los puntajes de un partido de basket.");
    do {
        do {
            team = teamF();
            if (team) point = pointF();
        } while (point == ATRAS);
        
        if (team) score[team-1][point-1] += point;
        
    } while (team);

    for (int i=0; i<3; i++){
        final_score[EQUIPO1-1] += score[EQUIPO1-1][i];
        final_score[EQUIPO2-1] += score[EQUIPO2-1][i];
        shots_count[point-1] ++;
    }

    results(score, final_score, shots_count);
}
