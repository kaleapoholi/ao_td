package fr.ubordeaux.ao;

import static org.junit.Assert.*;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

public class AcceptationTest {
    private final int MAX = 310;
    @Before
    public void createCatalog(){
        catalog = new CatalogImpl();
        Reference newRef = new Reference("1", "nom", "description", 20);
        catalog.addReference(newRef);
        
        Reference newRef2 = new Reference("2", "nom2", "description2", 30);
        catalog.addReference(newRef2);

        Reference newRef = new Reference("3", "nom3", "description3", 40);
        catalog.addReference(newRef3);
    }

    @Test
    public void testAddReferenceAndFind() {
        String id="5";
        String name="nom5";
        String description="description5";
        Price basePrice=60;
        Reference newRef5 = new Reference(id, name, description, basePrice);
        catalog.addReference(newRef5);
        
        Reference result= findReferenceById("5");
        assertEquals(newRef5.getId(), result.getId());

    }

}