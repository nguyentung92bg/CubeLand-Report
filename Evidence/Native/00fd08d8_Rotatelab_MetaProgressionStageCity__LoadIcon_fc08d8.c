/* IL2CPP: Rotatelab.MetaProgressionStageCity$$LoadIcon
void Rotatelab_MetaProgressionStageCity__LoadIcon (Rotatelab_MetaProgressionStageCity_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$LoadIcon
   void Rotatelab_MetaProgressionStageCity__LoadIcon (Rotatelab_MetaProgressionStageCity_o* __this,
   const MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__LoadIcon_fc08d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_00fd0a5c + 0xfd08f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0a60 + 0xfd0904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0a64 + 0xfd0910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0a68 + 0xfd091c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0a6c + 0xfd0928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0a70 + 0xfd0934));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x58);
  piVar6 = (int *)0x0;
  puVar5 = (undefined8 *)(param_1 + 0x60);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    piVar6 = *(int **)(iVar2 + 8);
  }
  iVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                    (puVar5,**(undefined4 **)(_UNK_00fd0a74 + 0xfd0964));
  if (iVar2 == 0) {
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = (**(code **)(*piVar6 + 0xf0))(piVar6,*(undefined4 *)(*piVar6 + 0xf4));
    if (*(int *)(**(int **)(_UNK_00fd0a78 + 0xfd09a4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_AddressableAssets_Addressables__LoadAssetAsync_object__13a0144
              (&uStack_20,uVar3,**(undefined4 **)(_UNK_00fd0a7c + 0xfd09c4));
    *(undefined4 *)(param_1 + 0x68) = uStack_18;
    *puVar5 = uStack_20;
    thunk_FUN_00ec5080(puVar5,0);
    uVar3 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___WaitForCompletion_17b6994
                      (puVar5,**(undefined4 **)(_UNK_00fd0a80 + 0xfd09f4));
    if (*(int *)(**(int **)(_UNK_00fd0a84 + 0xfd0a0c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x1c),uVar3,0);
    }
  }
  return;
}

