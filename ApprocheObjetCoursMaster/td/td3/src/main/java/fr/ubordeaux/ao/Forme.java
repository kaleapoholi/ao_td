package fr.ubordeaux.ao;

import org.jdom2.Element;
import java.io.*;
import java.util.*;
import org.jdom2.*;
import org.jdom2.output.*;

abstract public class Forme {
    protected int x;
    protected int y;
    protected Element htmlElement; // c'est une composition pas une aggrégation

    public Forme(int x, int y) {
        this.x = x;
        this.y = y;
    }

    abstract public void add();
}