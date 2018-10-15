package fr.ubordeaux.ao.domain.exception;

public class TextualMenuManagementException extends RuntimeException {
    private static final long serialVersionUID = 1L;

	public TextualMenuManagementException(String msg) {
        super(msg);
    }
}