package fr.ubordeaux.ao.ui;

import fr.ubordeaux.ao.domain.model.Catalog;
import fr.ubordeaux.ao.domain.model.Reference;
import fr.ubordeaux.infrastructure.inmemory.CatalogImpl;
import fr.ubordeaux.ao.domain.model.Price;

public class TextualMenu {
    
    public void Menu(){
        Catalog myCat= new CatalogImpl();
        System.out.println("nouveau catalogue créé");        

    }

}