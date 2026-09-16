#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_seg;
    int total_seg_inicio, total_seg_fim;
    int h_fim, m_fim, s_fim;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_seg);

    // Converte o inicio para o total de segundos do dia
    total_seg_inicio = h_inicio * 3600 + m_inicio * 60 + s_inicio;
    
    // Calcula o horario final em segundos (garantindo o ciclo de 24h com % 86400)
    total_seg_fim = (total_seg_inicio + duracao_seg) % 86400;

    // Extrai horas, minutos e segundos do total final
    h_fim = total_seg_fim / 3600;
    m_fim = (total_seg_fim % 3600) / 60;
    s_fim = total_seg_fim % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}