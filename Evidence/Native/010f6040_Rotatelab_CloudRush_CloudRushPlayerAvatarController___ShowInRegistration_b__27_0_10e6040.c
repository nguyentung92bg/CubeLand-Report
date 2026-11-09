/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$<ShowInRegistration>b__27_0
void Rotatelab_CloudRush_CloudRushPlayerAvatarController___ShowInRegistration_b__27_0 (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$<ShowInRegistration>b__27_0
   void Rotatelab_CloudRush_CloudRushPlayerAvatarController___ShowInRegistration_b__27_0
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController___ShowInRegistration_b__27_0_10e6040
               (int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pcVar1 = (char *)(_UNK_010f610c + 0x10f605c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6110 + 0x10f6070));
    *pcVar1 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  PrimeTween_Easing__op_Implicit_2ce2f30(&uStack_40,*(undefined4 *)(param_1 + 0x20),0);
  if (*(int *)(**(int **)(_UNK_010f6114 + 0x10f60a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&uStack_40,uVar2,uVar3,0x3e4ccccd,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,1,0
             ,0,0,0,0);
  return;
}

