//implemente l'interface java

package fr.ubordeaux.ao.application.command;

public class AddReference extends Command{
    private Catalog catalog;
    private Reference reference;
    public AddReference(Catalog catalog, Reference reference){
        this.catalog=catalog;
        this.reference=reference;
    }
    public void execute(){
        catalog.add(reference);
    }
    //2 setteur si on veut changer le catalog ou la reference
}
