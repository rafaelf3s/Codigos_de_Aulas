/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package testeequacao;

/**
 *
 * @author alunos
 */
public class TesteEquacao {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        EquacaoSegundoGrau eq1 = new EquacaoSegundoGrau(1,8,15);
        eq1.calcularX1();
        eq1.calcularX2();
        eq1.getX1();
        eq1.getX2();
        System.out.println("x1="+x1);
        System.out.println("x2="+x2);
    }
    
}
