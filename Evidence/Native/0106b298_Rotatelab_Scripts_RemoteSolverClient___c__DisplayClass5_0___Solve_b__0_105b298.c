/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<>c__DisplayClass5_0$$<Solve>b__0
void Rotatelab_Scripts_RemoteSolverClient___c__DisplayClass5_0___Solve_b__0 (Rotatelab_Scripts_RemoteSolverClient___c__DisplayClass5_0_o* __this, System_String_o* payload, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<>c__DisplayClass5_0$$<Solve>b__0
   void Rotatelab_Scripts_RemoteSolverClient___c__DisplayClass5_0___Solve_b__0
   (Rotatelab_Scripts_RemoteSolverClient___c__DisplayClass5_0_o* __this, System_String_o* payload,
   const MethodInfo* method); */

void Rotatelab_Scripts_RemoteSolverClient___c__DisplayClass5_0___Solve_b__0_105b298
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_0106b40c + 0x106b2b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b410 + 0x106b2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106b414 + 0x106b2d0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0106b418 + 0x106b2e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__14a6fd4
                    (param_2,**(undefined4 **)(_UNK_0106b41c + 0x106b300));
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),iVar3,*(undefined4 *)(iVar6 + 0x14));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
    return;
  }
  piVar4 = (int *)(param_1 + 0x10);
  *piVar4 = *(int *)(iVar3 + 0x14);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

