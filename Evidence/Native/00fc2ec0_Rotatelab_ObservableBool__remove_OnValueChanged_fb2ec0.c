/* IL2CPP: Rotatelab.ObservableBool$$remove_OnValueChanged
void Rotatelab_ObservableBool__remove_OnValueChanged (Rotatelab_ObservableBool_o* __this, System_Action_bool__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableBool$$remove_OnValueChanged
   void Rotatelab_ObservableBool__remove_OnValueChanged (Rotatelab_ObservableBool_o* __this,
   System_Action_bool__o* value, const MethodInfo* method); */

void Rotatelab_ObservableBool__remove_OnValueChanged_fb2ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  pcVar4 = (char *)(_UNK_00fc3008 + 0xfc2ed8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc300c + 0xfc2eec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3010 + 0xfc2ef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3014 + 0xfc2f04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc3018 + 0xfc2f10));
    *pcVar4 = '\x01';
  }
  piVar6 = (int *)(param_1 + 0x28);
  iVar8 = 0;
  iVar1 = System_Delegate__Remove_2bbcc8c(*piVar6,param_2,0);
  if (iVar1 == 0) {
    *piVar6 = 0;
  }
  else {
    puVar9 = *(undefined4 **)(_UNK_00fc301c + 0xfc2f48);
    uVar5 = *puVar9;
    iVar8 = thunk_FUN_00f00bc8(iVar1,uVar5);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar1,uVar5);
    }
    uVar5 = *puVar9;
    *piVar6 = iVar8;
    iVar8 = thunk_FUN_00f00bc8(iVar1,uVar5);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar1,uVar5);
    }
  }
  thunk_FUN_00ec5080(piVar6,iVar8);
  if (*piVar6 != 0) {
    return;
  }
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc3020 + 0xfc2fc8));
  System_Action_long____ctor_1f10724(uVar5,param_1,**(undefined4 **)(_UNK_00fc3024 + 0xfc2fe4),0);
  iVar8 = **(int **)(_UNK_00fc3028 + 0xfc2ffc);
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar1,uVar5,0);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar7), iVar3 == 0)) break;
    iVar2 = FUN_00efd180((int *)(param_1 + 0x10),iVar3,iVar1);
    bVar10 = iVar2 == iVar1;
    iVar1 = iVar2;
    if (bVar10) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar2,iVar7);
}

