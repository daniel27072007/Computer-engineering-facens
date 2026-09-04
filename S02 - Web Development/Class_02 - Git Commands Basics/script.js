const display = document.getElementById('display');
let currentInput = '';

// Adiciona números ao visor
function appendNumber(number) {
    // Evita múltiplos pontos decimais seguidos
    if (number === '.' && currentInput.includes('.')) return;
    
    currentInput += number;
    updateDisplay();
}

// Adiciona operadores ao visor
function appendOperator(operator) {
    if (currentInput === '') return;
    
    // Evita adicionar dois operadores seguidos
    const lastChar = currentInput.slice(-1);
    if (['+', '-', '*', '/'].includes(lastChar)) {
        currentInput = currentInput.slice(0, -1) + operator;
    } else {
        currentInput += operator;
    }
    updateDisplay();
}

// Limpa totalmente a tela
function clearDisplay() {
    currentInput = '';
    display.value = '';
}

// Apaga o último caractere digitado (Backspace)
function deleteLast() {
    currentInput = currentInput.slice(0, -1);
    updateDisplay();
}

// Atualiza o valor visível na tela da calculadora
function updateDisplay() {
    display.value = currentInput;
}

// Executa o cálculo matemático
function calculate() {
    try {
        if (currentInput === '') return;
        
        // Avalia a string matemática com segurança básica
        // Nota: Em cenários reais complexos, usar uma biblioteca de parsing ou validação via Regex é recomendado
        const result = Function(`"use strict"; return (${currentInput})`)();
        
        // Trata divisões por zero ou erros matemáticos
        if (!isFinite(result)) {
            display.value = "Erro";
            currentInput = '';
            return;
        }

        currentInput = result.toString();
        updateDisplay();
    } catch (error) {
        display.value = "Erro";
        currentInput = '';
    }
}
