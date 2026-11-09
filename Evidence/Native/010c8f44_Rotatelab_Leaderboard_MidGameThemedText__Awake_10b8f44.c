/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$Awake
void Rotatelab_Leaderboard_MidGameThemedText__Awake (Rotatelab_Leaderboard_MidGameThemedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$Awake
   void Rotatelab_Leaderboard_MidGameThemedText__Awake (Rotatelab_Leaderboard_MidGameThemedText_o*
   __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedText__Awake_10b8f44(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar5 + 0x2a8))(piVar5,*(undefined4 *)(*piVar5 + 0x2ac));
  puVar4 = (undefined4 *)(param_1 + 0x18);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

