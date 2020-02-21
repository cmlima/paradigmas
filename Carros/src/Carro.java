/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author lab803
 */
public class Carro {

    private static int counter = 0;
    private final int id;
    private Modelo modelo; 
    private Motor motor;
    private Pintura pintura;
    private Roda rodas;
    private final double preco;

    public Carro(Modelo modelo, Motor motor, Pintura pintura, Roda rodas, double preco) {
        this.id = counter++;
        this.modelo = modelo;
        this.motor = motor;
        this.pintura = pintura;
        this.rodas = rodas;
        this.preco = preco;
    }

    public Modelo getModelo() {
        return modelo;
    }

    public void setModelo(Modelo modelo) {
        this.modelo = modelo;
    }

    public Motor getMotor() {
        return motor;
    }

    public void setMotor(Motor motor) {
        this.motor = motor;
    }

    public Pintura getPintura() {
        return pintura;
    }

    public void setPintura(Pintura pintura) {
        this.pintura = pintura;
    }

    public Roda getRodas() {
        return rodas;
    }

    public void setRodas(Roda rodas) {
        this.rodas = rodas;
    }

    public int getId() {
        return id;
    }

    public double getPreco() {
        return preco;
    }
    
}
