package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;
import org.jdom2.Element;

public class Circle extends Forme {
    private int radius;

    public Circle(int centerX, int centerY, int radius) {
        super(centerX, centerY);
        this.radius = radius;
        super.htmlElement = new Element("circle");
    }

    public void add() {
        super.htmlElement.setAttribute(new Attribute("cx", "" + super.x + ""));
        super.htmlElement.setAttribute(new Attribute("cy", "" + super.y + ""));
        super.htmlElement.setAttribute(new Attribute("r", "" + radius + ""));
        super.htmlElement.setAttribute(new Attribute("stroke", "green"));
        super.htmlElement.setAttribute(new Attribute("strokewidth", "10"));
        super.htmlElement.setAttribute(new Attribute("fill", "green"));

    }

}