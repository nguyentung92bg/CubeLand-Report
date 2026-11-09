/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterInfoController$$ClosePopup
void Rotatelab_RainbowShooter_RainbowShooterInfoController__ClosePopup (Rotatelab_RainbowShooter_RainbowShooterInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterInfoController$$ClosePopup
   void Rotatelab_RainbowShooter_RainbowShooterInfoController__ClosePopup
   (Rotatelab_RainbowShooter_RainbowShooterInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterInfoController__ClosePopup_10acd64(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_010bcee4 + 0x10bcd7c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bcee8 + 0x10bcd90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bceec + 0x10bcd9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bcef0 + 0x10bcda8));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x30),0,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x1c),0,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x24),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010bcef4 + 0x10bce2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_38,uVar2,0,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bcef8 + 0x10bce9c));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010bcefc + 0x10bcebc),0);
  PrimeTween_Tween__OnComplete_2ceddf8(auStack_48,&uStack_28,uVar2,0,0);
  return;
}

