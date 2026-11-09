/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$OnDestroy
void Rotatelab_Scripts_SolutionGuideController__OnDestroy (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$OnDestroy
   void Rotatelab_Scripts_SolutionGuideController__OnDestroy
   (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_SolutionGuideController__OnDestroy_1052fac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  pcVar5 = (char *)(_UNK_01063168 + 0x1062fc0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106316c + 0x1062fd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063170 + 0x1062fe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063174 + 0x1062fec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063178 + 0x1062ff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106317c + 0x1063004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063180 + 0x1063010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063184 + 0x106301c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063188 + 0x1063028));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0106318c + 0x106303c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x124);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01063190 + 0x1063060));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01063194 + 0x1063080),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01063198 + 0x1063098));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar3;
  thunk_FUN_00ec5080();
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106319c + 0x10630c0));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xc) != 0) {
    if (*(int *)(**(int **)(_UNK_010631a0 + 0x10630f0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
    if (iVar4 != 0) {
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010631a4 + 0x1063124));
      System_Action_object____ctor_1f11414
                (uVar3,param_1,**(undefined4 **)(_UNK_010631a8 + 0x1063140),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_01050ee0 + 0x1050e54);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01050ee4 + 0x1050e68));
        *pcVar5 = '\x01';
      }
      puVar9 = *(undefined4 **)(_UNK_01050ee8 + 0x1050e80);
      iVar4 = *(int *)(iVar2 + 0xbc);
      do {
        iVar7 = 0;
        iVar1 = System_Delegate__Remove_2bbcc8c(iVar4,uVar3,0);
        if (iVar1 != 0) {
          uVar6 = *puVar9;
          iVar7 = thunk_FUN_00f00bc8(iVar1,uVar6);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00ec3e28(iVar1,uVar6);
          }
        }
        iVar1 = FUN_00efd180((int *)(iVar2 + 0xbc),iVar7,iVar4);
        bVar10 = iVar1 != iVar4;
        iVar4 = iVar1;
      } while (bVar10);
      return;
    }
  }
  return;
}

