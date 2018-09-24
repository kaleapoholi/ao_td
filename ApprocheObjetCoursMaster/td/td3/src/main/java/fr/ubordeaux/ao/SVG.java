package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;


public class SVG {
    private int width;
    private int heigth;
    //créer une liste 


    public SVG(int width, int heigth) {
        this.width = width;
        this.heigth = heigth;
    }

    public void generateHTML(Element body){
        Element svg = new Element("svg");
        svg.setAttribute(new Attribute("width",""+width+""));
        svg.setAttribute(new Attribute("height",""+height+""));
        body.addContent(svg);
        
    }

    public void add(Forme forme){
        //ajoute la forme à la liste
    }
        
    
}