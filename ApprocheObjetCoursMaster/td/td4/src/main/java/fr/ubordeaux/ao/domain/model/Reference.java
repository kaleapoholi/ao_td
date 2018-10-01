package fr.ubordeaux.ao.domain.model;

import fr.ubordeaux.ao.domain.model.Price;

public class Reference {
    private int id;
    private String name;
    private String des;
    private Price price; 
    private static int id_ref=0;

    private Reference(String name, String des, Price price){
        this.id=id_ref++;
        this.name=name;
        this.des=des;
        this.price=price;
    }

    public int id(){
        return id;
    }

    public String getName(){
        return name;
    }

    public String getDes(){
        return des;
    }

    public Price getPrice(){
        return price;
    }

    public void changePrice(Price price){
        this.price=price;
    }
    
    public void changeName(String name){
        this.name=name;
    }

    public void changeDes(String des){
        this.des=des;
    }
}