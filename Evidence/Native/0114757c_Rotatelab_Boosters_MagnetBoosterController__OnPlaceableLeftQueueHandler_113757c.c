/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$OnPlaceableLeftQueueHandler
void Rotatelab_Boosters_MagnetBoosterController__OnPlaceableLeftQueueHandler (Rotatelab_Boosters_MagnetBoosterController_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$OnPlaceableLeftQueueHandler
   void Rotatelab_Boosters_MagnetBoosterController__OnPlaceableLeftQueueHandler
   (Rotatelab_Boosters_MagnetBoosterController_o* __this,
   Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method); */

void Rotatelab_Boosters_MagnetBoosterController__OnPlaceableLeftQueueHandler_113757c
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 auStack_20 [16];
  
  pcVar4 = (char *)(_UNK_011476a0 + 0x1147598);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011476a4 + 0x11475ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011476a8 + 0x11475b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011476ac + 0x11475c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011476b0 + 0x11475d0));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_Boosters_MagnetBoosterController__get_IsActive_1137284();
  if (iVar1 != 0 && param_2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_011476b4 + 0x11475fc) + 0xb8);
    if ((uVar3 <= *(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_011476b4 + 0x11475fc)
       )) {
      Rotatelab_Boosters_BaseBoosterController__RemoveFromActiveBoosters_1132168(param_1);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011476b8 + 0x1147638));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_011476bc + 0x1147658),0);
      if (*(int *)(**(int **)(_UNK_011476c0 + 0x114766c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3ecccccd,uVar2,0,0,0);
    }
  }
  return;
}

