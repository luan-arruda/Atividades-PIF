#include <stdio.h>

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    // 1 para 'a vista' (10% de desconto)
    if (opcaoPagamento == 1) {
        return valor - (valor * 0.10);
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float precoProduto, valorPago, subtotal, totalPagar, troco;
    int quantidade, opcaoPag;
    
    printf("Digite o preco unitario do produto: R$ ");
    scanf("%f", &precoProduto);
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    
    printf("Forma de pagamento (1 - A vista [10%% de desconto], 2 - Outros): ");
    scanf("%d", &opcaoPag);
    
    subtotal = calculaSubtotal(precoProduto, quantidade);
    totalPagar = aplicaDesconto(subtotal, opcaoPag);
    
    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", totalPagar);
    
    printf("\nValor entregue pelo cliente: R$ ");
    scanf("%f", &valorPago);
    
    if (valorPago >= totalPagar) {
        troco = calculaTroco(totalPagar, valorPago);
        printf("Troco: R$ %.2f\n", troco);
    } else {
        printf("Erro: O valor pago eh menor que o total a pagar!\n");
    }
    
    return 0;
}