/* IL2CPP: Rotatelab.Scripts.IvyLockController$$<Init>b__7_1
void Rotatelab_Scripts_IvyLockController___Init_b__7_1 (Rotatelab_Scripts_IvyLockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010228e4) */
/* WARNING: Removing unreachable block (ram,0x010228f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IvyLockController$$<Init>b__7_1
   void Rotatelab_Scripts_IvyLockController___Init_b__7_1 (Rotatelab_Scripts_IvyLockController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_IvyLockController___Init_b__7_1_1012ae8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01022930 + 0x1022878);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022934 + 0x102288c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022938 + 0x1022898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102293c + 0x10228a4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_01022940 + 0x10228e4),0,0,0);
  }
  return;
}

