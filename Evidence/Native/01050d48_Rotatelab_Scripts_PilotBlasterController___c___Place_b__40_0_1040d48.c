/* IL2CPP: Rotatelab.Scripts.PilotBlasterController.<>c$$<Place>b__40_0
void Rotatelab_Scripts_PilotBlasterController___c___Place_b__40_0 (Rotatelab_Scripts_PilotBlasterController___c_o* __this, Rotatelab_Scripts_PilotBlasterController_o* this, float weight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController.<>c$$<Place>b__40_0
   void Rotatelab_Scripts_PilotBlasterController___c___Place_b__40_0
   (Rotatelab_Scripts_PilotBlasterController___c_o* __this,
   Rotatelab_Scripts_PilotBlasterController_o* this, float weight, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController___c___Place_b__40_0_1040d48
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x1b0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_035de654 + 0x35de5d4);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de658 + 0x35de5e8),uVar2,param_3,0);
    *pcVar3 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035de65c + 0x35de620);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035de660 + 0x35de630);
    *(code **)(_UNK_035de664 + 0x35de640) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035de650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar4,uVar2,param_3);
  return;
}

