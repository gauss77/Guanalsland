// Skeleton class generated by rmic, do not edit.
// Contents subject to change without notice.

package G_APPL;


public final class GServer_Skel
    extends java.lang.Object
    implements java.rmi.server.Skeleton
{
    private static java.rmi.server.Operation[] operations = {
        new java.rmi.server.Operation("G_APPL.IRefController ConnectClient(java.rmi.dgc.VMID)")
    };
    
    private static final long interfaceHash = 8985613128911870129L;
    
    public java.rmi.server.Operation[] getOperations() { 
        return operations;
    }
    
    public void dispatch(java.rmi.Remote obj, java.rmi.server.RemoteCall call, int opnum, long hash) throws java.rmi.RemoteException, Exception {
        // Exceptions pass through, to be caught, identified and marshalled
        
        if (hash != interfaceHash)
            throw new java.rmi.server.SkeletonMismatchException("Hash mismatch");
        G_APPL.GServer server = (G_APPL.GServer)obj;
        switch (opnum) {
        case 0: { // ConnectClient
            java.rmi.dgc.VMID $_VMID_1;
            try {
                java.io.ObjectInput in = call.getInputStream();
                $_VMID_1 = (java.rmi.dgc.VMID)in.readObject();
            } catch (java.io.IOException ex) {
                throw new java.rmi.UnmarshalException("Error unmarshaling arguments", ex);
            } finally {
                call.releaseInputStream();
            };
            G_APPL.IRefController $result = server.ConnectClient($_VMID_1);
            try {
                java.io.ObjectOutput out = call.getResultStream(true);
                out.writeObject($result);
            } catch (java.io.IOException ex) {
                throw new java.rmi.MarshalException("Error marshaling return", ex);
            };
            break;
            }
        default:
            throw new java.rmi.RemoteException("Method number out of range");
        }
    }
}
