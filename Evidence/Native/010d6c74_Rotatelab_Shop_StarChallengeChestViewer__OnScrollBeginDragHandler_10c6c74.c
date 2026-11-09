/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnScrollBeginDragHandler
void Rotatelab_Shop_StarChallengeChestViewer__OnScrollBeginDragHandler (Rotatelab_Shop_StarChallengeChestViewer_o* __this, UnityEngine_EventSystems_PointerEventData_o* __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnScrollBeginDragHandler
   void Rotatelab_Shop_StarChallengeChestViewer__OnScrollBeginDragHandler
   (Rotatelab_Shop_StarChallengeChestViewer_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   __, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeChestViewer__OnScrollBeginDragHandler_10c6c74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_010d6d98 + 0x10d6c8c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6d9c + 0x10d6ca0));
    *pcVar5 = '\x01';
  }
  iVar1 = PrimeTween_Sequence__get_isAlive_2ceece0(param_1 + 0x28,0);
  if (iVar1 != 0) {
    PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x28,0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    pcVar5 = (char *)(_UNK_010d6da0 + 0x10d6cdc);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d6da4 + 0x10d6cf4));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_010d6da8 + 0x10d6d10) + 0x5c);
    uVar4 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,0x1a,0);
    if (*(int *)(**(int **)(_UNK_010d6dac + 0x10d6d3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce6560
              (&uStack_38,uVar2,uVar4,uVar6,uVar7,0x3e19999a,uStack_38,uStack_34,uStack_30,uStack_2c
               ,uStack_28,1,0,0,0,0,0);
  }
  return;
}

