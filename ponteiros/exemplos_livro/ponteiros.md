# Ponteiros em C

## Conceito
Toda e qualquer informação que manipulamos dentro do programa está obrigatoriamente **armazenada** em algum espaço da memória do computador. Ao criar uma váriavel, o computador **reserva um espaço da memória** que guarda um valor assosiado a ela. Ao nome que nomeamos a váriavel, o computador **associa o endereço do espaço** que ele reservou para guarda-lá.

O **operador asterisco (*)** que informa ao compilador que aquela variável não vai guardar um valor, mas um endereço de memória para aquele tipo especificado.

Ponteiros não inicializados aopontam para um lugar indefinido.

Quando declarado um ponteiro, ele não possui um endereço associado.

### Apontando um ponteiro para nenhum lugar
Um ponteiro pode ter um valor espcial *NULL*(valor reservado que indica que o ponteiro aponta para uma posição de memória inexistente), que é o endereço de nenhum lugar. O valor da constante *NULL* é *zero*.

### Localizar o endereço de uma variável guardada na memória
Para localizar o endereço de uma variável guardada na memória utilizamos o **operador &** na frente do nome da variável.

### Atribuição entre ponteiros
