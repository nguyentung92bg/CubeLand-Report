/* IL2CPP: Rotatelab.Scripts.BaseDockController<object>$$get_DockedPlaceable
Il2CppObject* Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable (Rotatelab_Scripts_BaseDockController_T__o* __this, const MethodInfo_1B276A0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseDockController<object>$$get_DockedPlaceable
   Il2CppObject* Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable
   (Rotatelab_Scripts_BaseDockController_T__o* __this, const MethodInfo_1B276A0* method); */

int Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
              (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = **(int **)(*(int *)(param_2 + 0x10) + 0x60);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  if (iVar2 != 0) {
    iVar1 = thunk_FUN_00f00bc8(iVar2,iVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar2,iVar3);
  }
  return 0;
}

