package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;

public class SVG {
    private int width;
    private int height;
    private ArrayList<Forme> ListForme = new ArrayList<Forme>();// créer une
    // liste
    private Element svg = new Element("svg");

    public SVG(int width, int height) {
        this.width = width;
        this.height = height;
    }

    public void generateHTML(Element body) {
        svg.setAttribute(new Attribute("width", "" + width + ""));
        svg.setAttribute(new Attribute("height", "" + height + ""));
        body.addContent(svg);

    }

    public void add(Forme forme) {
        forme.add();
        // svg.addContent(forme.htmlElement);
        ListForme.add(forme);// ajoute la forme à la liste

    }

    public void create() {
        for (Forme fo : ListForme) {
            svg.addContent(fo.htmlElement);
        }

    }

}