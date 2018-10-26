package fr.ubordeaux.ao.infrastructure.command;

public class Handler {
    private Gateway gateway;
    public void(){
        while(true){
            gateway.pop.execute();
        }
    }
}