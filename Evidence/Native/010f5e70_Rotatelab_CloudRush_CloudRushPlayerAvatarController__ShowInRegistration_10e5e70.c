/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$ShowInRegistration
void Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInRegistration (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$ShowInRegistration
   void Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInRegistration
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__ShowInRegistration_10e5e70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_010f5fd8 + 0x10f5e88);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5fdc + 0x10f5e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5fe0 + 0x10f5ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5fe4 + 0x10f5eb4));
    *pcVar9 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  Rotatelab_CloudRush_CloudRushPlayerAvatarController__get_BaseScale_10e5758(&uStack_50,param_1);
  uVar4 = uStack_48;
  uVar2 = uStack_4c;
  uVar8 = uStack_50;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,0xb,0);
  uVar6 = uStack_44;
  uVar5 = uStack_48;
  uVar3 = uStack_4c;
  uVar1 = uStack_50;
  if (*(int *)(**(int **)(_UNK_010f5fe8 + 0x10f5f14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_50,uVar7,uVar8,uVar2,uVar4,0x3e4ccccd,uVar1,uVar3,uVar5,uVar6,uStack_40,1,0,0,0
             ,0,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f5fec + 0x10f5f90));
  System_Action___ctor_2b10bac(uVar8,param_1,**(undefined4 **)(_UNK_010f5ff0 + 0x10f5fb0),0);
  PrimeTween_Tween__OnComplete_2ceddf8(auStack_60,&uStack_38,uVar8,0,0);
  return;
}

