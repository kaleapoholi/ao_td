package fr.ubordeaux.ao;

import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;

public class Main {
    
    public static void main(String[] args) throws IOException{
        Document XMLDocument= new Document();
        Element root = new Element("html");
        XMLDocument.addContent(root);
        Element body= new Element("body");
        root.addContent(body);


        SVG svg= new SVG(400,200);
        svg.generateHTML(body);
        svg.add(new Circle(200,100,40));
        
        XMLOutputter outputter = new XMLOutputter(Format.getPrettyFormat());
        outputter.output(XMLDocument,System.out);
    

    }

}

