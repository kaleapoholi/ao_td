package fr.ubordeaux.ao.domain.model;
import java.util.Set;

public interface Catalog {
    //dans interface que des méthodes pas implémentées, tout est public, pas de coe juste des entêtes de méthodes
    public boolean addReference(Reference newReference);
    public boolean removeReference(Reference oldReference);
    public set<Reference> getCatalog();
    public boolean searchRefById(set<Reference> references, int id);
    public boolean searchRefByName(set<Reference> references, String name);
    
}