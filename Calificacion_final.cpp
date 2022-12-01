/*  Calcule la nota final del estudiante, mediante el promedio de 3 examanes parciales(55%), un examen Final(30%)
 *   y un Trabajo Final(15%) */

#include <cstdio>

int main() {
    double Calificacion_1, Calificacion_2, Calificacion_3, Examen_final, Trabajo_final, Calificacion_Final;

    printf("Introduzca Las Calificaciones de los 3 Parciales: \n");
    scanf("%lf %lf %lf", &Calificacion_1, &Calificacion_2, &Calificacion_3);
    printf("Introduzca La Calificacion de su examen Final: \n");
    scanf("%lf", &Examen_final);
    printf("Introduzca La Calificacion de su trabajo final Final: \n");
    scanf("%lf", &Trabajo_final);

    Calificacion_Final = (((Calificacion_1+Calificacion_2+Calificacion_3)/3)*0.55) + (Examen_final*.30) + (Trabajo_final *.15);

    printf("Su Calificacion Final es: %.2lf", Calificacion_Final);


    return 0;
}
