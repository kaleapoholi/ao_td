package fr.ubordeaux.ao.application.command;

public interface Gateway{
    public void add(Command com);
    public void pop(Command com);
}