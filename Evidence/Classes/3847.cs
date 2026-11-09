public sealed class CloudSaveManager.RemoteDataFetchedDelegate : MulticastDelegate // TypeDefIndex: 3847
{
	// Methods

	// RVA: 0x1146C94 Offset: 0x1146C94 VA: 0x1146C94
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1146D38 Offset: 0x1146D38 VA: 0x1146D38 Slot: 13
	public virtual void Invoke(bool isRemoteDataApplied) { }

	// RVA: 0x1146D48 Offset: 0x1146D48 VA: 0x1146D48 Slot: 14
	public virtual IAsyncResult BeginInvoke(bool isRemoteDataApplied, AsyncCallback callback, object object) { }

	// RVA: 0x1146DA4 Offset: 0x1146DA4 VA: 0x1146DA4 Slot: 15
	public virtual void EndInvoke(IAsyncResult result) { }
}

// Namespace: 