package fr.ubordeaux.ao;

import static org.junit.Assert.*;
import org.junit.Test;
import fr.ubordeaux.ao.domain.exception.ReferenceManagementException;

public class TestCatalogName {
    @Test
    public void testName() {
        CatalogName name;
        try {
            name=new CatalogName("no");
            assertEquals(false);
        }
        catch (ReferenceManagementException ReferenceManagementException){
            assertEquals(true);
        }
        
        try {
            name=new CatalogName("nomok");
            assertEquals(true);
        }
        catch (ReferenceManagementException ReferenceManagementException){
            assertEquals(false);
        }

        try {
            name=new CatalogName("nononononono");
            assertEquals(false);
        }
        catch (ReferenceManagementException ReferenceManagementException){
            assertEquals(true);
        }
        
        try {
            name=new CatalogName("NomOK");
            assertEquals(false);
        }
        catch (ReferenceManagementException ReferenceManagementException){
            assertEquals(true);
        }

    }

}