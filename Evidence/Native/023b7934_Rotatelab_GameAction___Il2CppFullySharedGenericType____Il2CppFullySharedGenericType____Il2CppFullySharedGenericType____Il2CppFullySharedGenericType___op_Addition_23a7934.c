/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$op_Addition
Rotatelab_GameAction_T1__T2__T3__T4__o* Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___op_Addition (Rotatelab_GameAction_T1__T2__T3__T4__o* c1, System_Action_T1__T2__T3__T4__o* x, const MethodInfo_23A7934* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$op_Addition
   Rotatelab_GameAction_T1__T2__T3__T4__o*
   Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___op_Addition
   (Rotatelab_GameAction_T1__T2__T3__T4__o* c1, System_Action_T1__T2__T3__T4__o* x, const
   MethodInfo_23A7934* method); */

int Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___op_Addition_23a7934
              (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)(param_1 + 8);
  iVar1 = System_Delegate__Combine_2bbca94(*piVar4,param_2,0);
  iVar2 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar1,iVar2), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar1,iVar2);
  }
  iVar2 = *(int *)(param_3 + 0x10);
  *piVar4 = iVar3;
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar1,iVar2), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar1,iVar2);
  }
  thunk_FUN_00ec5080(piVar4,iVar3);
  return param_1;
}

