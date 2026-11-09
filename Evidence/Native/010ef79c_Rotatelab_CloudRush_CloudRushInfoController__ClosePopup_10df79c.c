/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$ClosePopup
void Rotatelab_CloudRush_CloudRushInfoController__ClosePopup (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$ClosePopup
   void Rotatelab_CloudRush_CloudRushInfoController__ClosePopup
   (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushInfoController__ClosePopup_10df79c(int param_1)

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
  
  pcVar1 = (char *)(_UNK_010ef91c + 0x10ef7b4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ef920 + 0x10ef7c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ef924 + 0x10ef7d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ef928 + 0x10ef7e0));
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
  if (*(int *)(**(int **)(_UNK_010ef92c + 0x10ef864) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_38,uVar2,0,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ef930 + 0x10ef8d4));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010ef934 + 0x10ef8f4),0);
  PrimeTween_Tween__OnComplete_2ceddf8(auStack_48,&uStack_28,uVar2,0,0);
  return;
}

