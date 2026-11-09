/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<__Il2CppFullySharedGenericType>$$SetStateMachine
void Rotatelab_Extensions__WithTimeout_d__100___Il2CppFullySharedGenericType___SetStateMachine (Rotatelab_Extensions__WithTimeout_d__100_T__o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo_17A8818* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<__Il2CppFullySharedGenericType>$$SetStateMachine
   void Rotatelab_Extensions__WithTimeout_d__100___Il2CppFullySharedGenericType___SetStateMachine
   (Rotatelab_Extensions__WithTimeout_d__100_T__o __this,
   System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo_17A8818*
   method); */

void Rotatelab_Extensions__WithTimeout_d__100___Il2CppFullySharedGenericType___SetStateMachine_17a8818
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(param_3 + 0x10);
  uVar1 = *(ushort *)(iVar2 + 0xbd);
  iVar3 = iVar2;
  if ((uVar1 & 1) == 0) {
    iVar3 = FUN_00efd768();
    iVar2 = *(int *)(param_3 + 0x10);
    uVar1 = *(ushort *)(iVar2 + 0xbd);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(*(int *)(iVar3 + 0x60) + 0x4c);
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  uVar4 = thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(iVar2 + 0x60) + 0x40) + 0x14);
  iVar3 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
                    /* WARNING: Could not recover jumptable at 0x017b88b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4,param_2,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x4c));
  return;
}

