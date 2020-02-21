import java.util.ArrayList;
import java.util.Random;

public class RandomGenerator {
    
    public static int generateInteger(int min, int max) {
        Random rand = new Random();
        return rand.nextInt(max - min + 1) + min;
    }

    public static ArrayList<Carro> gerarEstoque(int min, int max){
        ArrayList<Carro> lista = new ArrayList<>();
        for (int i = min; i <= max; i++) {
            Modelo modelo = Modelo.values()[generateInteger(0, Modelo.values().length - 1)];
            Motor motor = Motor.values()[generateInteger(0, Motor.values().length - 1)];
            Pintura pintura = Pintura.values()[generateInteger(0, Pintura.values().length - 1)];
            Roda rodas = Roda.values()[generateInteger(0, Roda.values().length - 1)];
            double preco = (double)generateInteger(30000, 100000); 
            Carro carro = new Carro(modelo, motor, pintura, rodas, preco);
            lista.add(carro);
        }
        return lista;
    }
}