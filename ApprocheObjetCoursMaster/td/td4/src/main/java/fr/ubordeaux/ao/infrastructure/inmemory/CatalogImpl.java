package fr.ubordeaux.infrastructure.inmemory;

import fr.ubordeaux.ao.domain.model.Catalog;
import java.util.HashSet;
import java.util.Set;

public class CatalogImpl implements Catalog {
    private set<Reference> references;

    public CatalogImpl(){
        references = new HashSet<Reference>();
    }

    public boolean addReference(Reference newReference){
        references.add(newReference);

    }

    public boolean removeReference(Reference oldReference){
        references.remove(oldReference);

    }

    public set<Reference> getCatalog(){
        return references;
    }

    public boolean searchRefById(set<Reference> references, int id){
        System.out.println("pas impl");
    }

    public boolean searchRefByName(set<Reference> references, String name){
        System.out.println("pas impl");
    }

}