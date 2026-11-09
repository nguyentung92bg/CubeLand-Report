/* IL2CPP: Rotatelab.MetaProgressionController$$ShowJourneyAfterDelay
void Rotatelab_MetaProgressionController__ShowJourneyAfterDelay (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$ShowJourneyAfterDelay
   void Rotatelab_MetaProgressionController__ShowJourneyAfterDelay
   (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__ShowJourneyAfterDelay_fbdf10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_20 [16];
  
  pcVar3 = (char *)(_UNK_00fce010 + 0xfcdf28);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce014 + 0xfcdf3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce018 + 0xfcdf48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce01c + 0xfcdf54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce020 + 0xfcdf60));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_00fce024 + 0xfcdf74));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar1,0,param_1,0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fce028 + 0xfcdfac));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_00fce02c + 0xfcdfc8),0);
  if (*(int *)(**(int **)(_UNK_00fce030 + 0xfcdfdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3f800000,uVar2,0,0,0);
  return;
}

