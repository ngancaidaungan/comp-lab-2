/* 
	This file contains all the methods that are to be invoked using remote object.
	the interface Remote needs to be extended by your interface */


import java.rmi.*;

public interface ATM extends Remote
{
	void init(int b) throws RemoteException;
	int withDraw(int balance) throws RemoteException;
	int checkBalance() throws RemoteException;
}

/*All the remotely callable methods needs to throw RemoteException since it is checked and used RMI to handle calling exceptions*/
