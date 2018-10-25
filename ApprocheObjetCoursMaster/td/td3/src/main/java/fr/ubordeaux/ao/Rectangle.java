package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;
import org.jdom2.Element;

public class Rectangle extends Forme {

    public Rectangle(int x, int y) {
        super(x, y);
        super.htmlElement = new Element("rect");
    }

    public void add() {
        super.htmlElement.setAttribute(new Attribute("width", "" + super.x + ""));
        super.htmlElement.setAttribute(new Attribute("height", "" + super.y + ""));
        super.htmlElement.setAttribute(new Attribute("stroke", "green"));
        super.htmlElement.setAttribute(new Attribute("strokewidth", "3"));
        super.htmlElement.setAttribute(new Attribute("fill", "blue"));

    }
}