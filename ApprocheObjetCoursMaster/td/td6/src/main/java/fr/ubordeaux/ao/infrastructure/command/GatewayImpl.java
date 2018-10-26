package fr.ubordeaux.ao.infrastructure.command;

import java.util.*;

import fr.ubordeaux.ao.application.command.Command;
import fr.ubordeaux.ao.application.command.Gateway;


public class GatewayImpl {
    public List<Command> CommandList;
    public GatewayImpl extends Gatewey {
        CommandList= new Arraylist<Command>();
    }
    public void add(Command com){
        CommandList.add(com);
    }
    public void pop(Command com){
        CommandList.pop(com);
    }
}