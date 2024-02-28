/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package testeequacao;

/**
 *
 * @author alunos
 */
public class EquacaoSegundoGrau {
    private double a;
    private double b;
    private double c;
    private double x1;
    private double x2;
    
    //construtor
    public EquacaoSegundoGrau(double i, double j, double k){
        a=i;
        b=j;
        c=k;
        
        
    }
    
    //metodos de acesso
    
    public void setA(double x){
        a=x;
    }
    
    public void getA(){
        return a;
    }
    
    public void setB(double x){
        b=x;
    }
    public void getB(){
        return b;
    }
    
    public void getX1(){
        return x1;
    }
    
    public void getX2(){
        return x2;
    }
    
    
    //metodos para calculos
    
    public double calcularDelta(){
        double d=0;
        d=b*b-4*a*c;
        return d;
    }
    
    public void calcularX1(){
        x1=(-b+Math.sqrt(calcularDelta()))/(2*a);
        
        
    }
    
    public void calcularX2(){
        x2=(-b-Math.sqrt(calcularDelta()))/(2*a);
        
    }
    
  
}
