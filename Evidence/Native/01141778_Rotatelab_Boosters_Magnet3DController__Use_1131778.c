/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$Use
void Rotatelab_Boosters_Magnet3DController__Use (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0114188c) */
/* WARNING: Removing unreachable block (ram,0x01141898) */
/* WARNING: Removing unreachable block (ram,0x0114189c) */
/* WARNING: Removing unreachable block (ram,0x011418cc) */
/* WARNING: Removing unreachable block (ram,0x011418d0) */
/* WARNING: Removing unreachable block (ram,0x0114187c) */
/* WARNING: Removing unreachable block (ram,0x01141884) */
/* WARNING: Removing unreachable block (ram,0x011418e4) */
/* WARNING: Removing unreachable block (ram,0x011418f0) */
/* WARNING: Removing unreachable block (ram,0x011418f4) */
/* WARNING: Removing unreachable block (ram,0x01141908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$Use
   void Rotatelab_Boosters_Magnet3DController__Use (Rotatelab_Boosters_Magnet3DController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController__Use_1131778(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_20 [16];
  
  pcVar3 = (char *)(_UNK_011417e8 + 0x114178c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011417ec + 0x11417a0));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011417f0 + 0x11417b4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  BoosterPreventController__SetPopupVisibility_fa3504(iVar1,0,0);
  pcVar3 = (char *)(_UNK_011419c4 + 0x1141810);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419c8 + 0x1141824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419cc + 0x1141830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d0 + 0x114183c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d4 + 0x1141848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d8 + 0x1141854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419dc + 0x1141860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419e0 + 0x114186c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_011419f0 + 0x1141944),1,0,0);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011419f4 + 0x114195c));
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_011419f8 + 0x1141978),0);
    if (*(int *)(**(int **)(_UNK_011419fc + 0x114198c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3dcccccd,uVar2,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

