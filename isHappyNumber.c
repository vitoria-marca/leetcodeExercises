
int somaDosDigitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

bool isHappy(int n) {
    int fast;
    int slow = fast = n;

    // A técnica de "dois ponteiros" (tartaruga e lebre) para detectar ciclos
    while (fast != 1 && somaDosDigitos(fast) != 1) {
        slow = somaDosDigitos(slow);  // Avança 1 passo
        fast = somaDosDigitos(somaDosDigitos(fast));  // Avança 2 passos

        if (slow == fast) {
            return false;
        }
    }
    return true; 
}