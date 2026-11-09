/* IL2CPP: Rotatelab.SingletonScriptableObject<object>$$get_Instance
Il2CppObject* Rotatelab_SingletonScriptableObject_object___get_Instance (const MethodInfo_1A9A0A8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonScriptableObject<object>$$get_Instance
   Il2CppObject* Rotatelab_SingletonScriptableObject_object___get_Instance (const
   MethodInfo_1A9A0A8* method); */

undefined4 Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_01aaa264 + 0x1aaa0bc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aaa268 + 0x1aaa0d0));
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
  uVar4 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01aaa26c + 0x1aaa110) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_01aaa26c + 0x1aaa110));
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(_UNK_01aaa270 + 0x1aaa164) + 0x70);
    uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc);
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934(iVar2);
    }
    uVar4 = System_Type__GetTypeFromHandle_2b80928(uVar4,0);
    uVar4 = Rotatelab_SingletonConfigurationAttribute__GetSingletonPath_10792b4(uVar4,0);
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uVar4 = UnityEngine_Resources__Load_object__159c3d0
                      (uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10));
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

