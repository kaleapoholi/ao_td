package fr.ubordeaux.ao;

import org.jdom2.Element;
i

abstract public class Forme {
    private int x;
    private int y;
    private Element htmlElement; // c'est une composition pas une aggrégation

    public Forme (int x, int y){
        this.x=x;
        this.y=y;
    }

    abstract public void add(Element svg);
}