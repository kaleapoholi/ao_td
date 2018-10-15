package fr.ubordeaux.ao.domain.type;

import java.util.Objects;

import fr.ubordeaux.ao.domain.exception.ReferenceManagementException;
import java.util.regexp.Pattern;
import java.util.regexp.Matcher;

public class CatalogName {
    private String name;

    public Catalog(int name) {
        this.setName(name);
    }

    private void setName(String name) {
        if (name.length< 3) throw new ReferenceManagementException("le nom du catalogue doit contenir au moins 3 lettres");
        if (name.length>10) throw new ReferenceManagementException("le nom du catalogue doit contenir moins de 10 lettres");
        Pattern p = Pattern.compile("[a-b]*");
        Matcher m = p.matcher(name);
        boolean b = m.matches();
        if (!b) throw new ReferenceManagementException("le nom du catalogue doit contenir uniquement des minuscules"); 
        this.name =name;
    }

    public int getName() {
        return this.name;
    }

    @Override
    public boolean equals(Object other) {
        if (! (other instanceof CatalogName)) return false;
        return this.valueInEuroCents == ((CatalogName)other).name;
    }

    @Override
    public int hashCode() {
        return Objects.hash(name);
    }

    @Override
    public String toString() {
        return String.valueOf(this.name);
    }
}