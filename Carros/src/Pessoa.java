/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author lab803
 */
public class Pessoa {
    
    private String nome;
    private double conta;
    private Garagem garagem;

    public Pessoa(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public double getConta() {
        return conta;
    }

    public Garagem getGaragem() {
        return garagem;
    }
    
    public void comprar(Carro carro, double valor) {
        this.conta -= valor;
        this.garagem.adicionar(carro);
    }
    
    public void vender(Carro carro, double valor) {
        this.conta += valor;
        this.garagem.remover(carro);
    }
    
    
    
}
