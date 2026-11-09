/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$Use
void Rotatelab_Boosters_MagicWand3DController__Use (Rotatelab_Boosters_MagicWand3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$Use
   void Rotatelab_Boosters_MagicWand3DController__Use (Rotatelab_Boosters_MagicWand3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_MagicWand3DController__Use_1131184(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_20 [16];
  
  pcVar3 = (char *)(_UNK_0114128c + 0x114119c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141290 + 0x11411b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141294 + 0x11411bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141298 + 0x11411c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114129c + 0x11411d4));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011412a0 + 0x11411e8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  BoosterPreventController__SetPopupVisibility_fa3504(iVar1,0,0);
  Rotatelab_Boosters_MagicWand3DController__UpdateAnimationState_11312b0(param_1,2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011412a4 + 0x1141228));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_011412a8 + 0x1141244),0);
  if (*(int *)(**(int **)(_UNK_011412ac + 0x1141258) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3fc00000,uVar2,0,0,0);
  return;
}

