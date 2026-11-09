/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SetRemoteDataFetched
void Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched (Rotatelab_Networking_CloudSaveManager_o* __this, bool isRemoteDataApplied, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SetRemoteDataFetched
   void Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched
   (Rotatelab_Networking_CloudSaveManager_o* __this, bool isRemoteDataApplied, const MethodInfo*
   method); */

void Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched_11437ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (param_2 != 0 && iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}

