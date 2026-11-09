/* IL2CPP: Rotatelab.GameAction$$op_Addition
Rotatelab_GameAction_o* Rotatelab_GameAction__op_Addition (Rotatelab_GameAction_o* c1, System_Action_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction$$op_Addition
   Rotatelab_GameAction_o* Rotatelab_GameAction__op_Addition (Rotatelab_GameAction_o* c1,
   System_Action_o* x, const MethodInfo* method); */

int Rotatelab_GameAction__op_Addition_fbfed8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_00fcffac + 0xfcfef0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcffb0 + 0xfcff04));
    *pcVar3 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)(param_1 + 8);
  piVar1 = (int *)System_Delegate__Combine_2bbca94(*piVar4,param_2,0);
  if (piVar1 == (int *)0x0) {
    *piVar4 = 0;
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = **(int **)(_UNK_00fcffb4 + 0xfcff48);
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
    *piVar4 = (int)piVar1;
    if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar1);
    }
  }
  thunk_FUN_00ec5080(piVar4,piVar1);
  return param_1;
}

