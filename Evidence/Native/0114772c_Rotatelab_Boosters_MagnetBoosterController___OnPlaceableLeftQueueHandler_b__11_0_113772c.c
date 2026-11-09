/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$<OnPlaceableLeftQueueHandler>b__11_0
void Rotatelab_Boosters_MagnetBoosterController___OnPlaceableLeftQueueHandler_b__11_0 (Rotatelab_Boosters_MagnetBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$<OnPlaceableLeftQueueHandler>b__11_0
   void Rotatelab_Boosters_MagnetBoosterController___OnPlaceableLeftQueueHandler_b__11_0
   (Rotatelab_Boosters_MagnetBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_MagnetBoosterController___OnPlaceableLeftQueueHandler_b__11_0_113772c
               (undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_011477e8 + 0x1147740);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011477ec + 0x1147754));
    *pcVar3 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__Use_113229c(param_1);
  piVar2 = *(int **)(_UNK_011477f0 + 0x1147770);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
  pcVar3 = (char *)(_UNK_011477f4 + 0x11477b4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011477f8 + 0x11477c8));
    *pcVar3 = '\x01';
  }
  **(undefined1 **)(**(int **)(_UNK_011477fc + 0x11477dc) + 0x5c) = 0;
  return;
}

