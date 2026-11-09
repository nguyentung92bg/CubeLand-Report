/* IL2CPP: Rotatelab.SingletonClass<object>$$get_Instance
Il2CppObject* Rotatelab_SingletonClass_object___get_Instance (const MethodInfo_1A99F94* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SingletonClass<object>$$get_Instance
   Il2CppObject* Rotatelab_SingletonClass_object___get_Instance (const MethodInfo_1A99F94* method);
    */

undefined4 Rotatelab_SingletonClass_object___get_Instance_1a99f94(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (**(int **)(iVar1 + 0x5c) == 0) {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    uVar3 = System_Activator__CreateInstance_object__139ade8
                      (*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xc));
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar2 = *(int *)(param_1 + 0x10);
    **(undefined4 **)(iVar1 + 0x5c) = uVar3;
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    thunk_FUN_00ec5080(*(undefined4 *)(iVar1 + 0x5c),uVar3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}

