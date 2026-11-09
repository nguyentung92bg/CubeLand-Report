/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnDisable
void Rotatelab_Shop_StarChallengeChestViewer__OnDisable (Rotatelab_Shop_StarChallengeChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnDisable
   void Rotatelab_Shop_StarChallengeChestViewer__OnDisable
   (Rotatelab_Shop_StarChallengeChestViewer_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeChestViewer__OnDisable_10c61d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010d63a0 + 0x10d61f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63a4 + 0x10d6204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63a8 + 0x10d6210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63ac + 0x10d621c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63b0 + 0x10d6228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63b4 + 0x10d6234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63b8 + 0x10d6240));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010d63bc + 0x10d6254);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  uVar5 = **(undefined4 **)(iVar1 + 0x5c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d63c0 + 0x10d6278));
  System_Action_object__object____ctor_1f18fcc
            (uVar2,param_1,**(undefined4 **)(_UNK_010d63c4 + 0x10d6298),0);
  uVar2 = Rotatelab_GameAction_object__object___op_Subtraction_23a50c4
                    (uVar5,uVar2,**(undefined4 **)(_UNK_010d63c8 + 0x10d62b0));
  **(undefined4 **)(*piVar6 + 0x5c) = uVar2;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c));
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d63cc + 0x10d62e4));
  Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
            (uVar2,param_1,**(undefined4 **)(_UNK_010d63d0 + 0x10d6300),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerDragEventListener__remove_OnBeginDrag_111047c(iVar1,uVar2,0);
  PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x28,0);
  iVar1 = *(int *)(param_1 + 0x10);
  pcVar4 = (char *)(_UNK_010d63d4 + 0x10d6340);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d63d8 + 0x10d6354));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_010d63dc + 0x10d636c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  return;
}

