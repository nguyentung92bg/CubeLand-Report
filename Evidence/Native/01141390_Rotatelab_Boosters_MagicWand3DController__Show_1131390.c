/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$Show
void Rotatelab_Boosters_MagicWand3DController__Show (Rotatelab_Boosters_MagicWand3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01141328) */
/* WARNING: Removing unreachable block (ram,0x01141338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$Show
   void Rotatelab_Boosters_MagicWand3DController__Show (Rotatelab_Boosters_MagicWand3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_MagicWand3DController__Show_1131390(int param_1)

{
  char *pcVar1;
  
  Rotatelab_Boosters_BaseBooster3DIconController__Show_1130928();
  pcVar1 = (char *)(_UNK_01141374 + 0x11412cc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141378 + 0x11412e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114137c + 0x11412ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141380 + 0x11412f8));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_01141384 + 0x1141328),0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

