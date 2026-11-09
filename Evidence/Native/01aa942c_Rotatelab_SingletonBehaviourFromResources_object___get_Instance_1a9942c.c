/* IL2CPP: Rotatelab.SingletonBehaviourFromResources<object>$$get_Instance
Il2CppObject* Rotatelab_SingletonBehaviourFromResources_object___get_Instance (const MethodInfo_1A9942C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviourFromResources<object>$$get_Instance
   Il2CppObject* Rotatelab_SingletonBehaviourFromResources_object___get_Instance (const
   MethodInfo_1A9942C* method); */

undefined4 Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_01aa9680 + 0x1aa9440);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa9684 + 0x1aa9454));
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
  piVar5 = *(int **)(_UNK_01aa9688 + 0x1aa9494);
  iVar2 = *piVar5;
  uVar4 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934(iVar2);
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(_UNK_01aa968c + 0x1aa94e8) + 0x70);
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
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uVar4 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar4,0,0,*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x14));
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
    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_gameObject_35fe360(**(int **)(iVar1 + 0x5c),0);
    UnityEngine_Object__DontDestroyOnLoad_3609c1c(uVar4,0);
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

