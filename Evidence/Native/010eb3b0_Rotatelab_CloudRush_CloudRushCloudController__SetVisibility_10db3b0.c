/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$SetVisibility
float Rotatelab_CloudRush_CloudRushCloudController__SetVisibility (Rotatelab_CloudRush_CloudRushCloudController_o* __this, bool isVisible, bool isInstant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$SetVisibility
   float Rotatelab_CloudRush_CloudRushCloudController__SetVisibility
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, bool isVisible, bool isInstant, const
   MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushCloudController__SetVisibility_10db3b0
          (int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar5 = (char *)(_UNK_010eb544 + 0x10eb3d8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb548 + 0x10eb3ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb54c + 0x10eb3f8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010eb550 + 0x10eb410);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x30),0);
  if (param_2 == 0) {
    uVar8 = Rotatelab_CloudRush_CloudRushCloudController__GetOffScreenAnchoredY_10db558(param_1);
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x28);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  if (param_3 == 0) {
    uVar4 = 0x1a;
    if (param_2 != 0) {
      uVar4 = 0x1b;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,uVar4,0);
    uVar3 = uStack_44;
    uVar2 = uStack_48;
    uVar1 = uStack_4c;
    uVar4 = uStack_50;
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPositionY_2ce7730
              (&uStack_50,uVar7,uVar8,uVar9,uVar4,uVar1,uVar2,uVar3,uStack_40,1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x30) = CONCAT44(uStack_4c,uStack_50);
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_44,uStack_48);
    thunk_FUN_00ec5080(param_1 + 0x38,0);
    uVar8 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(**(int **)(_UNK_010eb554 + 0x10eb460) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar7,uVar8,0);
    uVar8 = _UNK_010eb540;
  }
  return uVar8;
}

