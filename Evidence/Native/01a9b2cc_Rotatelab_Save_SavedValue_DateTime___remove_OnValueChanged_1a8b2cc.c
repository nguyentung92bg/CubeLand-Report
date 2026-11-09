/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$remove_OnValueChanged
void Rotatelab_Save_SavedValue_DateTime___remove_OnValueChanged (Rotatelab_Save_SavedValue_DateTime__o* __this, System_Action_T__o* value, const MethodInfo_1A8B2CC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$remove_OnValueChanged
   void Rotatelab_Save_SavedValue_DateTime___remove_OnValueChanged
   (Rotatelab_Save_SavedValue_DateTime__o* __this, System_Action_T__o* value, const
   MethodInfo_1A8B2CC* method); */

void Rotatelab_Save_SavedValue_DateTime___remove_OnValueChanged_1a8b2cc
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar1,param_2,0);
    iVar4 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x10);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
    }
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar4), iVar3 == 0)) break;
    iVar2 = FUN_00efd180((int *)(param_1 + 0x20),iVar3,iVar1);
    bVar5 = iVar2 == iVar1;
    iVar1 = iVar2;
    if (bVar5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar2,iVar4);
}

