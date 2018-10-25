package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;
import org.jdom2.Element;

public class Ellipse extends Forme {
    private int radiusX;
    private int radiusY;

    public Ellipse(int centerX, int centerY, int radiusX, int radiusY) {
        super(centerX, centerY);
        this.radiusX = radiusX;
        this.radiusY = radiusY;
        super.htmlElement = new Element("ellipse");
    }

    public void add() {
        super.htmlElement.setAttribute(new Attribute("cx", "" + super.x + ""));
        super.htmlElement.setAttribute(new Attribute("cy", "" + super.y + ""));
        super.htmlElement.setAttribute(new Attribute("rx", "" + radiusX + ""));
        super.htmlElement.setAttribute(new Attribute("ry", "" + radiusY + ""));
        super.htmlElement.setAttribute(new Attribute("stroke", "green"));
        super.htmlElement.setAttribute(new Attribute("strokewidth", "10"));
        super.htmlElement.setAttribute(new Attribute("fill", "yellow"));
    }

}