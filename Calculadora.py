# Programa calculadora em PYTHON
import os

def main():
    controlador = menuEscolha()
    while(controlador != 0):
        resposta = menuNumerosOperacao(controlador)
        print('Resultado: %.2f' %(resposta))
        os.system("pause")
        os.system("cls")
        controlador = menuEscolha()

def menuEscolha():
    verifica = 0
    while(verifica == 0):
        print ("\t\t*************************************")
        print ("\t\t*             DIGITE                *")
        print ("\t\t*                                   *")
        print ("\t\t*           0 - Sair                *")
        print ("\t\t*           1 - Adição              *")
        print ("\t\t*           2 - Subtração           *")
        print ("\t\t*           3 - Multiplicação       *")
        print ("\t\t*           4 - Divisão             *")
        print ("\t\t*************************************")
        escolha = int(input ('\t\t'))
        if(escolha == 0 or escolha == 1 or escolha == 2 or escolha == 3 or escolha == 4):
            verifica = 1
        else:
            print('Opção Inválida!')
            os.system("pause")
            os.system("cls")

    os.system("cls")
    return escolha

def casoImpossivel(num2): # se numero2 for negativo na divisao
    while(num2 == 0):
        print ('Impossivel dividir por 0\n')
        num2 = float(input ('Digite um número diferente de 0: '))
        os.system("cls")

    return num2

def menuNumerosOperacao(escolhida):
    operacao = escolhida
    print('Digite dois números para a operação escolhida:')
    num1 = float(input ())
    num2 = float(input ())
    os.system("pause")
    os.system("cls")

    if(operacao == 1):
        resultado = adicao(num1, num2)
    elif(operacao == 2):
        resultado = subtracao(num1, num2)
    elif(operacao == 3):
        resultado = multiplicacao(num1, num2)
    elif(operacao == 4):
        if(num2 != 0):
            resultado = divisao(num1, num2)
        else:
            num2 = casoImpossivel(num2)
            resultado = divisao(num1, num2)

    return resultado

def adicao(num1, num2):
    res = num1 + num2
    return res

def subtracao(num1, num2):
    res = num1 - num2
    return res

def multiplicacao(num1, num2):
    res = num1 * num2
    return res

def divisao(num1, num2):
    res = num1 / num2
    return res

main()