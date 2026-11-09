/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$OnDestroy
void Rotatelab_Grid_GridVisibilityController__OnDestroy (Rotatelab_Grid_GridVisibilityController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$OnDestroy
   void Rotatelab_Grid_GridVisibilityController__OnDestroy
   (Rotatelab_Grid_GridVisibilityController_o* __this, const MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__OnDestroy_1108dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_01118eb4 + 0x1118dd4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118eb8 + 0x1118de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118ebc + 0x1118df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118ec0 + 0x1118e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118ec4 + 0x1118e0c));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01118ec8 + 0x1118e20);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01118ecc + 0x1118e44));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01118ed0 + 0x1118e64),0);
  uVar2 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c) = uVar2;
  thunk_FUN_00ec5080();
  Unity_Jobs_JobHandle__Complete_359b688(param_1 + 0x48,0);
  iVar1 = **(int **)(_UNK_01118ed4 + 0x1118ea8);
  if ((*(ushort *)(*(int *)(iVar1 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02824edc + 0x2824e88));
    uVar2 = thunk_FUN_00f00cdc();
    uVar6 = *(undefined4 *)(_UNK_02824ee0 + 0x2824e9c);
  }
  else {
    if (iVar4 < 0x40) {
      if (1 < iVar4) {
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__FreeTracked_35a0504(iVar3,iVar4,0);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      *(int *)(param_1 + 0x38) = 0;
      return;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02824ee4 + 0x2824ea8));
    uVar2 = thunk_FUN_00f00cdc();
    uVar6 = *(undefined4 *)(_UNK_02824ee8 + 0x2824ebc);
  }
  uVar6 = thunk_FUN_00f23fd0(uVar6);
  System_InvalidOperationException___ctor_2b6e948(uVar2,uVar6,0);
  func_0x00ec3920(uVar2,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

