/* IL2CPP: Rotatelab.ObservableValue<long>$$remove_OnValueChanged
void Rotatelab_ObservableValue_long___remove_OnValueChanged (Rotatelab_ObservableValue_long__o* __this, System_Action_T__o* value, const MethodInfo_185D57C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<long>$$remove_OnValueChanged
   void Rotatelab_ObservableValue_long___remove_OnValueChanged (Rotatelab_ObservableValue_long__o*
   __this, System_Action_T__o* value, const MethodInfo_185D57C* method); */

void Rotatelab_ObservableValue_long___remove_OnValueChanged_185d57c
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar1,param_2,0);
    iVar4 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
    }
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar4), iVar3 == 0)) break;
    iVar2 = FUN_00efd180((int *)(param_1 + 0x10),iVar3,iVar1);
    bVar5 = iVar2 == iVar1;
    iVar1 = iVar2;
    if (bVar5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar2,iVar4);
}

