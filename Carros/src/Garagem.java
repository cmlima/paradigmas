
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
public class Garagem {
    
    private final ArrayList<Carro> lista;

    public Garagem() {
        this.lista = new ArrayList<>();
    }

    public void adicionar(Carro carro) {
        this.lista.add(carro);
    }
    
    public void remover(Carro carro) {
        for (int i = 0; i < this.lista.size(); i++) {
            if (this.lista.get(i).getId() == carro.getId()) {
                this.lista.remove(i);
                break;
            }
        }
    }

    public void alterarRodas(Carro carro, Roda rodas) {
        carro.setRodas(rodas);
    }

    public void alterarPintura(Carro carro, Pintura pintura) {
        carro.setPintura(pintura);
    }

    public void alterarMotor(Carro carro, Motor motor) {
        carro.setMotor(motor);
    }
    
}
