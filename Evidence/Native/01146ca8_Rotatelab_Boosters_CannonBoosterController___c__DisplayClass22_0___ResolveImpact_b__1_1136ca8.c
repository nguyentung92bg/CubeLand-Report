/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c__DisplayClass22_0$$<ResolveImpact>b__1
void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass22_0___ResolveImpact_b__1 (Rotatelab_Boosters_CannonBoosterController___c__DisplayClass22_0_o* __this, Rotatelab_Boosters_CannonBoosterController_o* __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<>c__DisplayClass22_0$$<ResolveImpact>b__1
   void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass22_0___ResolveImpact_b__1
   (Rotatelab_Boosters_CannonBoosterController___c__DisplayClass22_0_o* __this,
   Rotatelab_Boosters_CannonBoosterController_o* __, const MethodInfo* method); */

void Rotatelab_Boosters_CannonBoosterController___c__DisplayClass22_0___ResolveImpact_b__1_1136ca8
               (int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  
  pcVar2 = (char *)(_UNK_01146d7c + 0x1146cbc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146d80 + 0x1146cd0));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01146d84 + 0x1146ce4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x18) != '\0') {
    return;
  }
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x110))(piVar4,*(undefined4 *)(*piVar4 + 0x114));
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01146d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x118))(piVar4,*(undefined4 *)(*piVar4 + 0x11c));
  return;
}

