/* IL2CPP: Rotatelab.Networking.CloudSaveManager.RemoteDataFetchedDelegate$$.ctor
void Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate___ctor (Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.RemoteDataFetchedDelegate$$.ctor
   void Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate___ctor
   (Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate_o* __this, Il2CppObject* object,
   intptr_t method, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager_RemoteDataFetchedDelegate___ctor_1146c94
               (int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) = param_3;
  thunk_FUN_00ec5080();
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = FUN_00ec38a0(param_3);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_00f08324(0,_UNK_01156d30 + 0x1156d04);
      func_0x00ec3920(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(int *)(param_1 + 0xc) = _UNK_01156d2c + 0x1156ce8;
    goto LAB_01156d1c;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
LAB_01156d1c:
  *(int *)(param_1 + 0x1c) = _UNK_01156d34 + 0x1156d28;
  return;
}

