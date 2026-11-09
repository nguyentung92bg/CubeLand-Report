/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$get_Instance
Il2CppObject* Rotatelab_SingletonBehaviour_object___get_Instance (const MethodInfo_1A99858* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviour<object>$$get_Instance
   Il2CppObject* Rotatelab_SingletonBehaviour_object___get_Instance (const MethodInfo_1A99858*
   method); */

undefined4 Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_01aa99e4 + 0x1aa986c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa99e8 + 0x1aa9880));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  piVar5 = *(int **)(_UNK_01aa99ec + 0x1aa98c0);
  iVar2 = *piVar5;
  uVar4 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934(iVar2);
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uVar4 = UnityEngine_Object__FindAnyObjectByType_object__14d422c
                      (*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc));
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar2 = *(int *)(param_1 + 0x10);
      **(undefined4 **)(iVar1 + 0x5c) = uVar4;
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      thunk_FUN_00ec5080(*(undefined4 *)(iVar1 + 0x5c),uVar4);
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}

