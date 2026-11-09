/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$RequestChestView
void Rotatelab_DailyDelivery_DailyDeliveryChest__RequestChestView (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$RequestChestView
   void Rotatelab_DailyDelivery_DailyDeliveryChest__RequestChestView
   (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChest__RequestChestView_10d4e04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_010e4fb0 + 0x10e4e1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4fb4 + 0x10e4e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4fb8 + 0x10e4e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4fbc + 0x10e4e48));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  pcVar3 = (char *)(_UNK_010e4fc0 + 0x10e4e7c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4fc4 + 0x10e4e90));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_010e4fc8 + 0x10e4ea8) + 0x5c);
  fVar7 = *(float *)(iVar2 + 0x10);
  fVar8 = *(float *)(iVar2 + 0x14);
  fVar6 = *(float *)(iVar2 + 0xc);
  if (*(int *)(**(int **)(_UNK_010e4fcc + 0x10e4ed0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ShakeLocalPosition_2ceafe8
            (auStack_28,uVar1,fVar6 * 10.0,fVar7 * 10.0,fVar8 * 10.0,0x3e4ccccd,0x41200000,1,0,0,1,0
             ,0,0,0);
  piVar4 = *(int **)(_UNK_010e4fd0 + 0x10e4f50);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = **(int **)(iVar2 + 0x5c);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar2,uVar5,uVar1,**(undefined4 **)(_UNK_010e4fd4 + 0x10e4fa0));
  return;
}

