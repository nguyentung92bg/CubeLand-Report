/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$Awake
void Rotatelab_SagaMap_SagaMapController__Awake (Rotatelab_SagaMap_SagaMapController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SagaMap.SagaMapController$$Awake
   void Rotatelab_SagaMap_SagaMapController__Awake (Rotatelab_SagaMap_SagaMapController_o* __this,
   const MethodInfo* method); */

void Rotatelab_SagaMap_SagaMapController__Awake_1081e0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01091f04 + 0x1091e24);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091f08 + 0x1091e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091f0c + 0x1091e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091f10 + 0x1091e50));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_20,*(int *)(param_1 + 0x18),0);
  piVar5 = *(int **)(_UNK_01091f14 + 0x1091e88);
  *(undefined4 *)(param_1 + 0x30) = uStack_20;
  *(undefined4 *)(param_1 + 0x34) = uStack_1c;
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x78);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01091f18 + 0x1091eb0));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01091f1c + 0x1091ed0),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x78) = uVar2;
  thunk_FUN_00ec5080();
  return;
}

