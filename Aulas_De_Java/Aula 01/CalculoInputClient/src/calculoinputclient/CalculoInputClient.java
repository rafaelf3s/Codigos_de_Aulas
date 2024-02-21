/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package calculoinputclient;
import java.util.Scanner;

/**
 *
 * @author rafael
 */
public class CalculoInputClient {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int v1,v2,soma;
        
        Scanner entrada = new Scanner(System.in);
        System.out.print("Digite v1: ");
        v1=entrada.nextInt();
        System.out.print("Digite v2: ");
        v2=entrada.nextInt();
        
        soma=v1+v2;
        System.out.print("soma:"+soma);
        // TODO code application logic here
    }
    
}
