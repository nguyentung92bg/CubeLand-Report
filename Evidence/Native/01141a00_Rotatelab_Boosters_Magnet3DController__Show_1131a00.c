/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$Show
void Rotatelab_Boosters_Magnet3DController__Show (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011418e4) */
/* WARNING: Removing unreachable block (ram,0x011418f0) */
/* WARNING: Removing unreachable block (ram,0x011418f4) */
/* WARNING: Removing unreachable block (ram,0x0114191c) */
/* WARNING: Removing unreachable block (ram,0x01141928) */
/* WARNING: Removing unreachable block (ram,0x0114192c) */
/* WARNING: Removing unreachable block (ram,0x01141998) */
/* WARNING: Removing unreachable block (ram,0x0114199c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$Show
   void Rotatelab_Boosters_Magnet3DController__Show (Rotatelab_Boosters_Magnet3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController__Show_1131a00(int param_1)

{
  char *pcVar1;
  
  Rotatelab_Boosters_BaseBooster3DIconController__Show_1130928();
  pcVar1 = (char *)(_UNK_011419c4 + 0x1141810);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419c8 + 0x1141824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419cc + 0x1141830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d0 + 0x114183c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d4 + 0x1141848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d8 + 0x1141854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419dc + 0x1141860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419e0 + 0x114186c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_011419e4 + 0x11418b4),1,0,0);
    if (*(int *)(param_1 + 0x18) != 0) {
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_011419e8 + 0x11418dc),0,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

