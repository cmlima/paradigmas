
import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author lab803
 */
public class Concessionaria {
    
    public static final ArrayList<Carro> estoque = RandomGenerator.gerarEstoque(100, 100);
    public static double faturamento = 0.0;

    public void vender(Carro carro) {
        for (int i = 0; i < estoque.size(); i++) {
            if (estoque.get(i).getId() == carro.getId()) {
                estoque.remove(i);
                faturamento += carro.getPreco();
            }
        }
    }

    public void comprar(Carro carro) {
        estoque.add(carro);
        faturamento -= carro.getPreco();
    }
    
}
