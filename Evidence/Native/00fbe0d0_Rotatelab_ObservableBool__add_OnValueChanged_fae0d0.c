/* IL2CPP: Rotatelab.ObservableBool$$add_OnValueChanged
void Rotatelab_ObservableBool__add_OnValueChanged (Rotatelab_ObservableBool_o* __this, System_Action_bool__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableBool$$add_OnValueChanged
   void Rotatelab_ObservableBool__add_OnValueChanged (Rotatelab_ObservableBool_o* __this,
   System_Action_bool__o* value, const MethodInfo* method); */

void Rotatelab_ObservableBool__add_OnValueChanged_fae0d0(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_00fbe214 + 0xfbe0e8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe218 + 0xfbe0fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe21c + 0xfbe108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe220 + 0xfbe114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbe224 + 0xfbe120));
    *pcVar6 = '\x01';
  }
  piVar7 = (int *)(param_1 + 0x28);
  iVar3 = *piVar7;
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fbe228 + 0xfbe144));
    System_Action_long____ctor_1f10724(uVar4,param_1,**(undefined4 **)(_UNK_00fbe22c + 0xfbe160),0);
    Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4
              (param_1,uVar4,**(undefined4 **)(_UNK_00fbe230 + 0xfbe178));
    iVar3 = *(int *)(param_1 + 0x28);
  }
  iVar3 = System_Delegate__Combine_2bbca94(iVar3,param_2,0);
  if (iVar3 == 0) {
    *piVar7 = 0;
  }
  else {
    puVar8 = *(undefined4 **)(_UNK_00fbe234 + 0xfbe1ac);
    uVar4 = *puVar8;
    iVar5 = thunk_FUN_00f00bc8(iVar3,uVar4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar4);
    }
    uVar4 = *puVar8;
    *piVar7 = iVar5;
    iVar5 = thunk_FUN_00f00bc8(iVar3,uVar4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar3,uVar4);
    }
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar7 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

