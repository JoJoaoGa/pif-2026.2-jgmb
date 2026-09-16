#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio, duracao_seg;
    
    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);
    printf("Digite a duracao total em segundos: ");
    scanf("%d", &duracao_seg);
    
    int inicio_seg = h_inicio * 3600 + m_inicio * 60 + s_inicio;
    int total_seg = inicio_seg + duracao_seg;
    
    total_seg = total_seg % 86400;
    
    int h_fim = total_seg / 3600;
    int m_fim = (total_seg % 3600) / 60;
    int s_fim = total_seg % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}