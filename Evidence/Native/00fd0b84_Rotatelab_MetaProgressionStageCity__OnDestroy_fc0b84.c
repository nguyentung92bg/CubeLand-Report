/* IL2CPP: Rotatelab.MetaProgressionStageCity$$OnDestroy
void Rotatelab_MetaProgressionStageCity__OnDestroy (Rotatelab_MetaProgressionStageCity_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$OnDestroy
   void Rotatelab_MetaProgressionStageCity__OnDestroy (Rotatelab_MetaProgressionStageCity_o* __this,
   const MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__OnDestroy_fc0b84(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_00fd0c30 + 0xfd0b98);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0c34 + 0xfd0bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0c38 + 0xfd0bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0c3c + 0xfd0bc4));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                    (param_1 + 0x60,**(undefined4 **)(_UNK_00fd0c40 + 0xfd0bd8));
  if (iVar1 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(**(int **)(_UNK_00fd0c44 + 0xfd0bf4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_00fd0c48 + 0xfd0c24);
  iVar1 = *(int *)(iVar2 + 0x1c);
  uStack_14 = uVar4;
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___Release_17b6d98
            (&uStack_14,*(undefined4 *)(iVar1 + 4));
  return;
}

