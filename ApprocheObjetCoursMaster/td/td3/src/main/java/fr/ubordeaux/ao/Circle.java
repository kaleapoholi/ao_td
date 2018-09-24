package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;

public class Circle extends Forme {
    private int radius;

    public Circle(int centerX, int centerY, int radius) {
        super(centerX, centerY);
        this.radius = radius;
    }

    public void add(Element svg){
        Element circle = new Element("circle");
        circle.setAttribute(new Attribute("cx",""+centerX+""));
        circle.setAttribute(new Attribute("cy",""+centerY+""));

        circle.setAttribute(new Attribute("r",""+radius+""));
        circle.setAttribute(new Attribute("stroke","green"));
        circle.setAttribute(new Attribute("strokewidth","10"));
        circle.setAttribute(new Attribute("fill","yellow"));
        svg.addContent(circle); //mettre ça dans le svg + créer une boucle qui va permettre de parcourir toutes les formes de la liste
        
    }

}