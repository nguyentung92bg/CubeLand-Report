/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<VacuumVoxelsCoroutine>d__31$$System.IDisposable.Dispose
void Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_d__31__System_IDisposable_Dispose (Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Boosters.VacuumBoosterController.<VacuumVoxelsCoroutine>d__31$$System.IDisposable.Dispose
   void 
   Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_d__31__System_IDisposable_Dispose
   (Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_d__31_o* __this, const
   MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_d__31__System_IDisposable_Dispose_113939c
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  uVar3 = *(int *)(param_1 + 8) + 3;
  if (6 < uVar3) {
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x71U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_0114a028 + 0x1149f88);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a02c + 0x1149f9c));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0114a030 + 0x1149fc8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0114a014;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_0114a030 + 0x1149fc8),0);
LAB_0114a014:
                    /* WARNING: Could not recover jumptable at 0x0114a024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

